#include <iostream>
#include <stack>
using namespace std;
bool isPalindrom(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++)
    {
        if(st.top()!=s[i])
        {
            return false;
        }
        st.pop();
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(isPalindrom(s))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}