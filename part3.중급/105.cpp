// 클래스 생성자 정의하기
// 객체가 만들어지는 시점에 호출되는 함수 생성자의 사용 방법
// 클래스 라이프 사이클은 생성, 소멸, 대입 3단계이다.

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "조선 예종 이황";
	};

public:
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
	cout << king_info.GetName() << endl;
	return 0;
}
