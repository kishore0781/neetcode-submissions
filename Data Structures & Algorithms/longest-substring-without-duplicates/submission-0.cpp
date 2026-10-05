class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> cnt (128,0); 
        int l = 0; int sz = s.size();  int best = 0;


        for(int r=0; r < sz; r++)
        {
            cnt[s[r]]++;

            while(cnt[s[r]] > 1)
            {
                cnt[s[l]]--;
                l++;
            }
            best = max(best, r-l+1);
        }

        return best;
    }
};
