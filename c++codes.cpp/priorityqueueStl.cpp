#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int>maxi;
    //min heap
    priority_queue<int ,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
    cout<<"size->"<<maxi.size()<<endl;
    int n=maxi.size();

    for(int i=0;i<maxi.size();i++)[
        maxi.top[];
        maxi.pop();
    ]
    cout<<endl;
    
    return 0;
}