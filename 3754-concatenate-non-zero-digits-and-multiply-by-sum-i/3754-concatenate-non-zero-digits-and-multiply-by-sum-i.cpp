class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string x = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]!='0'){
                x += s[i];
            }
        }

        if(x.empty()) return 0;
        int m = stoi(x);
        long long sum = 0;
        n = m;
        while(n!=0){
            int mod = n%10;
            sum += mod;
            n /= 10;
        }
        long long ans = m*sum;
        return ans;
    }
};