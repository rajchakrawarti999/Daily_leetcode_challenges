class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        

        for(int i=0; i<nums1.size(); i++){

            int j = 0;
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    
                    if(ans.size()==0){
                        ans.push_back(nums2[j]);
                        break;
                    }
                    

                    int k = 0;
                   bool flag = false;
                    while(k < ans.size()){
                        if(ans[k]==nums2[j]){
                            flag = true;
                           break;
                        }
                        k++;
                    }
                    if(flag == false){
                        ans.push_back(nums2[j]);
                    }
                    
                
                }
            }

        }
        return ans;
        
    }
};