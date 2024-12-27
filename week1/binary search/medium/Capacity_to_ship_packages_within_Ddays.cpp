bool canShip(vector<int>& weights, int days, int m){
    int weightSum = 0;
    int daySum = 0;;
    for(int i = 0; i < weights.size(); i++){
        if(weightSum + weights[i] > m){
            weightSum = 0;
            daySum++;
        }
        weightSum += weights[i];
    }
    daySum++;
    return daySum <= days;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int l = *max_element(weights.begin(), weights.end()), h = 1e9;
    while(l <= h){
        int m = l + (h - l)/2;
        if(canShip(weights, days, m)){
            h = m - 1;
        }
        else
            l = m + 1;
    }
    return l;
}
