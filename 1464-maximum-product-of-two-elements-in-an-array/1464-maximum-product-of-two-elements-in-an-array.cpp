class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        int n = nums.size();
        int ans = 0;
        while(j<n){
            
            int maxi = (nums[i]-1)*(nums[j]-1);
            ans = max(ans, maxi);
            i++;
            j++;
            
        }
        return ans;
    }
};