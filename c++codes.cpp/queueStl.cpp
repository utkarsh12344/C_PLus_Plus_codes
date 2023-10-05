#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;
    q.push("cat");
    q.push("bat");
    q.push("rat");
    q.push("mat");
    q.push("sat");
    q.pop();
    cout<<"empty or not: "<<q.empty()<<endl;
    cout<<"size: "<<q.size()<<endl;
    cout<<"front: "<<q.front()<<endl;
    
   
    
    return 0;
}