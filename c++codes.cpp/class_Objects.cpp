#include<iostream>
using namespace std;

class myClass{
    public:
      int mynum;
      string mycar;
};
int main(){
    myClass myobj;
    myobj.mynum=100;
    myobj.mycar="bmw";
    cout<<myobj.mynum<<endl;
    cout<<myobj.mycar<<endl;

    return 0;

}