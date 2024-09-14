class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for( int val: nums) {
           ans = ans^val; // used XOR Operator
        }
        return ans;
    }
};
