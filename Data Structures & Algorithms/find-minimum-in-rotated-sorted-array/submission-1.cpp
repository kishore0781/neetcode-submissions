class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;
        int mid = 0;

        
        while(left < right)
        {
            mid = left + (right - left)/2;

            if(nums[right] > nums[mid])
            {
                right = mid;
            }
            else if (nums[right] < nums[mid])
            {
                left = mid + 1;
            }
        }
        return nums[left];
    }
};
