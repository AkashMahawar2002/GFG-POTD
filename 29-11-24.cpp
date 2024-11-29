//Brute approach
// class Solution {
//   public:
//     string addBinary(string& s1, string& s2) {
//         long long st1 = stoi(s1, nullptr, 2);
//         long long st2 = stoi(s2, nullptr, 2);
//         long long ans = st1+st2;
//         string binary = "";
//         while (ans > 0) {
//           binary = to_string(ans % 2) + binary;
//           ans /= 2;
//         }
//      return binary;
//     }
// };
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        //CodeGenius
        string ans="";
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        while(i>=0 || j>=0){
            int count1s=0;
            if(i>=0 && s1[i]=='1') count1s++;
            if(j>=0 && s2[j]=='1') count1s++;
            
            if(count1s + carry==0){
                ans+='0';
                carry=0;
            }
            else if(count1s + carry==1){
                ans+='1';
                carry=0;
            }
            else if(count1s + carry==2){
                ans+='0';
                carry=1;
            }
            else if(count1s + carry==3){
                ans+='1';
                carry=1;
            }
            i--;
            j--;
        }
        if(carry==1){
            ans+=to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        i=0;
        while(ans[i]=='0'){
            ans.erase(0,1);
        }
        
        return ans;
    }
};