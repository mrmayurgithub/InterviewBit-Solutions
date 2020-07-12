int Solution::searchInsert(vector<int> &A, int B) {
int size = A.size();
if(A.size()==1)
{
    if(A[0]==B)
    return 0;
    else if(A[0] < B)
    return 1;
    else return 0;
}

    int low=0,high=A.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]==B) return mid;
        if(A[mid]<B) low=mid+1;
        else high=mid-1;
    }
for(int i=0; i<A.size()-1; i++){
    if(A[0] > B)
    return 0;
    if(A[i] < B && A[i+1] > B)
    return i+1;
}
    
}
