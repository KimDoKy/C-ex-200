// 객체지향 상속 이해하기 (Inheritance)
// 프로그램 유연성을 확보하는 객체지향 상속의 개념
// 겹치는 범위만 모아 별도의 클래스로 만들고 이 클래스를 상속받아 사용하면
// 코드 양도 줄고 클래스의 유연함을 가져올 수 있음

#include <iostream>
#include <string>

using namespace std;

class Info
{
public:
    Info() { };

public:
    string name_;
    int year_;
};

class GoodKing : public Info
{
public:
    GoodKing(const string country) : country_(country) {};
    void Display()
    {
        cout << country_ << " " << name_ << "즉위 연도 BC : " << year_ << endl;
    }

private:
    string country_;
};

class BadKing : public Info
{
public:
    BadKing(const string country) : country_(country) {};
    void Display()
    {
        cout << country_ << " " << name_ << " 즉위 연도 : " << year_ << endl;
    }

private:
    string country_;
};

int main()
{
    GoodKing king1("고조선");
    king1.name_ = "단군왕검";
    king1.year_ = 2333;

    BadKing king2("고려");
    king2.name_ = "충혜왕";
    king2.year_ = 1330;

    king1.Display();
    king2.Display();

    return 0;
}
