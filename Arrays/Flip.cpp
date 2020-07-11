vector<int> Solution::flip(string A) {
    int i,s(0),ms(0),r(0),lm(0),rm(0),l(0),len;
    len=A.size();
    char ch;
    for(i=0;i<len;i++)
    {
    ch=A[i];
    switch (ch)
    {
        case '0':s++;
                 r=i;
                 if(s>ms)
                 {
                 ms=s;
                 lm=l;
                 rm=r;
                 }
                break;
        case '1':s--;
                 if(s<0)
                 {
                 l=i+1;
                 s=0;
                 }
                break;
    }
    }
    
    vector k(2,0);
    k[0]=lm+1;
    k[1]=rm+1;
    if (ms==0)
    k.clear();
    return k;
}
