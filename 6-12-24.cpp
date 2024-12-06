lass Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin() , citations.end()) ;
        int n = citations.size() ;
        int ans = 0 ;
        for(int i = n - 1 ; i >= 0 ; i --){
            ans = max(ans , min(citations[i] , n - i)) ;
        }
        return ans ;
    }
}