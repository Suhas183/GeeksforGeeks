void sort012(int a[], int n)
{
    int map[4] = {0};
    
    for(int i = 0; i < n; i++)
    {
        map[a[i]]++;
    }
    
    
    int j = 0;
    
    for(int i = 0; i < 3; i++)
    {
        while(map[i]--)
        {
            a[j] = i;
            j++;
        }
    }
}
