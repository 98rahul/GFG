string gridChallenge(vector<string> grid) {
    /*int n =grid.size();
     for(int i=0;i<n;i++)
     {
         sort(grid[i].begin(), grid[i].end()); 
     }
    */
    for(int i = 0; i<grid.size(); i++){
    sort(grid[i].begin(), grid[i].end());    // sorting the alphabets like abcd...... order

}

for(int i = 0; i<grid[0].length(); i++) {
    for(int j = 1; j<grid.size(); j++){
        if(grid[j][i]<grid[j-1][i])
        {
        return "NO";
        }
    }
}

return "YES";
    

}
