// 클래스 소멸자 정의하기 (~)
// 클래스 객체가 삭제될 때 메모리 해제가 이루어지는 방법
// 클래스가 사용한 메모리는 모두 해제되어 반환되는데 이것을 돕는 것이 소멸자
// delete 키워드로 소멸자 사용을 위해 힙 영역에 할당하기 위해 new를 사용
// 객체를 new로 생성하면 delete로 삭제하고 포인터는 null로 만들어야 함.

#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
    TempClass()
    {
        cout << "생성자 호출" << endl;
    }

    ~TempClass()
    {
        cout << "소멸자 호출" << endl;
    }
};

int main()
{
    TempClass *temp_class = new TempClass();

    delete temp_class;
    temp_class = nullptr;

    return 0;
}
