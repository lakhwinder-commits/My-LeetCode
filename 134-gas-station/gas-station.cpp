class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int togas=0,tocost=0,currgas=0;
        int start=0;
        for (int i = 0; i < n; i++) {
            togas+=gas[i];
            tocost+=cost[i];
            currgas+=(gas[i]-cost[i]);
            if(currgas<0){
                currgas=0;
                start=i+1;
            }
        }
            return togas<tocost ? -1 : start;


    }
};