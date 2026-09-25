class Solution {
public:
    int fib(int n) {
        if(n == 1){
            return 1;
        }
        int first = 0;
        int second = 1;
        int current = 0;
        for(int i = 2; i<=n; i++){
            current = first + second;
            first = second;
            second = current;
        }
        return current;
    }
};