class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, end = nums.size()-1;

        while(st<=end) {                      
            int mid = st + (end-st)/2;
            if(nums[mid]==target) {
                return mid;
            }
            if(nums[st] <= nums[mid]) {                                 // To identify which part is sorted:
                if(nums[st] <= target && target <= nums[mid]) {         // If nums[st] <= nums[mid], the left half of the array is sorted.
                    end = mid-1;                                        // Otherwise, the right half is sorted.
                } else {
                    st = mid + 1;
                }
            } else {
                if(nums[mid]<= target && target <= nums[end]) {
                    st = mid+1;
                } else {
                    end = mid -1;
                }
            }
        }
        return -1;
    }
};
