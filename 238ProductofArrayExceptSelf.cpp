class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {  //optimal approach
        int n = nums.size();
        vector <int> ans(n,1);

        //prefix
        for(int i=1; i<n; i++) {
            ans[i] = ans[i-1]*nums[i-1];
        }

        int suffix = 1;
        //suffix
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1]; //ith suffix
            ans[i] *= suffix;
        }
        return ans;
    }
};
