# Reverse a string using Stack


# Node class
class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

#stack class
class stack:
    def __init__(self):
        self.top = None
    # isempty function (stack ==empty return true) else return false 
    def isempty(self):
        return self.top == None
    # push function add new node in stack 
    def push(self, value):
        new_node = Node(value)
        new_node.next = self.top
        self.top = new_node
    # Traverse function print the stack data
    def traverse(self):
        temp = self.top

        while temp != None:
            print(temp.data)
            temp = temp.next
            
    def pop(self):
            if (self.isempty()):
                return '---Stack Is Empty---'
            else:
                data = self.top.data
                self.top = self.top.next
                return data
            
    #reverse string 
    def reverse_string(self,text):
        
        for i in text:
            self.push(i)
        res = ''
        while not self.isempty():
            res = res + self.pop()
        print(res)

    
t = stack()



t.reverse_string('olleH')
t.reverse_string('tarahB')
t.reverse_string('rukaht')
