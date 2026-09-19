class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary(n);
        string s=binary.to_string();
        reverse(s.begin(),s.end());
        return stoi(s,nullptr,2);
    }
};