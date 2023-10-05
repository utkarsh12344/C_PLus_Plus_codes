#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;
    s.push("hello");
    s.push("how");
    s.push("are");
    s.push("you");
    cout<<"top element: "<<s.top()<<endl;
    cout<<"size of stack:"<<s.size()<<endl;
    s.pop();
    cout<<"size of stack:"<<s.size()<<endl;
    cout<<"empty or not: "<<s.empty();
    
    return 0;
}