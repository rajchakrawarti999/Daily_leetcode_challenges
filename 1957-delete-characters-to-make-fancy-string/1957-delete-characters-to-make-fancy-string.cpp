class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();

        string ans = "";
        int count = 0;
        int i = 0;
        int j = 0;

        while(j<n){


           if(s[i]==s[j]){

                count++;

                if(count <= 2){
                    ans += s[j];
                }
                i++;
           }
           else{
             j = i;
             count = 0;
           }
        }
        return ans;
    }
};