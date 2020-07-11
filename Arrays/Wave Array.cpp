vector<int> Solution::wave(vector<int> &arr) {
    int n =arr.size();
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n-1; i+=2) 
    { 
        int c = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] =c;
    } 
    return arr;
}
