class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int count=0;
        unordered_map<int,int> u;
        for(int x:arr)
        {
            if(u.find(target-x)!=u.end())
            count+=u[target-x];
            u[x]++;
        }
        return count;
    }
};