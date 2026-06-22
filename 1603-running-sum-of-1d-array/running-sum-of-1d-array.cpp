class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> Sum;
        long long int sum = 0;
        for(long long int value : nums){
            sum = sum + value;
            Sum.push_back(sum);
        }
        return Sum;
    }
};