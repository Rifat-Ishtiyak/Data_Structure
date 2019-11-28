#include <iostream>
using namespace std;

/*void r(int a, int b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}*/

void bubble(int d[],int c)
{
    int t;
    for(int j=0;j<c-1;j++){
        for (int k=0;k<c-1;k++){
             if(d[k]>d[k+1]){
                swap(d[k+1],d[k]);
             }
        }
    }
    cout<<endl;
    cout<<"sorted array is: ";
    for(int i=0;i<c;i++){
        cout<<d[i]<<" ";
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
        cout<<endl;
        cout<<"Your array is: ";
            for(int i=0;i<n;i++){
                cout<<b[i]<<"  ";
            }

    bubble(b,n);

}

