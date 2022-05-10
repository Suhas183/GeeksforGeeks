class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string s1, s2;
        int len1 = str1.length();
        int len2 = str2.length();
        
        if(len1 != len2)
        {
            return false;
        }
        
        for(int i = 0; i < len1; i++)
        {
            s1.push_back(str1[(i+2)%len1]);
        }
        
        if(s1 == str2)
        {
            return true;
        }
        
        for(int i = 0; i < len1; i++)
        {
            if(i > 1)
            {
            s2.push_back(str1[(i - 2)%len1]);
            }
            
            else
            {
                s2.push_back(str1[len1 + i -2]);
            }
        }
        
        if(s2 == str2)
        {
            return true;
        }
        
        return false;
    }

};
