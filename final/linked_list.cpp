#include<iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *next;
}*nodeptr;

nodeptr head=NULL,curr;

void AddData(int item)
{
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        curr->next=newNode;
    }
     curr=newNode;
}

void Display(nodeptr ptr)
{
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    //nodeptr head=NULL,curr;
   int data;
   int n=5;
    for(int i=1;i<=n;i++){
        cin>>data;
        AddData(data);
    }
    Display(head);
}
