class Solution {
public:
vector<string> ans;
unordered_map<char,string> m={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
void back(string digits,int index,string curr)
{
    if(curr.size()==digits.size())
    {
        ans.push_back(curr);
        return;
    }
    for(char ch:m[digits[index]])
    {
        back(digits,index+1,curr+ch);
    }
}
    vector<string> letterCombinations(string digits) {
        back(digits,0,"");
        return ans;
    }
};