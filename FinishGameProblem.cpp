int solution(vector<int>&D,int X){
    int minLevel=D[0];
    int maxLevel=D[0];
    int days=0;
    for (int i = 1; i < D.size(); i++) {
        
        if(abs(D[i]-minLevel)>X||abs(maxLevel-D[i])>X){
            maxLevel=D[i];
            minLevel=D[i];
            days++;
        }
        else{
            minLevel=min(minLevel,D[i]);
            maxLevel=max(maxLevel,D[i]);
        }
        
    }
    return days;
}
