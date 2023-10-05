#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d ;
    d.push_back(2);
    d.push_back(5);
    d.push_back(19);
    d.push_back(200);
    cout<<"print 1 index element:"<<d.at(1)<<endl;
    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;
    cout<<"size: "<<d.size()<<endl;
    cout<<"before pop:"<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    d.pop_back();
    cout<<"after pop:"<<endl;
     for(int i:d){
        cout<<i<<endl;
    }
    //d.erase(d.begin,d.end()+1);
    return 0;
}