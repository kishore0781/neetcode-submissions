class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> nge (temperatures.size(), 0);
        for(int i = 0; i < temperatures.size();i ++)
        {
            while(!st.empty() && temperatures[st.top()] < temperatures[i])
            {
                nge[st.top()]= i - st.top();
                st.pop();
            }
            st.push(i);
        }

        return nge;
    }
};
