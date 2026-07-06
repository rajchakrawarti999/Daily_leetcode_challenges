class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i  = 0;
        int j = 0;
        int ans = 0;

        unordered_map<char, int> mp;

        while(i<n){

            if(mp.find(s[i]) != mp.end()){
                j = max(j , mp[s[i]]+1);
            }

            mp[s[i]] = i;

            ans = max(ans , i-j+1);

            i++;
            
        }
        return ans;
    }
};