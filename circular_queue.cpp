#include<iostream>
using namespace std;
class CQ{
	int size=5,front=-1,rear=-1,cq[5];
	public:
	void enqueue(int n){
		if((rear+1)%size==front||(front==0&&rear==size-1))
			cout<<"Queue is full"<<endl;
		else{
			if(front==-1){
				front=0;
			}
			rear=(rear+1)%size;
			cq[rear]=n;
		}
	}
	int dequeue(){
		if(front==-1)
			return -1;
		int n=cq[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}else
			front=(front+1)%size;
		return n;
	}
	void display(){
		int i;
		if(front==-1)
			cout<<"Queue is empty"<<endl;
		else if(front<=rear){
			for(i=front;i<=rear;i++)
				cout<<cq[i]<<" ";
			cout<<endl;
		}
		else{
			for(i=front;i<size;i++)
				cout<<cq[i]<<" ";
			for(i=0;i<=rear;i++)
				cout<<cq[i]<<" ";
			cout<<endl;
		}
	}
};
int main(){
	CQ q;
	int opt,n;
	while(1){
		cout<<"Enter a choice"<<endl;
		cout<<"1.Enqueue"<<endl;
		cout<<"2.Dequeue"<<endl;
		cout<<"3.Display"<<endl;
		cout<<"4.Exit"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Enter the element to enqueue:";
				cin>>n;
				q.enqueue(n);
				break;
			case 2:
				n=q.dequeue();
				if(n==-1)
					cout<<"The queue is empty"<<endl;
				else
					cout<<"The dequeued element is :"<<n<<endl;
				break;
			case 3:
				q.display();
				break;
			case 4:
				return 0;
			default:
				cout<<"Wrong choice entered";
		}
	}
}
	
	

			
