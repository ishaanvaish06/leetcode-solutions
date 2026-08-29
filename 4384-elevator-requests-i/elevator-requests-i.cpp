class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int count=0;
        int curr=0;
        for(int i:requests)
        {
            count+=abs(curr-i);
            curr=i;
        }
        return count;
    }
};