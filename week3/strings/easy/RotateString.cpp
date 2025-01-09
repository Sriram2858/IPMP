bool rotateString(string s, string goal) {
    if(s.size() != goal.size()) return false;
    // int i = 0, j = 0;
    // int n = s.size();
    // while(i < n){
    //     if(s == goal)
    //         return true;
    //     goal = goal.substr(1) + goal[0];
    //     i++;
    // }
    // return false;
    string doubleString = s+s;
    return doubleString.find(goal) < doubleString.size();
}
