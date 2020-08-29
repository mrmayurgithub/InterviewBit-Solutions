int Solution::singleNumber(const vector<int> &A) {
    int ret = 0;
    for(int i = 0; i < A.size(); i++)
        { ret ^= A[i]; cout<<ret<<endl;
        }
    return -1;
}
