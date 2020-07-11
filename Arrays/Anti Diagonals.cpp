vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) 
{
    vector<vector<int>>s;
    //int i=0;
    vector<int> v;
    int r = A.size();
    int c = A[0].size();
    if(c == 0 or r == 0)return s;
    
    int i;
    int j = 0;

    for(i=0;i<c;i++)
    {
        v.clear();
        int p = i,q = j;
        while(p>=0 and q<=(r-1))
        {
            v.push_back(A[q][p]);
            p--;q++;
        }
        s.push_back(v);
    }

    i = c-1;
    for(j=1;j<r;j++)
    {
        v.clear();
        int p = i,q = j;
        while(p>=0 and q<=(r-1))
        {
            v.push_back(A[q][p]);
            p--;q++;
        }
        s.push_back(v);
    }
    return s;
}
