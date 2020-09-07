// 콘솔창에 출력하기
// (cout, cin, endl)
// 콘솔창에 원하는 문자열을 출력
// cout는 출력, cin은 입력, endl은 개행

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cin >> number;

    cout << "입력한 숫자는 " << number << "입니다." << endl;

    return 0;
}
