#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="utkarsh";
    m[2]="arvind";
    m[3]="bondade";
    m[10]="vihang";
    //or
    m.insert({5,"anupama"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13:"<<m.count(3)<<endl;
    cout<<"finding -13:"<<m.count(-13)<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(1);
    cout<<"After erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // auto it=m.find(2);
    // for(auto i=it;i!=m.end();i++){
    //     cout<<(*i)first<<endl;
    // }
    
    return 0;
}