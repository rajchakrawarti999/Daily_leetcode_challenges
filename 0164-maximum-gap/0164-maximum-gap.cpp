class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int ans = 0;

        for(int i=0; i<n-1; i++){

            int sum = abs(nums[i]-nums[i+1]);

            if(ans < sum){
                ans = sum;
            }
        }
        return ans;
    }
};