#define all(x) (x).begin(), (x).end()
class Solution {
public:
    bool minFeasible(vector<int>& kiles ,int bananaPH, int maxHours)
    {
        int total_hours = 0;

        for(int i = 0; i < kiles.size();i++)
        {
            total_hours = total_hours + (kiles[i] + bananaPH -1) /  bananaPH;
        }
        if(total_hours > maxHours)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(all(piles));
        int mid = 0;
        while(left < right)
        {
            mid = left + (right-left)/2;
            if(minFeasible(piles , mid ,h))
            {
                //its within hours but need to check if its smallest integer
                right = mid;
            }
            else 
            {
                left = mid + 1;
            }
        }
        return left;
    }
};
