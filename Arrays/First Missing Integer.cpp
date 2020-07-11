int Solution::firstMissingPositive(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int c=0;
    
    if(A.size()==1)
    {
        if(A[0] <=0)
        return 1;
        else if(A[0]!=1){
            return 1;
        }
        else return 2;
    }
for(int i=0; i<A.size()-1; i++)
{
    if(A[i]>0 && c==0 && A[i]==1)
    c++;
    if(A[i]>0 && c==0 && A[i]!=1)
    return 1;
    if(c!=0)
    {
        if(A[i] == A[i+1]-1)
        continue;
        else return A[i]+1;
    }
}
if(c!=0 && A[A.size()-1]>0)
return A[A.size()-1]+1;
if(c==0 && A[A.size()-1]<0)
return 1;

}
