#include<bits/stdc++.h>
using namespace std;

int sum (int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of given array is: "<<sum(arr,n)<<endl;
    return 0;

}