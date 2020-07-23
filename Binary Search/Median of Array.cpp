double Solution::findMedianSortedArrays(const vector<int> &a, const vector<int> &a) {


vector<int> A=a,B=b;
   
    A.insert(A.end(),B.begin(),B.end());
    sort(A.begin(),A.end());
    if(A.size()%2==0)
    return (A[A.size()/2] + A[A.size()/2 + 1])/2;
    else return A[A.size()/2];
}
