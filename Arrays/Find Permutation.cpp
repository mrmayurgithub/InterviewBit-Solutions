vector<int> Solution::findPerm(const string A, int B) {
    vector < int > ans;
    int n = A.length();
    int maxi = n + 1, mini = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] == 'I') ans.push_back(mini++);
        if (A[i] == 'D') ans.push_back(maxi--);
    }
    ans.push_back(maxi);
    return ans;
}