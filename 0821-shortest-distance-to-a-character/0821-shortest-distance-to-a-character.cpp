class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);

        int prev = -100000;

        for(int i=0; i<n; i++){
            if(s[i]==c){
                prev = i;
            }

            ans[i] = i - prev;
        }

        prev = 100000;
        for(int j = n-1; j>=0; j--){

            if(s[j]==c){
                prev = j;
            }

            ans[j] = min(ans[j], prev - j);
        }

        return ans;
    }
};