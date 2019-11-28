#include<iostream>
using namespace std;

int main()
{
    int siz;
    cout<<"Enter the Array size: ";
    cin>>siz;

    int a[siz];

    cout<<"INsert data into array: ";
    for(int i=0;i<siz;i++){
        cin>>a[i];
    }

    cout<<endl;
    cout<<"your array is: ";
    for(int i=0;i<siz;i++){
        cout<<a[i]<<" ";

    }


return 0;
}
