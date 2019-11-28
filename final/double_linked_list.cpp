#include<iostream>
using namespace std;

typedef struct ListNode
{
    int data;
    struct ListNode *next;
    struct ListNode *prev;
}*nodeptr;

nodeptr head=NULL,tail=NULL;

void add(int item)
{
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    newNode->prev=NULL;
    nodeptr ptr;
    if(head==NULL)
    {
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

void in_first(int item)
{
    nodeptr newNode= new ListNode;
    newNode->data=item;
    newNode->prev=NULL;
    head->prev=newNode;
    newNode->next=head;
    head=newNode;

}

void in_last(int item)
{
    nodeptr p=tail;
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    newNode->prev=tail;
    p->next=newNode;
    tail=newNode;
}

void del_first()
{
    nodeptr ptr=head;
    head=ptr->next;
    head->prev=NULL;
    delete(ptr);
}

void del_last()
{
    nodeptr ptr=tail;
    tail=ptr->prev;
    tail->next=NULL;
    delete(ptr);
}

void in_del(int item)
{
    nodeptr ptr=head,dptr;
    while(ptr->next->data!=item && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    dptr=ptr->next;
    ptr->next=ptr->next->next;
    ptr->next->prev=ptr;
    delete(dptr);
}

void dis1()
{
    nodeptr ptr=head;
    cout<<"display from first to last: ";
    while(ptr!=NULL)
    {
     cout<<ptr->data<<" ";
     ptr=ptr->next;
    }
    cout<<endl;
}

void dis2()
{
    nodeptr ptr=tail;
    cout<<"display from last to first: ";
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
    cout<<"how many elements: ";
    int data;
    cin>>n;
    cout<<"enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>data;
        add(data);
    }
    cout<<endl;

    dis1();
    dis2();
    cout<<endl;

    cout<<"after delete the first node: "<<endl;
    del_first();
    dis1();
    dis2();

    cout<<endl;
    cout<<"after delete the last node: "<<endl;
    del_last();
    dis1();
    dis2();

    cout<<endl;
    cout<<"which item you want to delete: ";
    int j;
    cin>>j;
    in_del(j);
    cout<<"after delete the item: "<<endl;
    dis1();
    dis2();
    cout<<endl;

    cout<<"which item you wanna add at first: ";
    int k;
    cin>>k;
    in_first(k);
    dis1();
    dis2();

    cout<<endl;
    cout<<"which item you want to add at last: ";
    int m;
    cin>>m;
    in_last(m);
    dis1();
    dis2();

}
