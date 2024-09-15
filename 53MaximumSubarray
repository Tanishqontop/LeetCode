class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int CurSum=0, MaxSum = INT_MIN; // curSum = CurrentSum // Max Sum initialised to Minimum as - infinity // using Kadane's Algorithm here.
        for(int val: nums) {
            CurSum+=val;
            MaxSum = max(CurSum,MaxSum);

            if(CurSum<0)
               CurSum=0;
        }
        return MaxSum;
    }
};
