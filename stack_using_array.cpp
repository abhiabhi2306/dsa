#include <iostream>
using namespace std;
void menu();

class stack {
	
	int size=5,temp=0;;
	int top=-1;
    int a[5];

	
    public:
    
    void Push(int element) {  /** function to push element **/
    if (top==size-1)
    {
	   cout << "stack overflow";

    }
    else
    {
		top++;
		a[top]=element;
	}
    
}


    void Pop() {
	if (temp==-1)
	{
		cout << "stack underflow";
	}
	else 
	{
		temp=a[top];
		top--;
		cout << temp;
	}

}
	
	
	int Peek() {
	
	   return a[top];
	}
	
	
};

int main()

{
	
int choice=0,element,i,temp;
stack obj;
cout << "Note : Size of stack is 5   \n";


while (choice!=4)
{
cout << "Menu: \n 1.push \n 2.pop \n 3.peek \n 4.exit \n";
cout << "Enter your choice :  \n";
cin >> choice;
if (choice==1)
    {
        cout << "Enter the element : \n";
        cin >> element;
        obj.Push(element);
    }
    
else if (choice==2)
   {
	 obj.Pop();
   }
else if (choice==3)
   {
	  temp=obj.Peek();
	  cout << "The value at top of stack is "<< temp<< " \n ";
   }
   
}
}

