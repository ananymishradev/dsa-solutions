class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet(nums.begin(), nums.end());
        if(mySet.size() < nums.size()) return true;
        return false;     
    }
};