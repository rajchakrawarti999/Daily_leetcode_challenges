class Solution {
public:
    int minimum(vector<int>& nums, int i){

        int n = nums.size();

        int ans = nums[i];
        for(int j = i; j<n; j++){
            ans = min(ans, nums[j]);
        }

        return ans;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        int leftmax = nums[0];
        for(int i=0; i<n; i++){

            leftmax = max(leftmax, nums[i]);
            int rightmin = minimum(nums, i);

            int ans = leftmax - rightmin;

            if(ans <= k) return i;
        }
        return -1;
    }
};