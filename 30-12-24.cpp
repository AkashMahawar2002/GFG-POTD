class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        map<int,char>m;
        for(auto i:b)
        {
            m[i]='x';
        }
        for(auto i:a)
        {m[i]='x';}
      
        return m.size();
    }
};