// 함수 오버로딩 이해하기
// 이름은 같지만 인자와 리턴값이 다른 함수 오버로딩 사용
// 오버로딩의 특징은 함수 이름이 같고, 인자 종류와 개수가 다르면, 리턴값도 다름

#include <iostream>
#include <string>

using namespace std;

int Plus(int arg1, int arg2)
{
    return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3)
{
    return arg1 + arg2 + arg3;
}

int main()
{
    int number1 = Plus(2, 4);
    double number2 = Plus(3.4, 5.7, 8.4);

    cout << "number1 : " << number1 << endl;
    cout << "number2 : " << number2 << endl;

    return 0;
}
