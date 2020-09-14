// friend 클래스 사용하기 (friend)
// 한 클래스가 다른 클래스의 private, protected 영역에 접근할 수 있는 권한 지정 방법

#include <iostream>
#include <string>

using namespace std;

// Info 클래스에서 GoodKing 클래스를 friend로 설정하기 위해 전방선언
class GoodKing;
class BadKing;

class Info
{
    friend class GoodKing;

public:
    Info() { };

private:
    string achieve;
};

class GoodKing : Info
{
public:
    GoodKing() { achieve = "백제 중흥 군주 근초고왕"; };
    void Display()
    {
        cout << achieve << endl;
    }
};

class BadKing : public Info
{
public:
    BadKing() {};
    void Display()
    {
        // cout << achieve << endl; // 에러
    }
};

int main()
{
    GoodKing king1;
    king1.Display();

    BadKing king2;
    king2.Display();

    return 0;
}
