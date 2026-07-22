class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n  = s.size();

        int i = n-1;
        int j = n-1;

        while(i>=0){

            while(i>=0 && s[i]==' '){
                i--;
            }

            if(i<0) break;
            j = i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            if(ans.size()>0){
                ans += " ";
            }

            for(int k=i+1; k<=j; k++){
                ans += s[k];
            }
            
        }
        return ans;
    }
};