// Thread 사용하기 (join, sleep)
// 스레드는 프로세스 내에서 실행되는 단위를 의미
// join은 스레드가 종료될 때까지 대기. sleep은 일정시간 정지

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
    this_thread::sleep_for(chrono::seconds(sec));
};

int main()
{
    thread sleep1(Pause, 3);
    thread sleep2(Pause, 4);
    thread sleep3(Pause, 5);

    sleep1.join();
    cout << "3초 대기" << endl;

    sleep2.join();
    cout << "4초 대기" << endl;

    sleep3.join();
    cout << "5초 대기" << endl;

    return 0;
}
