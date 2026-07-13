class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        int i = 0;

        while(i<n){

            if(nums[i]%2==0){
                even.push_back(nums[i]);
                i++;
            }
            else{
                odd.push_back(nums[i]);
                i++;
            }
        }

        vector<int> ans;
         i = 0;
        int j = 0;

        while(i<even.size() && j<odd.size()){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
        }

        return ans;

    }
};