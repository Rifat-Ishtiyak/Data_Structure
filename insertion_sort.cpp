#include<iostream>
using namespace std;

insertion(int c[],int m)
{
    int v;
    int j;
    for(int i=1;i<m;i++){
        v=c[i];
        j=i-1;
        while(j>=0 && c[j]>v){
            c[j+1]=c[j];
            j--;
        }
        c[j+1]=v;
    }
    cout<<endl;
    cout<<"sorted array is: ";
    for(int i=0;i<m;i++){
        cout<<c[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"how many elements: ";
    cin>>n;
    int b[n];
    cout<<"enter your elements: ";
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

    cout<<"Your array is: ";
        for(int i=0;i<n;i++){
            cout<<b[i]<<"  ";
        }

    insertion(b,n);

}
