class node:
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None

class doubly_link_list:
    def __init__(self):
        self.head=None

    #insert a new element at the first position of node
    def insert(self,data):
        node1=node(data)
        node1.next=self.head
        if self.head!=None:
            self.head.prev=node1
        self.head=node1

    # insert element in last 
    def insert_at_last(self,data):
        node1 = node(data)
        temp=self.head
        while temp.next:
            temp=temp.next
        temp.next=node1
        node1.prev = temp

    def remove_at_position(self,index):
        if self.head==None:
            print("enter some values first")
        elif index==1:
            temp=self.head
            self.head=self.head.next
            self.head.prev=None
            temp.next=None
        else:
            c=0
            temp=self.head
            while c<index-2:
                c+=1
                temp=temp.next
            p=temp
            temp=temp.next
            p.next=temp.next
            temp.next.prev = p
            temp.prev=None
            temp.next=None



    def display(self):
        if self.head==None:
            print("enter some values first")
        else:
            temp=self.head
            while(temp):
                print(temp.data,end=' ')
                temp=temp.next
        

    
l = doubly_link_list()
l.insert(10)
l.insert(20)
l.insert(30)
l.insert(40)
l.insert(50)
l.insert_at_last(60)
l.insert_at_last(70)
l.insert_at_last(80)
l.remove_at_position(3)
l.display()
