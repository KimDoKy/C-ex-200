// map 삽입, 수정하기 (insert, at)
// map 컨테이너에 데이터를 삽입하고 수정하는 방법
// 자주 사용하는 컨테이너를 key, value 쌍으로 구성

#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string> &data)
{
    cout << "== Print ==" << endl;

    for (auto iter = data.begin();
            iter != data.end();
            ++iter)
        cout << iter->first << " : " << iter->second << ", ";

    cout << endl;
}

int main()
{
    map<int, string> data;
    data.insert({ 0, "첫 번째" });
    data.insert({ 1, "두 번째" });

    Print(data);

    auto ret = data.insert({ 1, "첫 번째" });

    if (ret.second == true)
        cout << "== 데이터 추가 성공 ==" << endl;
    else
        cout << "== 데이터 추가 실패 ==" << endl;

    data.at(0) = "수정1";

    Print(data);

    return 0;
}
