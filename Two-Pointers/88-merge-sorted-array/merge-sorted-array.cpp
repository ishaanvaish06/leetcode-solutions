class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> x;
        int n1=0;
        int n2=0;
        while(n1<m && n2<n)
        {
            if(nums1[n1]<nums2[n2])
            {
                x.push_back(nums1[n1]);
                n1++;
            }
            else
            {
                x.push_back(nums2[n2]);
                n2++;
            }
        }
        if(n1!=m && n2==n)
        {
            for(int i=n1;i<m;i++)
            {
                x.push_back(nums1[i]);
            }
        }
        else if(n1==m && n2!=n)
        {
            for(int i=n2;i<n;i++)
            {
                x.push_back(nums2[i]);
            }
        }

        nums1=x;
    }
};