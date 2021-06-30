long marcsCakewalk(vector<int> calorie) {
    long max=0;
    int n = calorie.size();
    sort(calorie.rbegin(), calorie.rend());
    
    for(int i=0;i<n;i++)
    {
        max+=pow(2,i)*calorie[i];
    }
    return max;

}
