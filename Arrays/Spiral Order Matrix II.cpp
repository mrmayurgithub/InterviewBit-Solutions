vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > v( A , vector<int> (A, 0));  
    
    int count = 1;
     int T =0,B=A-1,L=0,R=A-1,dir = 0;
   
   
   
    while(T <= B && L <= R)
    {
        if(dir==0)
        {
            for(int i =L; i<=R; i++)
            //cout<<A[T][i]<<",";
           { v[T][i] =count;
            count++;}
            T++; dir=1;
        }
        else if (dir ==1){
        
            for(int i =T; i<=B; i++)
           // cout<<A[i][R]<<",";
           { v[i][R] = count;
            count++;}
            R--;dir =2;
        }
        else if(dir ==2){
            for(int i =R; i>=L; i--)
          //  cout<<A[B][i]<<",";
           { v[B][i]=count;
            count++; }
            B--; dir =3;
        }
        else if(dir == 3)
        {
         for(int i =B; i>=T; i--)
            //cout<<A[i][L]<<",";
            { v[i][L]=count;
            count++; }
            L++; dir =0;   
        }
            
    }
    return v;
}
