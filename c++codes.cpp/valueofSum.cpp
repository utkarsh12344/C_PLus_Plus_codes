#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i=1;
    int sum=0;
    while(i<=num){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is :"<<sum<<endl;

}