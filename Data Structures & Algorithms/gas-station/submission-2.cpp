class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sz = gas.size();
        int deficit = 0;
        int start = 0; int tank = 0;
        for(int i = 0; i < sz; i++)
        {
            int diff = gas[i] - cost[i];
            deficit = deficit + diff;
            tank = tank + diff;
            if(tank < 0)
            {
                start = i+1;
                tank = 0;
            }

        }

        if(deficit >= 0)
        {
            return start;
        }
        else
        {
            return -1;
        }
        

    }
};
