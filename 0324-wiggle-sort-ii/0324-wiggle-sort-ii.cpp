class Solution {
public:
    void wiggleSort(vector<int>& nums) {  
        int n  = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> firsthalf;
        vector<int> secondhalf;

        int mid = (n+1)/2;

        for(int i=0; i<mid; i++){
            firsthalf.push_back(nums[i]);
        }
        for(int i=mid; i<n; i++){
            secondhalf.push_back(nums[i]);
        }

        reverse(firsthalf.begin(), firsthalf.end());
        reverse(secondhalf.begin(), secondhalf.end());

        int k = 0;
        int j = 0;
        int i = 0;

        while(i<n){

            nums[i] = firsthalf[k++];
            i++;
            if(i < n && j < secondhalf.size()){
                nums[i] = secondhalf[j++];
                 i++;
            }
            
        }
    }
};