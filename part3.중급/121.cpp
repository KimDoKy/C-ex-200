// 함수 오버라이딩 이해하기
// 상속 관계에서 발생하는 함수 오버라이딩
// 함수를 다시 정의한다는 의미로 오버라이딩이 이루어지면 부모 클래스의 함수는 무시

#include <iostream>

using namespace std;

class Base
{
public:
    void Display() { cout << "고려 16대왕 예종" << endl; }
};

class Derived : Base
{
public:
    void Display() { cout << "고려 17대왕 인종" << endl; }
};

int main()
{
    Derived child;
    child.Display();

    return 0;
}
