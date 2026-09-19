class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        
        arr2.push_back(nums[1]);
        
        for(int i=2;i<nums.size();i++)
        {
            int n1=arr1.size();
            int n2=arr2.size();
            if(arr2[n2-1]<arr1[n1-1])
            {
                arr1.push_back(nums[i]);
            }
            else
            {
                arr2.push_back(nums[i]);
            }
        }
        for(int i:arr2)
        {
            arr1.push_back(i);
        }
        return arr1;
    }
};