#include<bits/stdc++.h>
using namespace std;
// using recursion print the subsequences which are divisible by k
void subSequence(int arr[], vector<int> &vec, int n, int idx,int k)
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
    
    vec.push_back(arr[idx]);        // pick the idx element in vector
    subSequence(arr, vec, n, idx+1,k);
    
    vec.pop_back();                // not pick the idx element and call for previous level state of a vector
     subSequence(arr, vec, n, idx+1,k);
     vec.pop_back();  // chnages  ..........>>>>>>>>>> needed as when backtrack that element should remove.
}


int main()
{
    int arr[10]={1,2,3}; int k=3;
    vector<int > vec;
    fun(arr,vec, 3,0,k);
}
