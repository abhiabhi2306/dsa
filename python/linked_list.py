class Element(object):
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList(object):
    def __init__(self, head=None):
        self.head = head

    def append(self, new_element):
        current = self.head
        if self.head:
            while current.next:
                current = current.next
            current.next = new_element
        else:
            self.head = new_element

    def get_position(self, position):
        temp = self.head
        if temp:
            for i in range(position-1):
                temp = temp.next
        return temp

    def insert(self, new_element, position):
        temp = self.head
        if temp:
            for i in range (position-2):
                temp=temp.next
            new_element.next=temp.next
            temp.next=new_element
        pass


    def delete(self, value):
        temp = self.head
        val = self.head
        prev = temp
        while temp:
            if temp.value==value:
                if val.value==value:
                    self.head=val.next
                prev.next=temp.next
            temp=temp.next
        pass





# Test cases
# Set up some Elements
e1 = Element(1)
e2 = Element(2)
e3 = Element(3)
e4 = Element(4)

# Start setting up a LinkedList
ll = LinkedList(e1)
ll.append(e2)
ll.append(e3)

# Test get_position
# Should print 3
print ll.head.next.next.value
# Should also print 3
print ll.get_position(3).value

# Test insert
ll.insert(e4,3)
# Should print 4 now
print ll.get_position(3).value

# Test delete
ll.delete(1)
# Should print 2 now
print ll.get_position(1).value
# Should print 4 now
print ll.get_position(2).value
# Should print 3 now
print ll.get_position(3).value
