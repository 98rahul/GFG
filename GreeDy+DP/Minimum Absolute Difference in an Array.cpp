int minimumAbsoluteDifference(vector<int> arr) {
    int n= arr.size();
    sort(arr.begin(),arr.end());
    int min=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<min)
        {
            min= arr[i+1]-arr[i];
        }
    }
    return min;
    
    
    

}
