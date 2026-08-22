class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset ;
    void dfs(vector<int>& kd , int k)
    {
        if( k == kd.size())
        { 
            result.push_back(subset);
            return;
        }

        //include nums[i]
        subset.push_back(kd[k]);
        dfs(kd , k+1);



        //excluse nums[i]
        subset.pop_back();
        dfs(kd , k+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        


        dfs(nums , 0);
        return result;
    }
};
