// 가변인자 템플릿 사용하기 (typename... T)
// 인자의 개수를 정해놓지 않아도 호출 가능한 함수의 사용 방법
// 인자 개수가 정해지지 않았기 때문에 가변인자라고 함

#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
    cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value)
{
    cout << no << ", 오류값 " << value << endl;
}

// ... 은 인자의 개수가 정해지지 않았다는 뜻
template<typename... T>
void PrintLog(T... arg0)
{
    // 추가 작업
    Type1(arg0...);
    // Type2(arg0...);
}

int main()
{
    // 가변인자 템플릿을 사용할때는 <> 괄호 안에 자료형 타입을 정의해야 함
    PrintLog<string, int, double>("Warning", 100, 22.5);
    // PrintLog<int, double>(101, 55.6);

    return 0;
}
