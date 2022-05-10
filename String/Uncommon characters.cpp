class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            vector<int> mark1(26,0);
            vector<int> mark2(26,0);
            string s;
            
            int len_a = A.length();
            int len_b = B.length();
            
            for(int i = 0; i < len_a; i++)
            {
                mark1[A[i] - 'a']++;
            }
            
            for(int i = 0; i < len_b; i++)
            {
                mark2[B[i] - 'a']++;
            }
            
            for(int i = 0; i < 26; i++)
            {
                if((mark1[i] == 0 and mark2[i] != 0) or (mark1[i] != 0 and mark2[i] == 0))
                {
                    s.push_back(char(i + 'a'));
                }
            }
            
            if(s.length() == 0)
            {
                return "-1";
            }
            
            return s;
            
        }
};
