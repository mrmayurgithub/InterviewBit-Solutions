int Solution::maxSubArray(const vector<int> &A) {
    int max_far=INT_MIN, max_ending = 0;
    for(int i =0; i<A.size(); i++)
    {
        max_ending += A[i];
        if(max_ending > max_far)
        max_far = max_ending;
        
        if(max_ending < 0)
        max_ending = 0;
    }
    return max_far;
}
