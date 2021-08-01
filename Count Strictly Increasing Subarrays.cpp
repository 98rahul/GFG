#include<bits/stdc++.h>
using namespace std;

// appraoch like checking for every subArray------------- O(n^3)
// appraoch like fixed the start inedx and check for start_index to entire rest of array---------------O(N^2)
// below approach  for every sorted length array(say n) have n(n-1)/2 numbers of possible subarray
int countIncreasing(int arr[], int n)
{
  int count =0; 
  int len=1; // bcz for strictly increasing len should be >one that's why len not started with 0
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[i-1];
       len++;
       else
       {   
      count+=((len* (len-1))/2);  upto previous len count possible subarray 
       len=1;                 // set len=1
       }
     }
       if(len>1)
       count+= ((len*(len-1))/2);
       return count;
       
     }


    
    
  
  
  
