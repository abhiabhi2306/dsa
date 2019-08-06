#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	
};

class Stack{
	
	Node *top=NULL;
	
public:
	
	void push(int value)
	{
		Node *node = new Node();
		node->data = value;
		cout << "The value " << value << " was added to the stack \n";
		node->next = top;
		top = node;
		
	}
	
	void pop()
	{
		Node *del;
		if (top==NULL)
		{
			cout << "Stack Empty \n";
		}
		else
		{
			del=top;
			int data=top->data;
			delete(del);
			cout << "The element" << data << " Was Popped \n";
			top=top->next;
		}
		
	}
	
	
	void traverse()
	{
		if (top==NULL)
		{
			cout << "Stack is empty \n";
		}
		else
		{
			
		   while(top->next!=NULL)
		    {
			   cout << top->data << " ";
			   top=top->next;
	        }
	        cout << "\n";
	    }
	}
	
	
		
};


int main()
{   
	Stack s1;
	int op=0,ele=0;
	while(op!=4)
	{
	cout << "Select your operation : \n 1) PUSH  \n 2) POP \n 3) Traverse \n 4) Exit \n";
	cin >> op;
	if (op==1)
	{
		cout << "Enter the element to push : \n";
		cin >> ele;
	    s1.push(ele);
	    
    }
    
    else if (op==2)
	{
		s1.pop();
    }
    else if (op==3)
    {
		 s1.traverse();
	}
	 else 
    {
		 cout << "Invalid Choice \n";
	}
  
	
}

}
			
