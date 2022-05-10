vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    
    if(v.size() == 0)
    {
        v = {-1,-1};
        return v;
    }
    
    for(int i = n; i >= 0; i--)
    {
        if(arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    
    return v;
}
