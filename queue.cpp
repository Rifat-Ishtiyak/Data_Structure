#include<iostream>
using namespace std;
#define size 4

int front =-1;
int rear =-1;
int a[size];

void enqueue(int x)
{
    if(rear>=size-1){
        cout<<"queue is full"<<endl;
    }
    else{
        rear++;
        a[rear]=x;

        if(front = -1){
            front++;
        }
    }
}

void dequeue()
{
    if(front == -1){
        cout<<"queue is empty"<<endl;
    }
    else{
        front++;
    }
}

void display()
{
	int i;
	cout<<"all the element of queue is: ";
	for(i=front; i<=rear; i++){
		cout<<endl<<a[i];
	}
}


int main()
 {
    int n;
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>n;
        enqueue(n);
        }
    dequeue();
    dequeue();

    display();

return 0;
}

