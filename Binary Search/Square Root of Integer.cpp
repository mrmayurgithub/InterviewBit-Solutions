class Solution:
    def sqrt(self, A):
       if A==1:
           return 1
       low=0
       high=A/2
       while low <= high:
            mid = low + (high-low)/2
            if mid*mid <= A:
                if (mid+1)*(mid+1)>A:
                    x = mid
                    return math.floor(x)
            elif mid*mid>A:
                high = mid-1
            else:
                low = mid+1
                
            

       
      