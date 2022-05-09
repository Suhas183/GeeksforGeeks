class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long int cs = 0, ms = arr[0];
        
        for(long long int i = 0; i < n; i++)
        {
            cs = cs + arr[i];
            ms = max(cs,ms);
            
            if(cs < 0)
            {
                cs = 0;
            }
        }
        
        return ms;
        
    }
};
