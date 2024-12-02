class Solution {
  public:
     vector<int> ans;
    int n, m;
    void solve(int i, string &text, string &pat){
        
        if(i >= m) return;
        
        auto it = text.find(pat, i);
        if(it != string::npos){
            ans.push_back(it);
            solve(it+1, text, pat);
        }
    }
    vector<int> search(string& pat, string& txt) {
        n = pat.length();
        m = txt.length();
        solve(0, txt, pat);
        return ans;
    }
};