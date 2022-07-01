#stack implementation in python using link list
class node:
    def __init__(self,data,top):
        self.data = data
        self.next = top

class mystack:
    def __init__(self):
        self.top=None
        self.count=0
    
    def size(self):
        return self.count

    def isempty(self):
        if self.size()>0:
            return 1
        else:
            return 0

#in this the important point is nodes goes downwards
    def push(self,key):
        self.top = node(key,self.top)
        self.count+=1

    def pop(self):
        temp=0
        if self.isempty()==0:
            print("enter some element first")
        else:
            temp=self.top.data
            self.top = self.top.next  #in this the important point is nodes goes downwards
            self.count-=1
            print("the deleted element is",temp)

    def peek(self):
        if self.isempty()==0:
            print("enter some values firsr")
        else:
            print("the top element is",self.top.data)


s = mystack()
s.push(10)
s.push(20)
s.push(30)
s.push(40)
s.push(50)
s.push(60)
s.peek()
s.pop()
s.pop()
s.peek()        
print(s.size() )
print(s.isempty())

    

        

