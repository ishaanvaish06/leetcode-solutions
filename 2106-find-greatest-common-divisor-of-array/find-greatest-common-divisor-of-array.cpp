class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxima=INT_MIN;
        int minima=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxima=max(nums[i],maxima);
            minima=min(nums[i],minima);
        }
        return gcd(maxima,minima);
    }
};