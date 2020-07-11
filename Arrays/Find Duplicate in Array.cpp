int Solution::repeatedNumber(const vector<int> &A) {
     vector<int> v(A.size(),-1);
        
        for(int i =0; i<A.size(); i++)
        {
            if(v[A[i]] != -1)
            v[A[i]]++;
            else 
            v[A[i]] = 1;
        }
        for(int i =0; i<A.size(); i++)
        {
            if(v[i] !=1 && v[i]!=-1)
            return i;
        }
      return -1;
    }
  

