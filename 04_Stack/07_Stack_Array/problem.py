# Stact array implementation
class stack:
    def __init__(self, size):
        self.size = size
        self.stack = [None] * self.size
        self.top = -1
    
    # push
    def push(self,value):
        if self.top == self.size - 1:
            return 'Stack is overflow'
        else:
            self.top += 1
            self.stack[self.top] = value
        
        
    # pop
    def pop(self):
        if self.top == -1:
            return 'stack is Empty'
        
        else:
            data = self.stack[self.top]
            self.top -= 1
            print(data)
    
    # Traverse
    def traverse(self):
        for i in range(self.top + 1):
            print(self.stack[i], end=' ')        
        

s = stack(4)

s.push(1)
s.push(2)
s.push(3)
s.traverse()




