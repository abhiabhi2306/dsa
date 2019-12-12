"""Implement a function recursively to get the desired
Fibonacci sequence value.
Your code should have the same input/output as the 
iterative code in the instructions."""

def get_fib(position,n1,n2,n3):
    if position==0 and n3==0:
        return 0
    elif position==0:
        return n3
    elif n1==0 and n2==1 and n3==0:
        position=position-1
    n3=n1+n2
    n1=n2
    n2=n3
    position=position-1
    return get_fib(position,n1,n2,n3)
    
    
    
    
# Test cases
n1=0
n2=1
n3=0
print (get_fib(9,n1,n2,n3))
print (get_fib(11,n1,n2,n3))
print (get_fib(0,n1,n2,n3))
