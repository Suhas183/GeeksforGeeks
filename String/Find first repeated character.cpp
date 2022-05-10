string firstRepChar(string s)
{
    string res;
    vector<int> freq(26,0);
    int n = s.length();
    
    for(int i = 0; i < n; i++)
    {
        int temp = s[i] - 'a';
        
        if(++freq[temp] > 1)
        {
            res.push_back(s[i]);
            return res;
        }
    }
    
    return "-1";
}
