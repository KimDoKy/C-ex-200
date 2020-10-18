// 람다 기본 사용 방법( []() )
// 인라이닝 효과를 볼 수 있는 익명 함수 람다
// 람다를 사용하는 기본 사용 방법 4가지

// 람다 문법 [캡처 블록](파라미터) {구성 소스}
// - 캡처 블록: 람다 함수에서 참조할 변수 목록
// 캡처 블록과 파라미터는 비어 있어도 되지만, []()는 생략할 수 없음

#include <iostream>

using namespace std;

auto func1 = []() { cout << "Lambda Function"<< endl; };
auto func2 = [](int x, int y)->bool { return x < y; };  // ->bool 은 리턴타임을 의미. 생략해도 됨

int main()
{
    int x = 2;

    auto func3 = [=](int y) {  // [=] : 유효 영역의 모든 변수에 접근 가능하다는 의미
        func1();
        cout << "x < y = " << func2(x, y) << endl;
    };

    func3(4);

    auto func4 = [=](int y) { return x * x + y * y; };

    cout << "x * x + y * y = " << func4(5) << endl;

    return 0;
}
