class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(int i=0;i<arr.size();i++){
            string k=arr[i];
            sort(k.begin(),k.end());
            m[k].push_back(arr[i]);
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};