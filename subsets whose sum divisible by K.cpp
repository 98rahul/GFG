#include<bits/stdc++.h>
using namespace std;
// using recursion print the subsequences which are divisible by k
void fun(int arr[], vector<int> &vec, int n, int idx,int k)
{
    // base case
    
    if(idx==n)
    {
        int sum=0;
        for(auto i : vec)
        {
            sum+=i;
        }
        if(sum % k ==0){
            for(auto it: vec)
         cout<<it<< " ";
        cout<<endl;
        }
        
        return;
    }
    
    vec.push_back(arr[idx]);
    fun(arr, vec, n, idx+1,k);
    
    vec.pop_back();
    
   fun(arr, vec, n, idx+1,k);
}


int main()
{
    int arr[10]={1,2,3}; int k=3;
    vector<int > vec;
    fun(arr,vec, 3,0,k);
}
