class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank=0;
        int total=0;
        int index=0;
        for(int i=0;i<gas.size();i++){
            int gain=gas[i]-cost[i];
            total+=gain;
            tank+=gain;
            if(tank<0){
                index=i+1;
                tank=0;
            }
        }
        return (total<0) ? -1:index;
    }
};