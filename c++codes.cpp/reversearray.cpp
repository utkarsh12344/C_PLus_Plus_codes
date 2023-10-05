// #include <iostream>
// using namespace std;
// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     reverse(arr,5);
//     printArray(arr,5);
//     return 0;
// }



//shortest approach------>>>

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>v={1,2,3,4,5};
//     v.size();
//     reverse(v.begin(),v.end());
//     for(int i=0;i<v.size;i++){
//         cout<<v[i]<<endl;
//     }
//     cout<<endl;
    
//     return 0;
// }



//another approach----->>>
#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(11);
     v.push_back(22);
      v.push_back(33);
       v.push_back(44);
        v.push_back(55);

        vector<int>ans=reverse(v);
        cout<<"printing reverse array:"<<endl;
        print(ans);

    
    return 0;
}