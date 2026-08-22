class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> leftCalc = nums;
        vector<int> rightCalc = nums;
        vector<int> finalCalc (nums.size()) ;
        for(int i =1, j = nums.size() - 2; i <nums.size(); i++,j--)
        {
            leftCalc[i] = leftCalc[i-1]*leftCalc[i];
            rightCalc[j] = rightCalc[j+1]*rightCalc[j];
        }
        
        for(int i =0; i < nums.size();i++)
        {
            if(i==0)
            {
                finalCalc[i] = rightCalc[i+1] ;
            }
            else if(i== (nums.size()-1))
            {
                finalCalc[i] = leftCalc[i-1] ;
            }
            else
            {
                finalCalc[i] = leftCalc[i-1] * rightCalc[i+1];
            }
            
        }

        return finalCalc;
        
    }
};
