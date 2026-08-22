class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.size() <=1 )
        {
            return 0;
        }

        int left = 0;
        int right = heights.size() - 1;
        int mn = 0;
        int curr_val = 0;
        int max_val = 0;
        while(left <= right)
        {
            mn = min(heights[left], heights[right]);
            curr_val = mn*(right - left);
            if(curr_val > max_val)
            {
                max_val = curr_val;
            }
            if(heights[left] > heights[right])
            {
                right--;
            }
            else if(heights[left] < heights[right])
            {
                left++;
            }
            else
            {
                left++;
                right--;
            }
        }
        return max_val;
    }
};
