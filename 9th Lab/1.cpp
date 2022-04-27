#include <iostream>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
template <typename Sort>
void sort(Sort *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                Sort temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    char chararr[4] = {'a','b','c','d'};
    float myfloat[4] = {1.0,2.0,3.0,4.3};
    sort(arr,5);
    sort(chararr,4);
    sort(myfloat,4);
    cout << "int array" << endl;
    for (int i = 0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    cout << "char array" << endl;
    for (int i = 0;i<4;i++)
    {
        cout <<chararr[i] << endl;
    }
    cout << "float array" << endl;
    for (int i = 0;i<4;i++)
    {
        cout <<myfloat[i] << endl;
    }
}