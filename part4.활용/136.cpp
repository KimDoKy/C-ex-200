// atomic 사용하기 (init, store, load)
// 멀티스레드 환경에서 활용할 수 있는 atomic
// atomic 으로 인터락 등을 활용해 동기화 객체를 사용하기 위한 기법들을 생략하면 더 쉽게 프로그래밍할 수 있음

// atomic으로 int 산술연산하는 방법

#include <iostream>
#include <atomic>

using namespace std;

int main()
{
    // 일반 정수형 변수처럼 = 연산자를 이용해 값을 할당
    //atomic<int> data1 = 10;
    atomic<int> data1(10);

    // ATOMIC 관련 지시문을 사용할 수도 있음
    atomic<int> data2 = ATOMIC_VAR_INIT(20);
    // atomic<int> 와 atomic_int는 똑같은 의미
    atomic_int data3 = ATOMIC_VAR_INIT(30);

    cout << data1 << ", " << data2 << ", " << data3 << endl;

    // store는 = 연산자와 똑같은 의미
    data1.store(11);
    data2.store(data3.load());

    // store와 atomic_store는 똑같은 의미
    // 첫 번째 인자는 값을 저장할 변수 이름
    // 두 번째 인자로 값을 받음
    atomic_store(&data3, 50);

    cout << data1 << ", " << data2 << ", " << data3 << endl;

    return 0;
}
