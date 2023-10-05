#include<iostream>
#include<set>
using namespace std;

int main()
{

    set<int>s;
    s.insert(5);
    s.insert(7);
    s.insert(9);
    s.insert(3);
    for(auto i:s){//to print iteratively
        cout<<i<<endl;
    }
    s.erase(s.begin());//to erase iteratively
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"count:"<<s.count(10);//to count the occurence
    return 0;
}