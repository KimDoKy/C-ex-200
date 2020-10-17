// decltype 사용하기
// 컴파일러가 자동으로 타입을 추론

#include <iostream>

using namespace std;

int main()
{
    auto data1 = 1;
    // data1의 자료형을 int로 유추하여 data2의 자료형을 설정
    decltype(data1) data2 = 2;

    auto data3 = 3.4;
    // int(data2), double(data3)으로 유추하고, double이 범위가 더 크기 때문에 double으로 설정
    decltype(data2 + data3) data4 = 3;

    cout << "Data1: " << data1 << ", " << typeid(data1).name() << endl;
    cout << "Data2: " << data2 << ", " << typeid(data2).name() << endl;
    cout << "Data3: " << data3 << ", " << typeid(data3).name() << endl;
    cout << "Data4: " << data4 << ", " << typeid(data4).name() << endl;

    return 0;
}
