/* using sliding window technique O(N) 
very useful see how it changes the time complexity  

*/

int birthday(vector<int> s, int d, int m) {
   int max_sum=0; int count =0;
   int i=0;
   for(; i<m;i++)
   {
       max_sum+=s[i];
   }
   if(max_sum==d) count++;
   
   int window_sum= max_sum;
   for(;i<s.size();i++)
   { 
       window_sum+=s[i]-s[i-m];
   
    if(window_sum==d)count++;
   }
   return count;
}

/* solution in O(N*M)
 int x=m;
    int count =0;
    for(int start=0; start<s.size();start++)
    { 
        int sum=0;int e=start;
        
        while(x )
           {
            sum+=s[e];
            x--;
            e++;
        }
        if(sum==d)
         {
             count++; 
         }
         x=m;
    }
  

    return count;
    */
