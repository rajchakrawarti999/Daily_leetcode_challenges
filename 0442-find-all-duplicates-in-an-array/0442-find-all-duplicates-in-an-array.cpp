class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;
        vector<int> ans;

        for(auto x : nums){

            freq[x]++;
        }

        for(auto x : freq){

            if(x.second >= 2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};