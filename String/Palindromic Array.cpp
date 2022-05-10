class Solution {
public:

    bool palindrome_check(int a)
    {
        string s = to_string(a);
        int n = s.length();
        
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n-i-1])
            {
                return false;
            }
        }
        
        return true;
    }
    
    int PalinArray(int a[], int n)
    {
    	for(int i = 0; i < n; i++)
    	{
    	    if(palindrome_check(a[i]) == false)
    	    {
    	        return 0;
    	    }
    	}
    	
    	return 1;
    }
};
