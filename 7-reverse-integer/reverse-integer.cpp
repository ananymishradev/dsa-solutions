class Solution {
public:
    long long reverse(long long x) {
        long long temp = 0;
        long long sum = 0;
        while(x!=0){
            temp = x%10;
            sum = (sum * 10) + temp;
            x = x /10;
        }
        if (sum >= pow(-2,31) && sum <= pow(2,31) - 1){
            return sum;
        } else {
            return 0;
        }
    }
};