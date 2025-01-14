vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<pair<int, int>> d;
    vector<vector<int>> ans;
    for(int i = 0; i < points.size(); i++){
        int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
        d.push_back({dist, i});
    }
    sort(d.begin(), d.end());
    for(int i = 0; i < k; i++){
        ans.push_back(points[d[i].second]);
    }
    return ans;
}
