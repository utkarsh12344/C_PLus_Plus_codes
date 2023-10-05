#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<" is prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}