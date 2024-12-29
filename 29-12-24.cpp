class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        set<int>st1;
        set<int>st2;
         vector<int>v;
        for(int i=0;i<a.size();i++)
        {
            st1.insert(a[i]);
        }
        vector<int> ans;
        
        for(int i=0;i<b.size();i++)
        {
            st2.insert(b[i]);
        }
        
        for (auto it : st1) 
        {
            if (st2.find(it) != st2.end()) 
            { 
                v.push_back(it);        
            }
        }

        return v;
    }
};