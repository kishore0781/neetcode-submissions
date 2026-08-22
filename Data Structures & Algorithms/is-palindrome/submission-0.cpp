class Solution {
public:
    bool isPalindrome(string s) {
        string isPal = "";
        for(char c : s)
        { 
            if(isalnum(c))
            {
                isPal += tolower(c); 
            }
        }
        
        int right = isPal.length() - 1;
        int left = 0;
        while(left<=right)
        {
            if(isPal[left] != isPal[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
