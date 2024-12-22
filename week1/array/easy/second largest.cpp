int getSecondLargest(vector<int> &arr) {
    int max = 0;
    int max2 = 0;
    if(arr.size() == 1) return -1;
    else{
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max){
                max2 = max;
                max = arr[i];
            }
            else if(max2 < arr[i] && arr[i]!= max){
                max2 = arr[i];
            }
        }
        if(max2 == 0) return -1;
        else return max2;
    }
}
