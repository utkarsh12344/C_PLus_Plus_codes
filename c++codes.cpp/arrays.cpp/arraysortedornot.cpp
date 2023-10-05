#include<bits/stdc++.h>
using namespace std;
int sortedornot(int arr[],int n){
    if(n==1||n==0){
        return 1;
    }
    if(arr[n-1]<arr[n-2]){
        return 0;
    }
    return sortedornot(arr,n-1);
}
int main(){
    int arr[]={10,290,12,0,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(sortedornot(arr,n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}