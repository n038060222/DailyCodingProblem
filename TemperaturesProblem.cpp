int solution(vector<int>& temperatures) {
    if (temperatures.size() < 3) return 0;
    int lastDay,currentDay,nextDay;
    int warmNights=0;
    
    for (int i = 1; i < temperatures.size(); i+=2) {
       
        lastDay=temperatures[i-1];
        currentDay=temperatures[i];
        nextDay=temperatures[i+1];
        
        if(abs(currentDay-lastDay)<=5&&abs(nextDay-currentDay)<=5)
            warmNights++;
        
    }
    return warmNights;
}
