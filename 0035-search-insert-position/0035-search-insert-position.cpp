class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int ans=nums.size();

        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]){
                low = mid + 1;
                ans = mid + 1;
            }
            else if(target < nums[0]){
                return 0;
            }
            else high = mid - 1;
        }
        return ans;
    }
};