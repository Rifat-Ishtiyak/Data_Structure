#include<iostream>
using namespace std;
#define stack_size 10

int top=-1;
int a[stack_size];

void push(int x)
{
    if(top>=stack_size - 1){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        a[top]=x;

    }
}

void pop()
{
    if(top<0){
        cout<<"stack is empty"<<endl;
    }
    else{
        int x=a[top];
        top--;
    }
}

void display()
{
	int i;
	cout<<"all the element of stack is: ";
	for(i=top; i>=0; i--){
		cout<<endl<<a[i];
	}
}

int main()
{

   int n;
   int x;
   cout<<"how many elements: ";
   cin>>n;

   for(int b=0;b<n;b++){
    cin>>x;
       push(x);
   }

    cout<<endl;

    pop();
    pop();

    display();

return 0;
}
