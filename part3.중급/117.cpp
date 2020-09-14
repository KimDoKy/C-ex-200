// 클래스 상속 3. Not-A 관계
// 현실, 논리적으로 옳지 않은 관계를 이해
// 프로그래밍 설계 단계에서는 Not-A 관계가 발생하지 않도록 구성하는 것이 중요
// '옳지 않다'는 것은 한 클래스, 또는 한 파일, 또는 한 계층 구조 안에 전혀 어울리지 않는 클래스나 소스 묶음이 있음을 의미
// MaleMonkey는 상속의 주체가 되는 부모 클래스와 어울리지 않기 때문에
// 해당 부분을 이동하거나 삭제하는 등의 재검토가 필요

#include <iostream>

using namespace std;

class Landload
{
public:
    void IamLandload() { cout << "건물주입니다." << endl; }
};

class MaleMonkey
{
public:
    void Favorite() { cout << "Favorite: Famale Monkey" << endl; }
};

class Nation : public Landload
{
public:
    void Who()
    {
        cout << "안녕하세요. ";
        IamLandload();
    }
};

int main()
{
    Nation nation;
    nation.Who();

    return 0;
}
