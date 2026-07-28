#Create Queues class

class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
        
    
class Queue:
    def __init__(self):
        self.front = None
        self.rear = None
    
    
    def enqueue(self,value):
        
        new_node = Node(value)
        
        if self.rear == None:
            self.front = new_node
            self.rear = self.front
        else:
            self.rear.next = new_node
            self.rear = new_node
            
    def dequeue(self):
        
        if self.front == None:
            return 'Empty Queue'
        else:
            self.front = self.front.next
        
    def is_empty(self):
        return self.front == None
    
    
    def trevrase(self):
        
        temp = self.front
        
        while temp != None:
            print(temp.data, end=' ')
            
            temp = temp.next
        
q = Queue()

q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)

q.trevrase()