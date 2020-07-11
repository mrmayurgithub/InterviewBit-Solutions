int Solution::maximumGap(const vector<int> &A) 
{
    if(A.size()<2)
    {
        return 0;
    }
    int maxi = INT_MIN, temp;
    vector<int> &arr = const_cast<vector<int>&>(A);
    make_heap(arr.begin(), arr.end());
    while(!arr.empty())
    {
        temp = arr.front();
        pop_heap(arr.begin(),arr.end());
        maxi = max(temp - arr.front(), maxi);
        arr.pop_back();
    }
    return maxi;
}
