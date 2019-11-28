#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many elements: ";
    cin>>n;
    int a[n];

    cout<<"Enter your numbers: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"You have entered: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum= sum+a[i];
    }
        cout<<endl;
        cout<<"Sum is: "<<sum;

}
