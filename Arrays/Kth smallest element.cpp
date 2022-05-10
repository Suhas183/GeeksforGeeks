class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int largest = arr[0];
        
        for(int i = l; i <= r; i++)
        {
            largest = max(largest,arr[i]);
        }
        
        vector<int> freq(largest+1,0);
        
        for(int i = l; i <= r; i++)
        {
            freq[arr[i]]++;
        }
        
        int j = 0;
        
        for(int i = 0; i <= largest; i++)
        {
            while(freq[i]--)
            {
                j++;
                
                if(j==k)
                {
                    return i;
                }
            }
            
        }
    }
    };
