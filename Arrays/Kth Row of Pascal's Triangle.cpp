vector<int> Solution::getRow(int n) {
    vector<vector<int>>pascal(n+1);
   
    if(n+1!=0)
    {
        pascal[0]={1};
        for(int i=1;i<n+1;i++)
        {
            pascal[i].push_back(1);
            for(int j=1;j<pascal[i-1].size();j++)
                pascal[i].push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            pascal[i].push_back(1);
        }
    }
    return pascal[n];
}
