class Solution {
  public:
  bool check_for_ps(int n)
  {
      int check=1;
      for(int j=2;j<=sqrt(n);j++)
      {
          if(n%j==0)
          check++;
      }
      if(check%2!=0)
      return true;
      else
      return false;
  }
  
    int noOfOpenDoors(long long N) {
        long long count=1;
        for(int i =2;i<=N ;i++)
        {
            if(check_for_ps(i))
            count++;
        }
        
        return count;
        
        // code here
    }
};
Time complexity =O(n^2)
