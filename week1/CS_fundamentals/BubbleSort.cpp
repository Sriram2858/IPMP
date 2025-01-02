void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                flag = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(flag == 0)
            break;
    }
}
