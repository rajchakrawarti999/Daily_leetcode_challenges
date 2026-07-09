class Solution {
public:
    int reverse(int x) {
        int n = x;
        long long  ans = 0;

        while(n!=0){

            long long  mod = n%10;
            ans = ans * 10 + mod;
            n /= 10;
        }
        
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }

        return (int) ans;
    }
};