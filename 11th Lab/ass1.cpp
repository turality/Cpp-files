#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;
int main()
{
    stack<int> s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);
    stack<int> s1;
    s1 = s;
    cout << "Size of the stack:" << s.size() << endl;
    cout << "Stack one:" << endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout << "Stack two: "<< endl;
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    exit(0);
}