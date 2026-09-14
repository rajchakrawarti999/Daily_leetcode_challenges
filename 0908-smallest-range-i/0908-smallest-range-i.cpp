class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();

        int min = INT_MAX;
        int max = INT_MIN;

        for(int i=0; i<n; i++){

            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }

        int diff = max - min - (2*k);

        if(diff <= 0){
            return 0;
        }
        else{
            return diff;
        }
        return -1;
    }
};