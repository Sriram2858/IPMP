int nthUglyNumber(int n) {
    vector<int> ugly(n);
    ugly[0] = 1;
    int p2 = 0, p3 = 0, p5 = 0;
    int next2, next3, next5;
    for(int i = 1; i < n; i++){
        next2 = ugly[p2]*2;
        next3 = ugly[p3]*3;
        next5 = ugly[p5]*5;

        ugly[i] = min(next2, min(next3, next5));
        
        if(ugly[i] == next2) ++p2;
        if(ugly[i] == next3) ++p3;
        if(ugly[i] == next5) ++p5;
    }
    return ugly[n-1];
}
