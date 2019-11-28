#include<iostream>
using namespace std;

int main()
{
    int s[10]={3,5,7,90,32};
    int n=5;
    int k=2;
    int i;

    cout<<"array before shifting: ";
    for(int y=0;y<5;y++){
        cout<<s[y]<<" ";
    }

    cout<<endl;

    for(i=n-1;i>=k;i--){
        s[i+1]=s[i];
    }
    s[k]=65;
    n++;

    cout<<"updated array: ";
    for(int z=0;z<6;z++){
        cout<<s[z]<<" ";
    }
}
