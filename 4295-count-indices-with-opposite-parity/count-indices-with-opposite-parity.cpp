class Solution {
public:
int even=0;
int odd=0;
vector<int> ans;
    vector<int> countOppositeParity(vector<int>& nums) {
        for(int i:nums)
        {
            if(i%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        for(int i:nums)
        {
            if(i%2==0)
            {
                even--;
                ans.push_back(odd);
            }
            else
            {
                odd--;
                ans.push_back(even);
            }
        }
        return ans;
        
    }
};