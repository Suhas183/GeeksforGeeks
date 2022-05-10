void rotate(int arr[], int n)
{
    int temp[n] = {0};
    
    for(int i = 0; i < n; i++)
    {
        int k = (i+1)%n;
        temp[k] = arr[i]; 
    }
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

}
