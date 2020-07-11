#include <math.h>
vector<int> Solution::plusOne(vector<int> &A) {
    int size = A.size() -1,carry=1;
    vector<int> B;
    long long sum=0;
    if(size == 0)
   { 
       if(A[0] == 9)
      {
          A[0] =1;
          A.push_back(0);
          return A;
      }
       else if(A[0]<9)
      { A[0]++; return A;}
   }
    reverse(A.begin(),A.end());
    for(int i =0; i<=size; i++)
    {
        A[i] += carry;
        if(A[i] >=10)
        {
            carry = A[i]/10;
            A[i] %= 10;
        }
        else carry =0;
    }
    if(carry !=0)
    A.push_back(carry);
      
    
  for(int i =A.size()-1; i>=0; i--)
  {
      if(A[i]==0)
      A.pop_back();
      else if(A[i] !=0)
      break;
  }
    
    
   reverse(A.begin(),A.end());

    return A;
}
