#include<iostream>
using namespace std;

int main()
{
    int e;
    int a[50];
    int i;

    cout<<"How many elements: ";
    cin>>e;
    cout<<"Enter Your Elements: ";
    cout<<endl;
    for(i=0;i<e;i++){
        cin>>a[i];
    }
        cout<<"You have entered: ";
        for(i=0;i<e;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //adding a new item at the end
    int n=e,last;
    cout<<"which number you want to add at last: ";
    cin>>last;
    for(i=n;i<e;i++){
        a[n]=last;
    n++;
    }


    cout<<"You have entered: ";
        for(i=0;i<e+1;i++){
        cout<<a[i]<<" ";
    }



}
