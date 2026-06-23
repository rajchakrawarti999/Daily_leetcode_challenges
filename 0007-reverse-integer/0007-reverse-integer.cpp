class Solution {
public:
    int reverse(int x) {
        long long  r=0;
    while(x!=0){
        long long ld =x%10; //id=last digit
        r = r*10;
        r = r+ld;
        x/=10;
        if (r > INT_MAX || r < INT_MIN)  // overflow check
                return 0;
    }
    return (int)r;
    }
};