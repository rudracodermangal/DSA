class queue:
    def __init__(self,n):
        self.items = []
        self.n = len(self.items)
    def push(self,d):
        self.items.append(d)
    def pop(self):
        self.items.pop(0)
    def print_queue(self):
        print(self.items)

m1 = queue(5)
m1.push(4)
m1.push(5)
m1.push(6)
m1.push(7)
m1.pop()
m1.pop()
m1.print_queue()


