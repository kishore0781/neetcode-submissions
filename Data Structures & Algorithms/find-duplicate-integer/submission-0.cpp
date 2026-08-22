class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> us;

        for(int i = 0; i < nums.size(); i++)
        {
            if(us.count(nums[i]))
            {
                return nums[i];
                break;
            }
            else
            {
                us.insert(nums[i]);
            }
        }
        return 0;
    }
};
