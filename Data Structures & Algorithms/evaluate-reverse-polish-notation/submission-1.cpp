class Solution {
public:
    bool isOPerator(string d)
        {
            if ( d == "+" || d == "*" || d == "/" || d == "-")
            {
                return true;
            }
            else
            {
                return false;
            }
        };
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for( string token : tokens)
        {
            if(isOPerator(token))
            {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (token == "+")
                {
                    st.push(a+b);
                }
                else if (token == "*")
                {
                    st.push(a*b);
                }
                else if (token == "/")
                {
                    st.push(a/b);
                }
                else if (token == "-")
                {
                    st.push(a-b);
                }
            }
            else
            {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
