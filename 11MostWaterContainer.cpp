class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater =0; //ans
        int lp=0, rp=height.size()-1;   // 2 pointer approach

        while(lp<rp) {
            int w=rp-lp;
            int ht= min(height[lp], height[rp]);   // since min ht decides how much water container will hold
            int currWater = w*ht;
            maxWater= max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--; 
        }
        return maxWater;
    }
};
