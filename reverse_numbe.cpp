#include<iostream>
using namespace std;

void rev(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}

int main()
{
    int x;
    int y;

    cout<<"enter two integers: ";
    cin>>x>>y;


    rev(&x, &y);

    cout<<"reverse number is: "<<x<<" "<<y<<endl;
}
