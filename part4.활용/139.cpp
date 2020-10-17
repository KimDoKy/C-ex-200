// atomic 사용하기 (add, sub)
// atomic 값을 증가하거나 감소하는 add, sub
// 증감 연산자를 사용해 값을 늘리거나 줄일 수 있다

#include <iostream>
#include <atomic>

using namespace std;

int main()
{
    atomic<int> data1(1);
    data1++;
    data1 += 1;
    data1.fetch_add(1);
    atomic_fetch_add(&data1, 1);

    atomic<int> data2(100);
    data2--;
    data2 -= 1;
    data2.fetch_sub(1);
    atomic_fetch_sub(&data2, 1);

    cout << "data1: " << data1 << " , data2: " << data2 << endl;

    return 0;
}

// C++ 11 표준 라이브러리에는 promise, future, async 클래스가 추가됨
// promise는 JS의 promise와 유사한 것으로 함수 호출 후 응답을 바로 기다리지 않고, 언젠지 모를 응답 시점이 되면 알아서 결과르 ㄹ반환
