int Solution::repeatedNumber(const vector<int> &A) {
    int len = A.size();
    if (A.size() == 0) {
        return -1;
    }
    if (A.size() == 1) {
        return A[0];
    }
    
    int c1 = A[0];
    int c2 = A[1];
    int c1count = 0;
    int c2count = 0;
    
    for(int num: A){
        if(c1 == num){
            c1count++;
        }
        else if(c2 == num){
            c2count++;
        }
        else if(c1count == 0){
            c1 = num;
            c1count = 1;
        }
        else if(c2count == 0){
            c2 = num;
            c2count = 1;
        }
        else{
            c1count--;
            c2count--;
        }
    }
    
    c1count = 0;
    c2count = 0;
    for(int num : A){
        if(c1 == num){
            c1count++;
        }
        else if(num == c2){
            c2count++;
        }
    }
    
    if(c1count > len/3){
        return c1;
    }
    else if(c2count > len/3){
        return c2;
    }
    else{
        return -1;
    }
        
}