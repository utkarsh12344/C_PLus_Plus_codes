
//swap numbers
#include<iostream>
using namespace std;
void swapNumbers(int &x,int &y){
    int z=x;
    x=y;
    y=z;

}
int main(){
    int x,y;
    cout<<"enter first no :"<<endl;
    cin>>x;
    cout<<"enter second no :"<<endl;
    cin>>y;
    cout<<"before swap:"<<x<<" & "<<y<<endl;


    swapNumbers(x,y);
    cout<<"after swap : "<<x<<" & "<<y<<endl;
}

