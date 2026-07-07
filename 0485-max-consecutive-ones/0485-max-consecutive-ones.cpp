class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        int ans = 0;
        int i = 0;

        while(i<n){

            if(nums[i]==1){
                count++;
                i++;
            }

            else if(nums[i]==0){
                ans = max(ans, count);
                count = 0;
                i++;
            }
        }

        ans = max(ans, count);

        return ans;

        
    }
};