#include <iostream>
using namespace std;

class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
};

class DLL {
	
	Node *first=NULL;
	Node *last=NULL;
	
	
	
	
	public:
	void InsertBegin(int input){
		Node *node= new Node();
		if (first==NULL && last==NULL)
		{
		node->data=input;
		node->next=NULL;
		node->prev=NULL;
		first=node;
		last=node;
		cout << node->data << " inserrted to " <<  node;
	    }
	    else
	    {
			node->data=input;
			node->prev=NULL;
			node->next=first;			
			first=node;

		}
	
		
	}
	
	
	
	
	void display() {
		
		Node *ptr=first;
		
		if (first==NULL)
		{
			cout << "DLL Empty \n";
		}
		else
		{
			
		while (ptr!=NULL)
		{
			cout << ptr->data << " ";
			ptr=ptr->next;
			
		}
	}
	}
	
	
	void Insert_End(int blab) {
		
		
		
		if (last==NULL && first==NULL)
		{
			
			Node *node = new Node();
			first=node;
			last=node;
			node->data=blab;
			node->prev=NULL;
			node->next=NULL;
		}
		else 
		{
			Node *node = new Node();
			last->next=node;
			node->prev=last;
			last=node;
			node->data = blab;
			node->next=NULL;
		    }
			
         }
				 
		 
		 
		 void delete_beg(){
			 
			 Node *ptr = first;
			 if (first == NULL)
			 {
				 cout << "Empty DLL \n";
			 }
			 else if (first == last)
			 {
				 
				 first=0;
				 last=0;
				 delete(ptr);
				 cout << " \n Deleted An Element From Beggining ";
			 }
			 
			 else
			 {
				 
			 first = ptr->next;
			 ptr->next=NULL;
			 ptr->prev=NULL;
			 delete(ptr);
			 cout << " \n Deleted An Element From Beggining ";

		     }
		 
			 
		 }
		 
		 
		 void delete_end(){
			 
			 Node *ptr = last;
			 if (last == NULL)
			 {
				 cout << "Empty DLL";
			 }
			 else if (first == last)
			 {
				 
				 first=0;
				 last=0;
				 delete(ptr);
				 cout << " \n Deleted An Element From End \n";

			 }
			 
			 else
			 {
				 
			 last = ptr->prev;
			 ptr->data=0;
			 ptr->next=NULL;
			 ptr->prev=NULL;
			 delete(ptr);
			 cout << " \n Deleted An Element From End \n";

		     }     
			 
		 }
		 
		 
		 void search(int i) {
			 
			 
			Node *ptr = first;
			int flag=0;
			
			if (first==NULL)
			{
				cout << "DLL Empty, Element Cant Be Found \n";
			}
			else
			{
				while(ptr!=NULL) 
				{
					if (ptr->data==i)
					{
						cout << "Element Found \n";
						flag=flag+1;
						break;
					}
						ptr=ptr->next;

				}
				if (flag==0)
				{
					cout << "Element Not Found \n";
				}
				
			}
		}
		
					
		 
		 
		
		
		 
		 
		
	
};
	
	


int main()
{
	DLL list1;
	int temp=0,element=0;
	
	while (temp!=7)
	{
		
	cout << "Please enter your choice : \n 1) Insert at beggining \n 2) Insert At End \n 3) Delete From Beggining \n 4) Delete From End \n 5) Search \n 6) Traverse \n"; 
	cin  >> temp;
	
	if (temp==1)
	{
		cout << "Enter the element you want to insert at beggining : ";
		cin >> element;
		list1.InsertBegin(element);
	}
	else if (temp==2)

	{
		cout << "Enter the element you want to insert at end : ";
		cin >> element;
		list1.Insert_End(element);
	}
	
	else if (temp==3)
	{
		list1.delete_beg();
	}
	
	else if (temp==4)
	{
		list1.delete_end();
	}
	
	else if (temp==5)
	{
		cout << "Enter the element you want to serach for : ";
		cin >> element;
		list1.search(element);
		
	}
	
	else if (temp==6)
	{
		list1.display();
	}
	
	
}

}
