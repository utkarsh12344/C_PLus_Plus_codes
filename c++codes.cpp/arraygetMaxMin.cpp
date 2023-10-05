#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int min= 127;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getMin(int arr[],int n){
    int max= (-128);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"minimum value is: "<<getMax(arr,size)<<endl;
    cout<<"maximum value is: "<<getMin(arr,size)<<endl;
    return 0;
}