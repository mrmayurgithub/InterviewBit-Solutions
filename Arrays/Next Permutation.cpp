#include <algorithm> 
  
// Function to find the permutations 
void findPermutations(vector<int> &a, int n) 
{ 
  next_permutation(a.begin(), a.end());


} 
vector<int> Solution::nextPermutation(vector<int> &A) {
    findPermutations(A,A.size());
        return A;
}
