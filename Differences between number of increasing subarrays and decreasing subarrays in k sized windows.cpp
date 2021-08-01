// url link--->>  https://ide.geeksforgeeks.org/hKOzyB9zAW

#include<bits/stdc++.h>
using namespace std;

int clac(int x)
{
    return (x*(x-1))/2;
}

// solution in O(N.K)
vector<int> Diffs(vector<int> const& arr, int k)
{  
  int n = arr.size();
    vector<int> vec;
    
    for(int i=0;i<=n-k;i++)
    {
        int st_inc=1, st_dec=1;
        for(int j=i;j<i+k-1;j++)
        {
            if(arr[j]<arr[j+1])
            st_inc++;
            else
            if(arr[j]>arr[j+1])
            st_dec++;
        }
        int res=  clac(st_inc)-clac(st_dec);
        vec.push_back(res);   
    }   
    return vec;
}
int main()
{
    vector<int> out = Diffs({ 10, 20, 30, 15, 15}, 3);
    for (int n : out)
        cout << n << ", ";
    return 0;
// input .. 
    
}
