# Undo and Redo Text Editor using Stack

class Node:
    def __init__(self, value):
        self.data = value
        self.next = None


class Stack:
    def __init__(self):
        self.top = None

    def is_empty(self):
        return self.top is None

    def push(self, value):
        new_node = Node(value)
        new_node.next = self.top
        self.top = new_node

    def pop(self):
        if self.is_empty():
            return None

        data = self.top.data
        self.top = self.top.next
        return data

    def text_editor(self, text, pattern):
        undo_stack = Stack()
        redo_stack = Stack()

        # Store original text in undo stack
        for char in text:
            undo_stack.push(char)

        # Process undo/redo operations
        for operation in pattern:

            # Undo
            if operation == "u":
                if not undo_stack.is_empty():
                    data = undo_stack.pop()
                    redo_stack.push(data)

            # Redo
            elif operation == "r":
                if not redo_stack.is_empty():
                    data = redo_stack.pop()
                    undo_stack.push(data)

        # Build final text
        result = ""

        while not undo_stack.is_empty():
            result = undo_stack.pop() + result

        return result


stack = Stack()

print(stack.text_editor("Bharat", "uuur"))