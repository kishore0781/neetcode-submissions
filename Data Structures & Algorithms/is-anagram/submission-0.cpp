class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> anag;
        for(int i = 0; i<s.length();i++)
        {
            anag[s[i]]++;
            anag[t[i]]--;
        }
        for(auto &it : anag)
        {
            if(it.second !=0)
            {
                return false;
            }
        }
        return true;
    }
};
