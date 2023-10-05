#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i=2;
    int sum=0;
    while(i<=num){
        sum=sum+i;
        i=i+2;
    }
    cout<<"value of sum of all even no is:"<<sum<<endl;
}
