class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            int x=s[i]-'a';
            count[x]++;
        }
        for(int i=0;i<s.length();i++){
            int x=s[i]-'a';
            if(count[x]==1){
                return s[i];
            }
        }
        return '$';
    }
};