class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0;
        while(i<s.size()){

            if(isalnum(s[i])){
                ans += s[i];
            }
            i++;
        }

        i = 0;
        int j = ans.size()-1;

        while(i < j){

            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};