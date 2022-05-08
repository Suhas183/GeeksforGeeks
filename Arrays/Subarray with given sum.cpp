class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long int ps[n] = {arr[0]};
        vector<int> v;
        
        for(long long int i = 1; i < n; i++)
        {
            ps[i] = ps[i - 1] + arr[i];
        }
        
        int sum;
        
        for(long long int i = 0; i < n; i++)
        {
            for(long long int j = i; j < n; j++)
            {
                sum = i > 0 ? (ps[j] - ps[i - 1]) : ps[j];
                
                if(sum == s)
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    return v;
                }
                
                else if(sum > s)
                {
                    break;
                }
            }
        }
        
        v.push_back(-1);
        return v;
    }
};
