#include<iostream>
#include<stack>
using namespace std;



int main()
{
    stack<int> r;
    r.push(9);
    r.push(4);
    r.push(8);
    r.push(11);
    r.pop();
    r.pop();
    r.pop();
    r.push(45);

    cout<<"Top element is: "<<r.top();
    cout<<endl;
    cout<<"Top Index is: "<<r.size()-1;



}
