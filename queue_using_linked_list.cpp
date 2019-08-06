#include <iostream>
using namespace std;


class Node{
	public:
	int data;
	Node *next;
};

class Queue{
	
	Node *front=NULL;
	Node *rear=NULL;
	
	
	public:
	void enqueue(int data)
	{
		Node *node=new Node();
	    if (front==NULL && rear==NULL)
	    {
			node->data=data;
			front=node;
			rear=node;
			node->next=NULL;
			cout << data << " was added to the queue. \n";
		}
		else
		{
			node->data=data;
			rear->next=node;
			rear=node;
			cout << data << " was added to the queue. \n";

		}
	}
	
	
	void dequeue()
	{
		Node *ptr;
		if (front==NULL)
		{
			cout << "Queue is empty \n";
		}
		else if (front==rear)
		{   
			int data=front->data;
			delete(front);
			front=NULL;
			rear=NULL;
		    cout << data << " WAS DEQUEUED \n";

		}
		else 
		{
		    ptr=front;
		    front=ptr->next;
		    int data=ptr->data;
		    delete(ptr);

		    cout << data << " WAS DEQUEUED \n";
		}
	}
	
	void traverse()
	
	{
		
		Node *tra;
		tra=front;
		while (tra->next!=NULL)
		{
			cout << tra->data << " ";
			tra=tra->next;
		}
		
	}
			
		
	
		
};


int main()
{
	Queue s1;
	int op=0,ele=0;
	while(op!=4)
	{
	cout << "Select your operation : \n 1) ENQUEUE  \n 2) DEQUEUE \n 3) TRAVERSE \n 4) Exit \n";
	cin >> op;
	if (op==1)
	{
		cout << "Enter the element to enqueue : \n";
		cin >> ele;
	    s1.enqueue(ele);
	    
    }
    
    else if (op==2)
	{
		s1.dequeue();
    }
    else if (op==3)
    {
		 s1.traverse();
	}

  
	
}

}
			




