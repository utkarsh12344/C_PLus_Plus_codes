#include<iostream>
#include<vector>
using namespace std;

int main()

{
    vector<int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    v.push_back(90);
    cout<<"capacity of vector: "<<v.capacity()<<endl;
    cout<<"size of vector: "<<v.size()<<endl;
    cout<<"element at 2 index: "<<v.at(2)<<endl;
    cout<<"front: "<<v.front()<<endl;;
    cout<<"back: "<<v.back()<<endl;
   cout<<"before pop"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;
   v.pop_back();
   v.pop_back();
   
   cout<<"after pop"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }
   cout<<endl;
    return 0;
}