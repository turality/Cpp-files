#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"enter an integer:"<<endl;
    cin>>a;
    switch (a%2)
    {
    case 0:
        cout<<"it is even number!"<<endl;
        break;
    case 1:
        cout<<"it is an odd number!"<<endl;
    default:
        break;
    }
}