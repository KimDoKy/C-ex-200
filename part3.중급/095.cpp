// 파일 내용을 모두 읽기 (stringstream>
// 파일 내용을 모두 읽어 한꺼번에 출력하는 방법

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // 파일 모드를 생략하면 ifstream::in 으로 설정됨
    ifstream ifs("093.txt");

    stringstream ss;

    // 파일의 전체 텍스트 내용을 stringstream에 저장
    ss << ifs.rdbuf();
    ifs.close();

    string read = "";

    cout << "== !ss.eof ==" << endl;
    while (!ss.eof())
    {
        ss >> read;
        cout << read << " ";
    }

    cout << endl << "== !ss.str() ==" << endl;
    read = ss.str();

    cout << endl << read << endl;

    return 0;
}
