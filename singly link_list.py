class node:
    def __init__(self,data):
        self.data=data
        self.next=None

class linked_list:
    def __init__(self):
        self.head =None
#in insert function we add items in beggining of the list
    def insert_at_beggining(self,data):
        node1 = node(data)
        node1.next = self.head
        self.head=node1

    def insert_at_last(self,data):
        node1=node(data)
        if self.head==None:
            self.head = node1
        else:
            temp=self.head
            while temp.next:
                temp=temp.next
            temp.next=node1

    def delete_any_index(self,index):

        if self.head==None:
            print("enter some values first")
        elif index==1:
            temp=self.head
            self.head=self.head.next
            temp.next=None
        else:
            temp=self.head
            c=0
            while c<index-2:
                c+=1
                temp=temp.next
            p = temp.next
            temp.next=p.next

    def display(self):
        if self.head==None:
            print("enter some values first")
        else:
            temp=self.head
            while(temp):
                print(temp.data,end=' ')
                temp=temp.next
            print()

l = linked_list()
l.insert_at_beggining(10)
l.insert_at_beggining(20)
l.insert_at_beggining(30)
l.insert_at_last(70)
l.insert_at_last(80)
l.insert_at_last(90)
l.delete_any_index(6)
l.delete_any_index(1)
l.display()
            
