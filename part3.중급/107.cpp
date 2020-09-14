// 클래스 default 생성자 (default)
// 멤버 변수를 초기화하여 사용할 수 있는 default 클래스 생성자 사용
// default 키워드는 클래스 내부 변수를 모두 초기화한다는 의미
// 특별한 값으로 초기화할 필요가 없을때는 사용

#include <iostream>
#include <string>

using namespace std;

class Class1
{
public:
    Class1() = default;

public:
    int number;
    double prime;
    string word;
};

class Class2
{
public:
    Class2() { };

public:
    int number;
    double prime;
    string word;
};

int main()
{
    Class1 *class1 = new Class1();
    cout << "Class1: " << class1->number << ", " << class1-> prime << ", " << class1->word << endl;

    Class2 *class2 = new Class2();
    cout << "Class2: " << class2->number << ", " << class2->prime << ", " << class2->word << endl;

    return 0;
}
