#include<iostream>
using namespace std;

int main()
{
    int temp;
    int array[5]={32,767,12,67,98};

    cout<<"Before sorting: ";
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(array[j]>array[j+1]){
                    temp=array[j+1];
                    array[j+1]=array[j];
                    array[j]=temp;
                }
            }
        }

    cout<<endl;
    cout<<"After sorting: ";
        for(int s=0;s<5;s++){
            cout<<array[s]<<" ";
        }

}
