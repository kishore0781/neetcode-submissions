class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_val = INT_MIN;
        int cur_sum = 0;
        for(auto i: nums)
        {
            if(cur_sum <0 ){
                cur_sum = 0;
            }
            cur_sum+= i;
            max_val = max(max_val , cur_sum);

        }
        
        return max_val;
    }
};
