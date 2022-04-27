#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    FILE *ptr;
    char data[200] = "A computer is a digital electronic machine that can be programmed to carry out sequences of arithmetic or logical operations (computation) automatically";
    char c;
    ptr = fopen("test.txt", "w");
    fputs(data, ptr);
    fclose(ptr);

    ptr = fopen("test.txt", "r");
    char sent[200];
    while (fgets(sent, 200, ptr) != NULL)
    {
        continue;
    }
    fclose(ptr);

    cout << sent << endl;

    queue<char> q1;
    int n = strlen(sent);
    for (int i = 0; i < n; i++)
    {
        q1.push(sent[i]);
    }
    cout << q1.size() << endl;

    FILE *ptr1;
    ptr1 = fopen("test1.txt", "w");
    while (!q1.empty())
    {
        c = q1.front();
        fputc(toupper(c), ptr1);
        q1.pop();
    }
    fclose(ptr1);
}