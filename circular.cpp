#include<iostream>
using namespace std;
#define size 5

int a[size];
int front=-1;
int rear=-1;
int noe=0;

void enqueue(int x)
{
    if(noe==size){
        cout<<"queue is full";
    }
    else{
        rear=(rear+1)%size;
        a[rear]=x;
        noe++;
        if(front == -1){
           front=(front+1)%size;
        }
    }
}

void dequeue()
{
    if(noe==0){
        cout<<"queue is empty";
    }
    else{
        front=(front+1)%size;
        noe--;
    }
}

int Front()
{
    return a[front];
}

int Rear()
{
    return a[rear];
}

int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(8);
    enqueue(12);
    enqueue(1);
    dequeue();

    cout<<"front element is: "<<Front()<<endl;
    cout<<"rear element is: "<<Rear()<<endl;
}
