class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> ret(0,k);
        //store it in a map <key = element, value = frequency>
        //map[key] = value;
        for (int i = 0;i<nums.size() ;i++)
        {
            freq[nums[i]]++;
        }

        //heap 
        for(auto it : freq)
        {
            pq.push({it.second , it.first});
            if(pq.size() > k)
                {pq.pop();}
        }

        while(!pq.empty())
        {
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
