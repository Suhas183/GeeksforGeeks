class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a + n);
        
        sort(b,b + n, greater<int>());
        
        long long int sum = 0;
        
        for(long long int i = 0; i < n; i++)
        {
            sum = sum + a[i]*b[i];
        }
        
        return sum;
    }
};
