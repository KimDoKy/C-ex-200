// atomic 사용하기 (compare_exchange_weak)
// atomic 값을 조건부로 교체하는 exchange_weak 함수
// 값을 교체하지 못할 경우 인자로 전달되는 변수에 atomic 값이 할당됨

#include <iostream>
#include <atomic>

using namespace std;

int main()
{
    atomic<int> data1(10);

    int number = 20;

    // compare_exchange_weak는 값 교체가 이루어지면 true
    bool is_exchange = data1.compare_exchange_weak(number, 30);

    cout << boolalpha;
    cout << "data1: " << data1 << ", number: " << number << ", " << is_exchange << endl;

    atomic<int> data2 = ATOMIC_VAR_INIT(10);

    is_exchange = atomic_compare_exchange_weak(&data2, &number, 40);

    cout << "data2: " << data2 << ", number: " << number << ", " << is_exchange << endl;

    return 0;
}
