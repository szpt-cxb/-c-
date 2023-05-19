#include <iostream>
using namespace std;

int main()
{ 
    int a = 10;
    int b = 20;
    int * const p = &a; //定义一个指针变量
    *p = 20;
    p = &b;
    cout << "指针的大小:" << sizeof(p);
}

