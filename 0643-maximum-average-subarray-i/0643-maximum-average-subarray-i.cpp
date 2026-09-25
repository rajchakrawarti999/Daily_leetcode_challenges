class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        int maxsum = 0;
        int sum = 0;
        if(n==1) return (double) nums[0]/k;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        if(n==k) return (double) sum/k;

        int i = 1;
        int j = k;
        maxsum = sum;
        while(j<n){

            sum = sum + nums[j] - nums[i-1];

            if(maxsum < sum){
                maxsum = sum;
            }
            i++;
            j++;

        }

        return (double)maxsum/k;
    }
};