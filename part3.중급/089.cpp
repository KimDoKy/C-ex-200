// 구조체를 함수 인자로 사용하기
// 구조체의 주소를 전달하여 사용할 수 있음

#include <iostream>
#include <string>

using namespace std;

struct Princess
{
    string name;
    string father;
    string birthday;
} jungso;

void Print(Princess *who)
{
    cout << "jungso.name = " << who->name << endl;
    cout << "jungso.father = " << who->father << endl;
    cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
    jungso.name = "정소공주";
    jungso.father = "조선 태종";
    jungso.birthday = "1412년";

    Print(&jungso);

    return 0;
}
