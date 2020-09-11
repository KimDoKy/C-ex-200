// 파일 복사, 삭제하기 (copy, remove)

#include <iostream>
#include <experimental/filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::copy("093.txt", "(복사)093.txt");
	fs::remove("(복사)093.txt");

	return 0;
}
