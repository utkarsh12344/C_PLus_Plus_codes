// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}