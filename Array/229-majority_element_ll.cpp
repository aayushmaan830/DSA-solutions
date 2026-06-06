class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> majority;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(auto it:count){
            if(it.second >= ((n/3)+1)){
                majority.push_back(it.first);
            }
        }
        return majority;
        
    }
};