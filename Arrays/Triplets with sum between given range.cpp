int Solution::solve(vector<string> &A) {
    
    int n=A.size();
    int l=0,r=n-1;

    sort(A.begin(),A.end());

while(l<r-1)
{
  double s=stod(A[l])+stod(A[r])+stod(A[l+1]);
    if(s>2)
       r=r-1;
    else if (s<1)
       l=l+1;
    else
       return 1;
}
return 0;
}
