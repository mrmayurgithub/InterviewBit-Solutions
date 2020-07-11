int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    for(int i=0;i<A.size();++i)
    {
        if(A[i]==(n-i-1))
        {
           if(i!=A.size()-1)
             { if(A[i]!=A[i+1])
                 return 1;}
           else return 1; 
        }
    }
    return -1;
}

