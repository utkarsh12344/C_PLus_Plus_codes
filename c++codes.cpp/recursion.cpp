#include<iostream>
using namespace std;

void reverseString(int l,int r,vector<char>& s){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        char temp=s[l];
        s[l++]=s[r];
        s[r--]=temp;
    }
}
int main(){
char n[]="hellow";
cout<<"reversing"<<endl;
reverseString(n);
cout<<n;
return 0;
}