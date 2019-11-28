#include<iostream>
using namespace std;
#define size 10

int a[size];
int position = -1;

int linear(int elem, int value)
{
  int index = 0;
  bool found = false;

  while(index<elem && !found)
  {
      if (a[index]==value)
      {
          found = true;
          position=index;
      }
      index++;
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

    int value;
    cout<<"enter a number for search: ";
    cin>>value;

    linear(n,value);
    if(position==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<" "<<"position is: "<<position+1<<endl;
    }

}

