class Solution {
  public:
    bool search(string pat, string txt){
        vector<int> res;
        int q = 101;
        int d = 26;
        int M = pat.size();
        int N = txt.size();
        int i, j;
        int p = 0;
        int t = 0;
        int h = 1;
        
        for (i = 0; i < M - 1; i++)  
            h = (h * d) % q;
        
        for (i = 0; i < M; i++) {  
            p = (d * p + pat[i]) % q;
            t = (d * t + txt[i]) % q;
        }
        
        for (i = 0; i <= N - M; i++) {
            if (p == t) {  
                for (j = 0; j < M; j++) {  
                    if (txt[i+j] != pat[j])  
                        break;  
                }
                if (j == M)  
                    res.push_back(i+1);  
            }
            if (i < N-M) {  
                t = (d*(t - txt[i]*h) + txt[i+M]) % q;  
                if (t < 0)  
                    t = (t + q);
            }
        }
        return res.size() != 0;
    }
    
    bool areRotations(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;
        string temp = s1 + s1;
        return search(s2, temp);
    }
};