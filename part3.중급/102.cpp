// 파일 존재 여부 확인하기 (good)

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("093.txt");

	if (stream.good() == true)
		cout << "파일이 존재합니다." << endl;
	else
		cout << "파일이 없습니다." << endl;

	stream.close();

	return 0;
}
