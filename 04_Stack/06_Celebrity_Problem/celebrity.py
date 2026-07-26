class Node:
    def __init__(self, value):
        self.data = value
        self.next = None


class Stack:
    def __init__(self):
        self.top = None

    def is_empty(self):
        return self.top is None
    
    def size(self):
        temp = self.top
        count = 0

        while temp != None:
            count += 1
            temp = temp.next

        return count

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
    
    # check who is celebrity
    def find_celebrity(self, l):
       
        for i in range(len(l)):
            self.push(i)
        
        while self.size() >= 2:
            i = self.pop()
            j = self.pop()
            
            if l[i][j] == 0:
                self.push(i)
            else:
                self.push(j)
            
        celeb = self.pop()
        
        for i in range(len(l)):
            
            if i != celeb:
                if l[i][celeb] == 0 or l[celeb][i] == 1:
                    print('---No one is Celebrity---')
                    return
        
        print('The Celebrity is', celeb)
            


l = [
    [0,0,1,0],  
    [1,0,1,0],  
    [0,0,0,0],  
    [0,0,1,0],  
]
s = Stack()  
s.find_celebrity(l)      