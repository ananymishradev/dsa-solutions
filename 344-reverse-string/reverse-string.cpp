class Solution {
public:
    void reverseString(vector<char>& s) {
        long int left = 0;
        long int right = s.size() - 1;

        while(left < right){
            swap(s[left], s[right]);

            left++;
            right--;
        }
        
    }
};