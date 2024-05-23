#include <stack>
bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<int>st;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else {
            if(st.empty())
                return false;
            else {
                if(s[i] == ')' && st.top() != '(')
                  return false;
                if(s[i] == '}' && st.top() != '{')
                  return false;
                if(s[i] == ']' && st.top() != '[')
                    return false;
                else
                    st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    s = "[()]";
    
}