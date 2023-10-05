 #include<iostream>
 #include<vector>
 #include<algorithm>

 using namespace std;

 int main()
 {
     vector<int> v;
     v.push_back(1);
     v.push_back(5);
     v.push_back(9);
    v.push_back(13);
   v.push_back(134);

    cout<<"finding 1:"<<binary_search(v.begin(),v.end(),1)<<endl;
     cout<<"lower bound :"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
     cout<<"upper bound :"<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;
return 0;
 }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a=10;
    int b=20;
    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<endl;

     string words="abcd";
     reverse(words.begin(),words.end());
     cout<<"string:"<<words<<endl;

     rotate(words.begin(),words.end()+factor(int factor=2)),words.end();
     cout<<"after rotate:"<<endl;
     for(int i:words){
         cout<<i<<" ";
     }
    
    return 0;
}
