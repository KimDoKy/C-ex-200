// 동적 메모리 할당 (new, delete)
// new와 delete는 한 쌍임
// 사용한 메모리는 반드시 반환해야 함

#include <iostream>

using namespace std;

class Info
{
public:
    Info() {
        data = new int;
        data_arr = new int[3];
    }
    ~Info() {
        delete data;
        delete[] data_arr;
    }

    void Dispose()
    {
        delete data;
        delete[] data_arr;
    }
    // ~Info()와 Dispose()는 같은 기능

private:
    int* data;
    int *data_arr;
    // 동적 메모리 할당을 하면 변수 자체는 스택에 있지만
    // 메모리는 힙에 있기 때문에 *를 붙여야 함
};

int main()
{
    Info *info = new Info();

    info->Dispose();
    delete info;
    // Error 발생.
    // 이미 해제된 메모리 영역을 다시 해제하려 하기 때문에 에러 발생

    return 0;
}

/*
메모리 영역은 크게 스택, 힙, 비아너리 영역으로 분리됨
1. 스택: 변수처럼 컴파일 시점에 크기가 결정되는 요소들이 할당됨
2. 바이너리: static, 전역 요소들이 할당되는 영역
3. 힙: 동적으로 메모리가 할당되는 곳으로 지역변수 등 프로그램 실행 상황에 맞춰 메모리 할당/해제되는 공간

int *tmp를 선언하고 다른 곳에서 tmp = new int; 라 선언하면 스택의 tmp는 힙영역에 할당된 곳을 바라본다.
함수 내부에 선언된 지역 변수라면 힙에 할당되었다가 힙에서 메모리가 해제 됨
*/
