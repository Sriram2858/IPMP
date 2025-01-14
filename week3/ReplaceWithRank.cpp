vector<int> replaceWithRank(vector<int> &arr, int N){
    map<int, int> mp;
    vector<int> ans(N);
    for(int i = 0; i < arr.size(); i++){ //Store the element in another array
        ans[i] = arr[i];
    }
    sort(arr.begin(), arr.end());  //sort
    int j = 0;
    for(int i = 0; i < N; i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = j; //map the ele to the first occurence in sorted array
            j++;
        }
    }
    for(int i = 0; i < N; i++){
        arr[i] = mp[ans[i]] + 1;
    }
    return arr;
}
