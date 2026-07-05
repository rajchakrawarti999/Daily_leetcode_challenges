class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int prod1 = 1;
        int i = nums.size()-1;
        int count = 3;

        while(count!=0){
            prod1 *= nums[i];
            i--;
            count--;
        }

        int prod2 = 1;

        int j = 0;
        while(j<2){
            prod2 *= nums[j];
            j++;
        }
        prod2 *= nums[nums.size()-1];



        return max(prod2, prod1);

       
    }
};