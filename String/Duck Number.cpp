bool check_duck(string N){
    int n = N.length();
    bool flag = false;
    
    for(int i = 0; i < n; i++)
    {
        if(N[i] == '0' and flag == true)
        {
            return true;
        }
        
        else if(N[i] != '0')
        {
            flag = true;
        }
    }
    
    return false;
    
}
