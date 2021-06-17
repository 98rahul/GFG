/* using sliding window technique O(N) */

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
    //    max_sum=max(max_sum, window_sum);
    if(window_sum==d)count++;
   }
   return count;
}
