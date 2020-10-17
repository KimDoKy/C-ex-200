// typedef 사용하기
// 사용자가 원하는 형태로 정의하여 사용할 수 있음
// 원하는 형태로 별명을 지어 편리하게 사용하는 것이 목적

#include <iostream>

using namespace std;

enum State
{
    kOpen,
    kClose,
    kDisconnect
};

typedef State state_;

struct Status
{
    state_ machine1;
    state_ machine2;
} status_;

int main()
{
    status_.machine1 = kOpen;
    status_.machine2 = kDisconnect;

    cout << "상태: " << status_.machine1 << endl;
    cout << "상태: " << status_.machine2 << endl;

    return 0;
}
