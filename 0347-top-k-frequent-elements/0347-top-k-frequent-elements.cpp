class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        vector<pair<int, int>> freq;

        for(auto x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            freq.push_back({x.second, x.first});
        }

        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        for(int i=0; i<k; i++){

            ans.push_back(freq[i].second);
        }

        return ans;

    }
};