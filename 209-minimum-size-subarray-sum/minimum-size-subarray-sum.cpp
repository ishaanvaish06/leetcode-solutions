class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int curr=0;
        int minLen=INT_MAX;
        if(nums.size()==1 && nums[0]>=target) return 1;
        while(r<nums.size())
        {
            if(target>sum)
            {
                sum=sum+nums[r];
                curr++;
                r++;
                
            }
            while(target<=sum){
                minLen=min(curr,minLen);
                sum=sum-nums[l];
                curr--;
                l++;
            }
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};