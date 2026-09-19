class Solution {
public:
int count=0;
    int countDigitOccurrences(vector<int>& nums, int digit) {
        for(int i:nums)
        {
            if(i==0 && digit==0)
            {
                count++;
            }
            else
            {
                while(i>0)
                {
                    int x=i%10;
                    if(x==digit)
                    {
                        count++;
                    }
                    i=i/10;
                }
            }
        }
        return count;
    }
};