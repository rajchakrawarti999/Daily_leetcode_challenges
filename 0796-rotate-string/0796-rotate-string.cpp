class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();

        if(n!=goal.size()) return false;

        for(int i=0; i<n; i++){

            int j = 0;
            int k = i;

            while(j<n && s[k]==goal[j]){

                j++;
                k = (k+1) % n;
            }

            if(j==n) return true;
        }
        return false;
    }
};