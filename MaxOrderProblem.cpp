int solution (vector<int> D, vector<int>C, int P){
    
    int maxNumOrder=0;
    vector<pair<int,int>>order;
    for (int i = 0; i < D.size(); i++) {
       order.push_back(make_pair(D[i],C[i]));
    }
    sort(order.begin(),order.end());
    
   for (const auto& i : order) {
       int distance=i.first;
       int cout=i.second;
       if(P>=cout){
           P-=cout;
           maxNumOrder++;
       }
       else{
           break;
       }
   }
   return maxNumOrder;
}
