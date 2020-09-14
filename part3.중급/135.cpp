// Thread 사용하기 (detach)
// 메인 스레드에서 분리된 제어할 수 없는 스레드의 사용 방법
// detach는 메인 스레드에서 분리하여 join 등 제어를 막음

// detach는 메인 스레드에서 해당 스레드를 분리
// detach로 분리된 스레드는 제어할 수 없기 때문에 이 스레드가 언제 어떻게 종료될지 예상하기 어려움
//
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
    this_thread::sleep_for(chrono::seconds(sec));
    cout << sec << "초 대기" << endl;
};

int main()
{
    thread sleep1(Pause, 3);
    thread sleep2(Pause, 5);
    thread sleep3(Pause, 4);

    sleep1.detach();
    sleep2.detach();
    sleep3.detach();

    getchar();

    return 0;
}
