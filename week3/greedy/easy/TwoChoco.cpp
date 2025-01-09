int buyChoco(vector<int>& prices, int money) {
    int min = 101;
    int min2 = 101;
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < min){
            min2 = min;
            min = prices[i];
        }
        else if(prices[i] < min2)
            min2 = prices[i];
    }
    int bill = min + min2;
    if(bill <= money)
        return money - bill;
    return money;
}
