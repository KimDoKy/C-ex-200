// 파일 크기 확인하기 (file_size)

#include <iostream>
#include <experimental/filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("093.txt");

	cout << "파일 크기: " << size << "바이트" << endl;

	return 0;
}
