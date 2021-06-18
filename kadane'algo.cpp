// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

// solution in O(N)
int maxSubarraySum(int arr[], int n){
        
        int curr_sum=0, best_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum+= arr[i];
            if(curr_sum>best_sum)
            {
                best_sum=curr_sum;
            }
            if(curr_sum<0)
            curr_sum=0;
        }
        return best_sum;  
    }
