class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int> st;
        vector<int> index (temperatures.size(),0);
        for (int i = 0; i < temperatures.size(); i++)
        {
            while(!st.empty() && (temperatures[st.top()] < temperatures[i]))
            {
                int idx = st.top();
                st.pop();
                index[idx] = i - idx; 
            }
            st.push(i);
        }
        return index;
    }
};
