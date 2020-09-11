// 클래스 정의하기 (class)
// 객체지향의 기본이라 할수 있는 클래스
// 1. public : 공개된 정보. 외부 접근 허용
// 2. protected : 제한된 정보. 해당 클래스나 서브 클래스에서만 접근 허용
// 3. private : 제한된 정보. 해당 클래스에서만 접근 허용

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	return 0;
}

