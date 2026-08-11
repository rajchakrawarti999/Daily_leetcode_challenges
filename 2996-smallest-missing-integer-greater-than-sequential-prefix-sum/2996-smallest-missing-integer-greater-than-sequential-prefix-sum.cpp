class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];

        for(int i=0; i<n-1; i++){

            if(nums[i]+1==nums[i+1]){
                ans += nums[i+1];
            }
            else break;
            
        }

        while(find(nums.begin(), nums.end(), ans) != nums.end()){
            ans++;
        }

        return ans;
    }
};