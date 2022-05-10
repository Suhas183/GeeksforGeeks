string printSequence(string S)
{
    vector<string> keypad = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777", "8","88","888","9","99","999","9999"};
    int n = S.length();
    
    string s;
    
    for(int i = 0; i < n; i++)
    {
        if(isalpha(S[i]))
        {
            s = s + keypad[S[i] - 'A'];
        }
        
        else
        {
            s = s + "0";
        }
    }
    
    return s;
}
