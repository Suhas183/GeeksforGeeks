    string compare(string s1, string s2)
    {
        string res;
        int n1 = s1.length();
        int n2 = s2.length();
        
        for(int i = 0, j = 0; i < n1 && j < n2; i++, j++)
        {
            if(s1[i] != s2[j])
            {
                break;
            }
            
            res.push_back(s1[i]);
        }
        
        return res;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        string prefix = arr[0];
        for(int i = 1; i < N; i++)
        {
            prefix = compare(prefix,arr[i]);
        }
        
        if(prefix.length() == 0)
        {
            return "-1";
        }
        
        return prefix;
    }
