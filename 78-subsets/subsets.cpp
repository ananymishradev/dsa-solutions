class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer = {{}};
        for (int num : nums) {
            int n = answer.size();
            for (int i = 0; i < n; i++) {
                vector<int> newSubset = answer[i];
                newSubset.push_back(num);
                answer.push_back(newSubset);
            }
        }
        return answer;
    }
};

