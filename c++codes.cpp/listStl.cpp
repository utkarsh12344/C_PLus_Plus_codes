#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(0);
    l.push_back(9);
    l.push_back(5);
    l.push_back(99);
    l.size();
    cout<<"before pop:"<<endl;
   for(int i:l){
    cout<<i<<endl;
   }
   l.pop_back();
       cout<<"after pop:"<<endl;
   for(int i:l){
    cout<<i<<endl;
   }
    return 0;
}