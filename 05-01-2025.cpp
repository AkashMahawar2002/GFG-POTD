class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
         sort(arr.begin(), arr.end());
        int cnt =0;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]>=target)break;
            for(int j =i+1; j<arr.size(); j++){
                if(arr[i] + arr[j] < target){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        return cnt;
    }
};