#include<iostream>
using namespace std;
#define size 6

int a[size];
int position=-1;

void selection(int n)
{
    int select,minvalue,minindex;
    for(select=0;select<n ;select++){
        minindex=select;
        minvalue=a[select];
        for(int i=select+1;i<n;i++){
            if(a[i]<minvalue){
                minvalue=a[i];
                minindex=i;
            }
        }
        a[minindex]=a[select];
        a[select]=minvalue;
    }
}


int binary(int n, int value)
{
    int first=0;
    int last=n-1;
    int middle;
    bool found = false;

    while(!found && first<=last){
        middle=(first+last)/2;
        if(a[middle]==value){
            found=true;
            position=middle;
        }
        else if(value<a[middle]){
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

    cout<<endl;
    cout<<"sorted array is: ";
    selection(n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }

    int value;
    cout<<"which number: ";
    cin>>value;

    binary(n,value);
    if(position==-1){
        cout<<"item not found"<<endl;
    }
    else{
        cout<<"item is found in "<<position+1<<endl;
    }
}
