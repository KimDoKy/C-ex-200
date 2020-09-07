// 사칙연산 축약하기(+, -, *, /)
// 사칙연산을 축약하여 간편하게 사용
// x = x + 2 를 x += 2 로 축약

#include <iostream>

using namespace std;

int main()
{
    int two = 2;
    int eight = 8;
    int sum1 = 2;
    int sum2 = 2;

    sum1 = sum1 + two;
    sum2 += eight;

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    sum1 = 2;
    sum2 = 8;
    sum1 += two;
    sum2 /= eight;

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;
}
