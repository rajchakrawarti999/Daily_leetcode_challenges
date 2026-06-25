class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        int count = 0;

        for(int i=0; i<n; i++){
            int target_count = 0;
            //if(nums[i]==target) target_count++;

            for(int j=i; j<n; j++){
                if(nums[j]==target) target_count++;
                int length = (j-i+1)/2;

                if(target_count > length){
                    count++;
                }
            }
            target_count = 0;
        }
        return count;
    }
};