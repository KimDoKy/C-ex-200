// tuple 사용하기 (tie)
// 튜플에 담간 자료를 다른 변수에 복사

#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
    typedef tuple<string, int, double> Data;

    Data data1("문자열", 10, 1.2);

    string my_str = "";
    int my_int = 0;

    tie(my_str, my_int, ignore) = data1;

    cout << my_str << ", " << my_int << endl;

    return 0;
}
