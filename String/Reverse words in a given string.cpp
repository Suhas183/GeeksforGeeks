class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> collector;
        string res, temp;
        
        int n = S.length();
        
        for(int i = 0; i < n; i++)
        {
            if(S[i] != '.')
            {
                temp.push_back(S[i]);
            }
            
            else
            {
                collector.push_back(temp);
                temp = "";
            }
        }
        
        collector.push_back(temp);
        
        int collector_size = collector.size();
        
        for(int i = collector_size - 1; i >=0 ; i--)
        {
            res = res + collector[i] + ".";
        }
        
        res.pop_back();
        return res;
    } 
};
