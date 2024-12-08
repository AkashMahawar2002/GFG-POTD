class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
         int n=arr.size();
        int m=2;
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;

        int spoint=arr[0][0],epoint=arr[0][1];
        for(int i=1;i<=n;i++)
        {
            if(i!=n && epoint>arr[i][1])
            {
                continue;
            }
            else if(i!=n && epoint>=arr[i][0])
            {
                epoint=arr[i][1];
            }
            else
            {
                ans.push_back({spoint,epoint});
                if(i!=n){
                spoint=arr[i][0];
                epoint=arr[i][1];
                }
            }
        }
        
        return ans;
    }
};