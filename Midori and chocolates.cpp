

class Solution {
  public:
    long long int leftShops(long long int i, long long int L){
        // code here
        
        long long int num ,result;
        num = pow(2,L);
        
        result=num-i;
        return result;
        
    }
};
