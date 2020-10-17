// tuple 사용하기 (비교연산)

// #include "stdafx.h"
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
    tuple<int, string> data1(1, "def");
    tuple<int, string> data2(1, "abc");

    if (data1 > data2)
        cout << "data1 > data2" << endl;
    else
        cout << "data1 < data2" << endl;

    tuple<double, string> data3(1.0, "def");
    tuple<double, string, int> data4(2.0, "abc", 3);

    // 형태가 다른 튜플은 에러 발생
    /*
    if (data3 == data4)
        cout << "data1 > data2" << endl;
    else
        cout << "data1 < data2" << endl;
    */

    return 0;
}
