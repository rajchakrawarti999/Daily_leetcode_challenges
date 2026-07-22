class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int count = 0;
        for(int i=0; i<s.size(); i++){
            
            if(s[i]==s[i+1]){
               count++;

               if(count < 2 ){
                    ans+=s[i];
               }
            }
            else{
                ans+=s[i];
                count = 0;
            }

        }
        return ans;
    }
};