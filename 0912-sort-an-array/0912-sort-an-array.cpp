class Solution {
public:

    vector<int> merge(vector<int>& a, vector<int>& b){

        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i<a.size() && j<b.size()){

            if(a[i] <= b[j]){
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

        if(nums.size()<=1) return nums;
        vector<int> a;
        vector<int> b;
        int n = nums.size();
        for(int i=0; i<n/2; i++){

            a.push_back(nums[i]);
        }

        for(int i=n/2; i<n; i++){
            b.push_back(nums[i]);
        }

        a = sortArray(a);
        b = sortArray(b);

        return merge(a, b);
    }
};