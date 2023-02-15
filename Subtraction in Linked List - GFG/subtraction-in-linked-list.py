#User function Template for python3

def subLinkedList(l1, l2): 
    # Code here
    # return head of difference list
    p=q=0
    while(l1):
        p=p*10+l1.data
        l1=l1.next
    while(l2):
        q=q*10+l2.data
        l2=l2.next
    p=abs(p-q)
    r=str(p)
    for i in range(0,len(r)):
        print(r[i],end=" ")
        
    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data,end=' ')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        
        n = int(input())
        arr1 = ( int(x) for x in input().split() )
        LL1 = LinkedList()
        for i in arr1:
            LL1.insert(i)
        
        m = int(input())
        arr2 = ( int(x) for x in input().split() )
        LL2 = LinkedList()
        for i in arr2:
            LL2.insert(i)
        
        res = subLinkedList(LL1.head, LL2.head)
        printList(res)
# } Driver Code Ends