class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int map[1000000] = {0};
        
        for(int i = 0; i < n; i++)
        {
            map[a[i]]++;
            
            if(map[a[i]] == k)
            {
                return a[i];
            }
        }
        
        return -1;
    }
};
