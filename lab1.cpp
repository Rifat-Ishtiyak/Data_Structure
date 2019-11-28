#include<iostream>
using namespace std;
#define size 10

int a[size];

void s_sort(int x)
{
    int i,minindex,minvalue;
    for(i=0;i<x-1;i++){
        minindex=i;
        minvalue=a[i];

        for(int j=i+1;j<x;j++){
            if(a[j]<minvalue){
                minvalue=a[j];
                minindex=j;
            }
        }
        a[minindex]=a[i];
        a[i]=minvalue;

    }
}

int Binary_search(int value,int n)
{
    int first=0;
    int last =n-1;
    int middle;
    int position=-1;
    bool found=false;
    while (!found && first <= last){
        middle=(first+last)/2;
        if(a[middle]==value){
            found=true;
            position=middle;
        }
        else if(a[middle]>value){
            last = middle - 1;
        }
        else{
            first=middle +1;
        }
    }
    return position;
}



int main()
{
    int i;
    int n;

    cout<<"How many data: ";
    cin>>n;
    cout<<endl;
    cout<<"enter "<<n<<"data: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    s_sort(n);

    cout<<"sorted list: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    char ch;
    int data;
    int position;
        cout<<"enter the data  you want to search: "<<endl;
        cin>>data;
        position=Binary_search(data, n);
       if(position==-1){
        cout<<"not found";
       }
       else{
        cout<<"found"<<"  "<<"position: "<<position+1<<endl;
       }
}
