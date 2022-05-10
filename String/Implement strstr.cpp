int strstr(string s, string x)
{
    int n = s.length();
    int x_len = x.length();
    
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        if(s[i] == x[0])
        {
            for(int j = 0; j < x_len and j < n; j++)
            {
                if(s[i+j] == x[j])
                {
                    count++;
                }
                
                else
                {
                    break;
                }
            }
        }
        
        if(count == x_len)
        {
            return i;
        }
    
    }
    
    return -1;
}
