class Solution {
public:
    bool isPalindrome(long long x) {
        if (x<0){
            return false;
        } else {
            long long num = x;
            long long temp = 0;
            long long sum = 0;
            while(x!=0){
                temp = x % 10;
                sum = sum * 10 + temp;
                x = x / 10;
            }
            if(sum==num) return true;
            else return false;
        }
    }
};