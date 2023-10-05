#include<bits/stdc..h>
using namespace std;
int moveZeros(vector<int>& nums){
    int n =nums.size();
    if(n==0||n==1){
        return;
    }
    int left=0,right=0;
    int temp;
    while(right<n){
        if(nums[right]==0){
            ++right;
        }
        else{
            temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            ++left;
            ++right;
        }
    }
}
int main(){
    int arr[]={1,0,4,0,2,10};
    cout<<moveZeros<<endl;

}