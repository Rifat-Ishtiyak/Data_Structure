#include<iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *next;
    struct ListNode *prev;
}*nodeptr;

nodeptr head=NULL,tail=NULL;

void push(int item)
{
    nodeptr ptr;
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        ptr=head;
    }
    else{
        newNode->prev=tail;
        tail=newNode;
        ptr->next=newNode;
        ptr=newNode;
    }
}

void pop()
{
    nodeptr ptr=tail;
    tail=ptr->prev;
    tail->next=NULL;
    delete(ptr);
}

display()
{
    nodeptr ptr=tail;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;
}

int main()
{
    int n;
    int data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        push(data);
    }
    display();
    pop();
    pop();
    display();
}
