#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float disc;
    disc=(b*b-4*a*c);
    cout<<disc<<endl;
    if (disc<0)
    {
        cout<<"no roots"<<endl;
    }
    else if (disc==0)
    {
        float x;
        x=(-b+sqrt(disc))/(2*a);
        cout<<"the only real root is:"<<x<<endl;
    }
    else{
        float x1=(-b+sqrt(disc))/(2*a);
        float x2=(-b-sqrt(disc))/(2*a);
        cout<<"first root:"<<x1<<endl;
        cout<<"second root:"<<x2<<endl;
    }
}