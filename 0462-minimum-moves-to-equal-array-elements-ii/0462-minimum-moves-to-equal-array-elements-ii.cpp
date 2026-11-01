class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int lo = 0;
        int hi = nums.size()-1;

        int mid = lo + (hi-lo)/2;
        

        int mini = nums[mid];

        int moves = 0;
         for(auto x : nums){

            moves += abs(mini - x);
         }

        return moves;
    }
};