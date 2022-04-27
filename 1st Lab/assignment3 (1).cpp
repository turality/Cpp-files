#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int A[10]={1,4,3,6,7,3,2,1,6,4};
    cout<<"before sorting:"<<endl;
    for (int j=0;j<10;j++)
    {
        cout<<A[j]<<endl;
    }

    for (int i=0;i<10;i++)
    {
        for (int k=i;k<10;k++)
        {
            if (A[i]<A[k])
            {
                int c=A[i];
                A[i]=A[k];
                A[k]=c;
            }
        }
    }
    cout<<"after sorting:"<<endl;
    for (int j=0;j<10;j++)
    {
        cout<<A[j]<<endl;
    }

}