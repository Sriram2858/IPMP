bool canEat(vector<int>& piles, int n, int h, int m){
    long long hours = 0;
    for(int i = 0; i < n; i++){
        hours += (piles[i]/m);
        if(piles[i] % m != 0)
            hours++;
    }
    return hours <= h;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int low = 1, high = 1e9;
    int k;
    while(low <= high){
        int m = low + (high - low)/2;
        if(canEat(piles, n, h, m)){
            high = m - 1;
        }
        else
            low = m + 1;
    }
    return low;
}
