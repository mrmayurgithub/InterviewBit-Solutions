row=-1;
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int r=A.size(),c=A[0].size(),row=-1;
    for(int i=0;i<r;i++){
        if(B>=A[i][0]&&B<=A[i][c-1]){
            row=i;
            break;
        }
    }
    if(row==-1) return 0;
    int low=0,high=c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[row][mid]==B) return 1;
        if(A[row][mid]<B) low=mid+1;
        else high=mid-1;
    }
    return 0;
}