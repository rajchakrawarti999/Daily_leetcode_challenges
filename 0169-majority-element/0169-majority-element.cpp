class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> freq;

        for(auto x : nums){
            freq[x]++;
        }
        
        int mid = n/2;

        for(auto x : freq){

            if(x.second > mid){
                return x.first;
            }
        }

        return 0;

    }
};