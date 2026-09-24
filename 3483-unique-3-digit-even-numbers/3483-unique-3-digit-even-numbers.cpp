class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        set<int> st;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==0) continue;

            for(int j=0; j<n; j++){

                if(i==j) continue;

                for(int k=0; k<n; k++){

                    if(i==k || j==k) continue;

                    if(nums[k]%2!=0) continue;

                    int num = nums[i] * 100 + nums[j]* 10 + nums[k];

                    st.insert(num);
                }
            }
        }

        return st.size();
    }
};