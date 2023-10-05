#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,10>basic={1,2,3,4,5,6,7,8,9,10};
    int size=basic.size();
    for(int i=0;i<size;i++){
        cout<<basic[i]<<endl;
    }
    
    cout<<"element at 5 index:"<<basic.at(5)<<endl;
    cout<<"empty or not:"<<basic.empty()<<endl;
    cout<<"first element:"<<basic.front()<<endl;
    cout<<"last elemnt:"<<basic.back()<<endl;
    return 0;
}