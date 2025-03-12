#include<iostream>
#include<stack>
using namespace std;
bool chkParatheses(string s)
{
    stack<char> st;
    for(int i=0 ; i<s.size();i++)
{
     if(s[i] == '(' || s[i] =='[' || s[i] == '{')
     {
           st.push(s[i]);
     }
     else
     {
        if(st.empty()) return false;
        else
        {
         char c = st.top();
         st.pop();
         if(s[i] == ')' && c == '(' || s[i] == '}' && c == '{' ||  s[i] == ']' && c == '[' ) continue;
         else return false;
        }
     }
}
return st.empty();
}
int main()
{
    string s = "([{}])";
   bool res = chkParatheses(s);
   if(res) cout<<"String is Paratheses";
   else cout<<"String is not Paranthese";
}