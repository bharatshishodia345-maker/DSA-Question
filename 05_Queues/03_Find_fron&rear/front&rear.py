#Create Queues class And add size function

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

        data = self.front.data
        self.front = self.front.next

        if self.front == None:
            self.rear = None

        return data
        
    def is_empty(self):
        return self.front == None
    
    
    def trevrase(self):
        
        temp = self.front
        
        while temp != None:
            print(temp.data, end=' ')
            
            temp = temp.next
    
    # size function
    def size(self):
        temp = self.front
        count = 0
        
        while temp != None:
            count += 1
            temp = temp.next
        
        return count
    
    # front Item
    def front_item(self):
        if self.front == None:
            return 'Queue is empty'
        else:
            return self.front.data
    
    #rear Item
    def rear_item(self):
        if self.front == None:
            return 'Queue is empty'
        else:
            return self.rear.data
        
        
q = Queue()

q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)

q.trevrase()
print()
print('Front Item', q.front_item())
print('rear Item', q.rear_item())
