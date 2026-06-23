class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        //previous greatest ele
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i=1; i<n; i++){
            prev[i] = max;
            if(max < height[i]){
                max = height[i];
            }
        }

        // next greatest element 
        int next[n];
        next[n-1] = -1;
        max = height[n-1];
        for(int i=n-1; i>=0; i--){
            next[i] = max;
            if(max < height[i]){
                max = height[i];
            }
        }
        // minimum element (previous array and next array helps)
        int minimum[n];
        for(int i=0; i<n; i++){
            minimum[i] = min(prev[i], next[i]);
        }

        //water calculating 
        int water = 0;
        for(int i=0; i<n; i++){
            if(height[i] < minimum[i]){
                water += (minimum[i]-height[i]);
            }
        }
        return water ;
    }
};