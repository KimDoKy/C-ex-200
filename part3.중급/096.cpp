// 텍스트를 파일에 쓰기 (ofstream)
// 텍스트 파일을 생성

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const string file_name = "093.txt";

    ofstream file_out;
    // ifstream::out 는 쓰기모드
    file_out.open(file_name, ifstream::out);

    file_out << "고구려 유리왕과 황조기" << endl;
    file_out << "사랑의 아픔을 승화한 시" << endl;

    file_out.close();

    ifstream file_in;
    file_in.open(file_name, ifstream::in);

    string line;

    while (getline(file_in, line))
        cout << line << endl;

    file_in.close();

    return 0;
}
