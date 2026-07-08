class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j =0;
        vector<int> ans;
        while(i < nums1.size() &&  j < nums2.size()){

            if(nums1[i] > nums2[j]){
                j++;
            }
            else if (nums1[i] < nums2[j]){
                i++;
            }
            else{

                if(ans.size()==0){
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                    continue;
                }
                else{
                    int k = 0;
                    bool flag = true;
                    while(k< ans.size()){
                        if(nums2[j]==ans[k]){
                            flag = false;
                            break;
                        }
                        k++;
                    }
                    if(flag==true){
                        ans.push_back(nums1[i]);
                    }
                    i++;
                    j++;
                }
            }
              
            
        }
        return ans;
    }
};