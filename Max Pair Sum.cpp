#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* solution in O(N^2)
int maxsumArr(int arr[],int n)
{  
    int currsum , maxsum=INT_MIN;
 for(int i=0;i<n;i++)
 {
   for(int j=i+1;j<n;j++)
   {
       currsum=arr[i]+arr[j];
       maxsum= max(maxsum, currsum);
   }   
 }
    return maxsum;
}
*/

/*using dynamic array vector O(N) solution
int maxsumArr(vector<int> vec,int n)
{
sort(vec.begin(),vec.end());
    return vec[n-1]+vec[n-2];
}
*/

// solution in O(N) 
 int maxsumArr(int arr[],int n)
 {
   int first,second;
     if(arr[0]>arr[1])
        {   first = arr[0];
         second= arr[1];
        }
     else
     {
        first= arr[1];
         second =arr[0];
     }
         for(int i=2;i<n;i++)
         {
                if(arr[i]>first)
                {
                second =first;
                    first=arr[i];
                }
             else if(arr[i]>second && arr[i]< first)
                 second= arr[i];
         }
     return first+second ;
 }


int main() 
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
    cin>>arr[i];
    }
   cout<< maxsumArr(arr,N);

    //Write your code here
}
