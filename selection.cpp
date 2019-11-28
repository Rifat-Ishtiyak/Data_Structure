#include <iostream>
using namespace std;

void selection(int a[], int n)
{
    int select, minindex, minvalue;

    for(select=0;select<(n-1); select++){
        minindex=select;
        minvalue=a[select];
        for(int i=select+1; i<n; i++){
            if (a[i]<minvalue){
                minvalue=a[i];
                minindex=i;
            }
        }
        a[minindex]=a[select];
        a[select]=minvalue;
    }

    cout<<endl;
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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

    selection(b,n);

}

