class Solution {
public:
    vector<int> merge(vector<int> a, vector<int> b){


        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i<a.size() && j<b.size()){

            if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }

        while(i<a.size()){
            ans.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
    vector<int> sortArray(vector<int>& nums) {
         if (nums.size() <= 1) return nums;

        int mid = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        left = sortArray(left);
        right = sortArray(right);

        return merge(left, right);
    
    }
};