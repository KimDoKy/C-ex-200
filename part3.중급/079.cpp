// enum 이해하기
// 상수 집합인 열거형 enum

#include <iostream>

using namespace std;

enum Status
{
    normal = 0,
    abnormal,
    disconnect = 100,
    close
};

int main()
{
    Status number = close;

    if (number == Status::normal)
        cout << "Status: normal" << endl;
    else if (number == Status::abnormal)
        cout << "Status: abnormal" << endl;
    else if (number == 101)
        cout << "Status: disconnect" << endl;
    else
        cout << "Stuats: close" << endl;

    return 0;
}
