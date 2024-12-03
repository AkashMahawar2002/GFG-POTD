// class Solution {
//   public:
//     int minChar(string& s) {
//         // Write your code here
//         int left = 0, right = s.size() - 1, count=0;    
//         while(right>left){
//             if(s[left]==s[right]){
//                 left++;
//                 right--;
//             }
//             else {
//                 count++;
//                 right=s.size()-count-1, left=0;
//             }
//         }
//         return count;
//     }
// }; ------------->TLE

class Solution {
  public:
    
    int minChar(string& s) {
        // CodeGenius
        string rev=s;
        reverse(rev.begin(),rev.end());
        string combine=s+ "*"+rev;
        int n=combine.size();
        
        vector<int>lps(n,0);
        for(int i=1,len=0;i<n;){
            if(combine[i]==combine[len]) lps[i++]=++len;
            else if(len) len=lps[len-1];
            else lps[i++]=0;
        }
        return s.size()-lps[n-1];
        
    }
};