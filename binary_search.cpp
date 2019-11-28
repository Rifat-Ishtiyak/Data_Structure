#include<iostream>
using namespace std;
#define size 10

int a[size];
int position = -1;

void bubble(int n)
{

    int tmp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int binary(int s, int v)
{
    int first=0,middle,last=s-1;
    bool found=false;

    while(!found && first<=last){
        middle=(first+last)/2;
        if(a[middle]==v){
            found=true;
            position=middle;
        }
        else if(a[middle]>v){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return position;
}

int main()
{
    int n;
    cout<<"how many elements: ";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    bubble(n);
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    int value;
    cout<<"enter a number for search: ";
    cin>>value;

    binary(n,value);
    if(position==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<" "<<"position is: "<<position+1<<endl;
    }

}
