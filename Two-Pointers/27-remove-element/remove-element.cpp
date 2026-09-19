class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> pref(nums.size());
        if(nums.size()==0) return 0;
        pref[0]=0;
        int count=0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                count++;
            }
            else
            {
                k++;
                pref[i]=count;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i-pref[i]]=nums[i];
        }
        return k;
    }
};