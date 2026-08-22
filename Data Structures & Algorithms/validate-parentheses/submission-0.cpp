class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() == 0){
            return true;
        }
        for(char c : s)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
               if(st.empty())
               { 
                    return false;
               } 
               else if( c == '}' || c == ']' || c == ')')
               {
                 if(c == '}' && st.top()!='{')
                 {
                    return false;
                 }
                 if(c == ']' && st.top()!='[')
                 {
                    return false;
                 }
                 if(c == ')' && st.top()!='(')
                 {
                    return false;
                 }
                 st.pop();
               }
            }
        }
        if(st.size()!=0)
        {
            return false;
        }
        else
        {return true;}
    }
};
