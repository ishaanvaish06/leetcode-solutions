class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==0) return true;
        for(char ch:s)
        {
            if(ch=='(' || ch=='[' || ch=='{') st.push(ch);
            else{
                if(st.empty()) return false;
                else if(!st.empty() && ((ch==')' && st.top()=='(') || (ch==']' && st.top()=='[') || (ch=='}' && st.top()=='{')))
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};