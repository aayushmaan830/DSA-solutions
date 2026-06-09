class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n=nums.size();
        for(int &n:nums){
            n=abs(n);
        }
        sort(nums.begin(),nums.end());
        long long maxp=0;
        maxp=1LL*nums[n-1]*nums[n-2]*((int)1e5);
        return maxp;
    }
};