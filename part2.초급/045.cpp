// 절대값과 제곱수 구하기 (abs, fabs, pow)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "== 절대값 구하기 ==" << endl;
    cout << "-10의 절대값 " << abs(-10) << endl;
    cout << "-5.72의 절대값 " << abs(-5.72) << endl;

    cout << "== 제곱수 구하기 ==" << endl;
    cout << "2^2 : " << pow(2, 2) << endl;
    cout << "3^4 : " << pow(3, 4) << endl;
    cout << "4^6 : " << pow(4, 6) << endl;
    cout << "8^3 : " << pow(8, 3) << endl;

    return 0;
}
