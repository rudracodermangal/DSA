class node:
    def __init__(self,data):
        self.data=data
        self.next = None

class myqueue:
    def __init__(self):
        self.head = None
        self.tail=None
        self.count=0
    
    def size(self):
        return self.count

    def isempty(self):
        return self.count
		
    def enqueue(self,data):
        node1 = node(data)
        if self.head==None:
            self.head=node1
        else:
            self.tail.next=node1
        
        self.count+=1
        self.tail=node1#we take tail point to node1 node

    def dequeue(self):
        temp=0
        if self.head==None:
            print("enter some values first")
        else:
            self.count-=1
            temp=self.head.data
            self.head = self.head.next
            if self.head==None:
                self.tail=None
            print("the deleted element is",temp)

    def peek(self):
        if self.head==None:
            print("enter some values first")
        else:
            print("the top element is",self.head.data)


q = myqueue()
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.enqueue(40)
q.enqueue(50)
q.enqueue(60)
q.dequeue()
q.dequeue()
q.dequeue()
q.dequeue()
q.dequeue()
q.peek()



