class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp ;
        int mid = n/2;
        for(auto x : nums){
            mp[x]++;
        }

        for(auto m : mp){

            if(m.second > mid){
                return m.first;
            }
        }

        return 0;
    }
};