int Solution::search(const vector<int> &A, int B) {
    
    int low = 0, high = A.size() - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(A[mid] == B){
            return mid;
        } else if(A[low] < A[mid]){
            if(B >= A[low] && B <= A[mid - 1]){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if(B >= A[mid + 1] && B <= A[high]){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

