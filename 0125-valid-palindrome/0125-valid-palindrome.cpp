class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        string ans = "";

        for(auto &c : s){

            c = tolower(c);
        }

        for(auto x : s){

            if(isalnum(x)){
                ans += x;
            }
        }

        int i =0;
        int j = ans.size()-1;

        while(i<=j){

            if(ans[i]==ans[j]) {
                i++;
                j--;
            }
            else{
                return false;
            }
        }

        return true;
    }
};