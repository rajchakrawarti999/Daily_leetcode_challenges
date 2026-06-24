class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;

        // Step 1: sort intervals
        sort(intervals.begin(), intervals.end());

        for (auto interval : intervals) {
            // Step 2: agar res empty hai ya overlap nahi hai
            if (res.empty() || res.back()[1] < interval[0]) {
                res.push_back(interval);
            } 
            else {
                // Step 3: merge
                res.back()[1] = max(res.back()[1], interval[1]);
            }
        }

        return res;
    }
};