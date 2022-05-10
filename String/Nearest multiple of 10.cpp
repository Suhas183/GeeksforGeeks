class Solution{
    public:
    string roundToNearest(string N) 
    { 
        int n = N.length();
        if(n == 1)
        {
            if(N[0] >= '6' and  N[0] <= '9')
            {
                return "10";
            }
            
            return "0";
        }
        
        
        if(N[n-1] >= '6' and N[n-1] <= '9')
        {
            N[n-1] = '0';
        
            if(N[n-2] != '9')
            {
                N[n-2] = N[n-2] + 1;
            }
            
            else
            {
                for(int i = n - 2; i >=0; i--)
                {
                    if(N[i] == '9')
                    {
                        N[i] = '0';
                    }
                    
                    else
                    {
                        N[i] = N[i] + 1;
                        break;
                    }
                }
            }
            
            if(N[0] == '0')
            {
                N = "1" + N;
            }
        }
        
        else
        {
            N[n-1] = '0';
        }
        return N;
    }  

};
