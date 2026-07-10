class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posi;
        vector<int> neg;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                posi.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        vector<int> ans;
        int i = 0;
        int j = 0;
        while(i<posi.size() && j<neg.size()){
            ans.push_back(posi[i]);
            ans.push_back(neg[j]);
            i++;
            j++;
        }

        return ans;
    }
};