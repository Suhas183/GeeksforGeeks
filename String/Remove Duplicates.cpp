class Solution{
public:	
		
	string removeDups(string S) 
	{
	    int n = S.length();
	    vector<bool> mark(26,false);
	    string res;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(mark[S[i] - 'a'] == false)
	        {
	            res.push_back(S[i]);
	            mark[S[i] - 'a'] = true;
	        }
	    }
	    
	    return res;
	}
};
