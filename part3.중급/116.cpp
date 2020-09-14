// 클래스 상속 2. Is-A 관계
// 모든 국민이 건물주가 될 수 없으며, 반대로 세입자가 될 수도 없음

#include <iostream>

using namespace std;

class Landload
{
public:
    void IamLandload() { cout << "건물주입니다." << endl; }
};

class Tenant
{
public:
    void IamTenant() { cout << "세입자입니다." << endl; }
};

class Nation : public Landload, public Tenant
{
public:
    void Who()
    {
        cout << "저는 ";

        if (is_landload == true)
            IamLandload();
        else
            IamTenant();
    }

public:
    bool is_landload;
};

int main()
{
    Nation nation;
    nation.is_landload = true;
    nation.Who();

    return 0;
}
