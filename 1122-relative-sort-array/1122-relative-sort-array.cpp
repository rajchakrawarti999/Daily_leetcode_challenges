class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        

        unordered_map<int, int> freq;

        for(auto x : arr1){
            freq[x]++;
        }

        vector<int> ans;

        for(auto x : arr2){

            while(freq[x] > 0){
                ans.push_back(x);
                freq[x]--;
            }
        }

        vector<int> remaing;
        for(auto x : freq){
            while(x.second > 0){

                remaing.push_back(x.first);
                x.second--;
            }
        }

        sort(remaing.begin(),remaing.end());

        for(auto x : remaing){
            ans.push_back(x);
        }

        
        return ans;

    }
};