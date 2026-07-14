class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mid = n/3;

        vector<int> ans;
        unordered_map<int , int> mp;
        for(auto x : nums){
            mp[x]++;
        }

        for(auto x : mp){

            if(x.second > mid){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};