class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i = 0;
        int j = 0;

        while(i<n && j < n){

            while(i<n && nums[i] < 0){
                i++;
            }
            while(j<n && nums[j] > 0){
                j++;
            }


            if(i<n){
                ans.push_back(nums[i]);
                i++;
            }
            if(j<n){
                ans.push_back(nums[j]);
                j++;
            }

            
        }
        return ans;
    }
};