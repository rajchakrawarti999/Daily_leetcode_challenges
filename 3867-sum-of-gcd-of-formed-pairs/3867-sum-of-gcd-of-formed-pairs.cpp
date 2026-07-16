class Solution {
public:

    int gcd(int a , int b){

        while(b!=0){
            a%=b;
            swap(a,b);
        }

        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix;
        int maax = nums[0];

        for(int i=0; i<n; i++){
            if(nums[i] > maax){
                maax = nums[i];
            }
            int sum = gcd(nums[i], maax);
            prefix.push_back(sum);
        }

        sort(prefix.begin(), prefix.end());
        int m = prefix.size();
        int i = 0;
        int j = m-1;
        long long ans = 0;
        while(i<j){

            long long sum2 = gcd(prefix[i], prefix[j]);
            i++;
            j--;
            ans += sum2;
        }

        return ans;
    }
};