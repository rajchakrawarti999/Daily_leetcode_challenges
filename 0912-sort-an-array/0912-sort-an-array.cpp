class Solution {
public:
    vector<int> merge(vector<int> a, vector<int> b){
        vector<int> ans;
        int i = 0;
        int j = 0;
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
        while(a.size()!=i){
            ans.push_back(a[i]);
            i++;
        }
        while(b.size()!=j){
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
    
    vector<int> mergeSort(vector<int>& nums) {

        // Base Case
        if (nums.size() <= 1)
            return nums;

        int mid = nums.size() / 2;

        vector<int> left, right;

        for (int i = 0; i < mid; i++)
            left.push_back(nums[i]);

        for (int i = mid; i < nums.size(); i++)
            right.push_back(nums[i]);

        // Recursive calls
        left = mergeSort(left);
        right = mergeSort(right);

        // Merge both sorted halves
        return merge(left, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums);
    }
};