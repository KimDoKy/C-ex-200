// 객체지향 캡슐화 이해하기 (Encapsulation)
// 객체지향 언어의 특징 중 하나인 캡슐화
// 캡슐화: 용도가 비슷한 기능들은 한 곳에 보아 사용하는 것

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
    KingInfo() { };

public:
    void SetValue(const string name, const string son, int ascend)
    {
        name_ = name;
        son_ = son;
        ascend_ = ascend;
    }

    string GetNameSon() const
    {
        return name_ + "의 아들 " + son_;
    }

    string GetNameAscend() const
    {
        return name_ + " 즉위 연도 " + ascend_ + "년";
    }

private:
    string name_;
    string son_;
    string ascend_;
};

int main()
{
    KingInfo king_info;
    king_info.SetValue("선조", "광해군", 1567);

    cout << king_info.GetNameSon() << endl;
    cout << king_info.GetNameAscend() << endl;

    return 0;
}
