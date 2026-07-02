class Solution {
public:
vector<string> ans;
void back(string s,string res,int index)
{
    if(index==s.size())
    {
        ans.push_back(res);
        return;
    }
    if(isalpha(s[index]))
    {
        back(s,res+(char)tolower(s[index]),index+1);
        back(s,res+(char)toupper(s[index]),index+1);

    }
    else
    {
        back(s,res+s[index],index+1);
    }
}
    vector<string> letterCasePermutation(string s) {
        string res="";
        back(s,res,0);
        return ans;
    }
};