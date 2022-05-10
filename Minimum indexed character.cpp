class Solution
{
  public:
    //Function to find the minimum indexed character
    
    
    
    int minIndexChar(string str, string patt)
    {
        vector<int> v;
        vector<bool> mark(26,false);
        int len1 = str.length();
        int len2 = patt.length();
        
        for(int i = 0; i < len2; i++)
        {
            mark[patt[i] - 'a'] = true;
        }
        
        for(int i = 0; i < len1; i++)
        {
            if(mark[str[i] - 'a'] == true)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
