class Solution {
public:
int count=0;
void back(vector<int>& nums,int target,int index,int sum)
{
    if(index==nums.size())
    {
        if(sum==target){
        count++;
        }
        return;
    }
            back(nums,target,index+1,sum+nums[index]);
            back(nums,target,index+1,sum-nums[index]);
        
}
    int findTargetSumWays(vector<int>& nums, int target) {
        back(nums,target,0,0);
        return count;
    }
};