#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string str)
{
    stack<char>st;

    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == '(' ||  str[i] == '{' || str[i] == '[')
            st.push(str[i]);
        
        else {
            if(st.empty())
                return false;
            else {
                if(str[i] == ')' && st.top() != '(')
                    return false;
                if(str[i] == '}' && st.top() != '{')
                    return false;
                if(str[i] == ']' && st.top() != '[')
                    return false;

                st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    string str = "{{}}";
    if(isValidParenthesis(str) == true)
        cout << "Valid Parenthesis";
    else
        cout << "Not Valid Parenthesis";
    
    return 0;
}   
