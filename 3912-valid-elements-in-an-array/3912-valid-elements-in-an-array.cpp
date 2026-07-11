class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n, INT_MIN);

        for(int i=n-2; i>=0; i--){

            right[i] = max(right[i+1], nums[i+1]);
        }
        vector<int> ans;
        int leftmax = INT_MIN;
        for(int i=0; i<n; i++){


            if(i==0 || i==n-1){
                ans.push_back(nums[i]);
            }

            else if(nums[i] > leftmax){
                ans.push_back(nums[i]);

            }
            else if(nums[i] > right[i]){
                ans.push_back(nums[i]);
            }

            leftmax = max(nums[i] , leftmax);
        }

        return ans;
        
    }
};