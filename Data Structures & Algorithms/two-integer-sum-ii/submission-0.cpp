class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> ret(2);

        while(left<=right)
        {
            if(target < numbers[left] + numbers[right])
            {
                right--;
            }
            else if(target > numbers[left] + numbers[right])
            {
                left++;
            }
            else
            {
                ret[0] = left+1;
                ret[1] = right+1;
                return ret;
            }
        }
    }
};
