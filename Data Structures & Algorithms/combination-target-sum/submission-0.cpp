class Solution {
public:

    vector<int> subset;
    vector<vector<int>> result;
    void dfs ( int target, vector<int>& nums,int index)
    {
        if(target == 0)
        {
            result.push_back(subset);
            return;
        }
        if(target < 0)
        {
            return;
        }
        if(target > 0)
        {
            for( int i =index ; i < nums.size();i++)
            {
                subset.push_back(nums[i]); //choose
                dfs(target - nums[i], nums, i); // expore
                subset.pop_back(); // unchoose
            }
            
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        dfs(target , nums, 0);

        return result;

    }
};
