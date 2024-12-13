class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
          int mn=arr[0];
        
        for(int i = 1; i < arr.size(); i++){
            
            mn = min(mn,arr[i]);
        }
        return mn;
    }
};