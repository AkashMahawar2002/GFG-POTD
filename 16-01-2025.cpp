class Solution {
  public:
     int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int,int>m;
        int n = arr.size();
        int sum = 0;
        int ans = 0;
        m[0] = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==0)sum--;
            else sum++;
            if(m.find(sum)!=m.end()){
                ans = max(ans,i-m[sum]);
            }
            if(m.find(sum)==m.end()){
                m[sum] = i;
            }
        }
        return ans;
    }
};
