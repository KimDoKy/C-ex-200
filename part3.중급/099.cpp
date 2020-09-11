// 하위 폴더 목록 확인하기 (directory_iterator)
// 특정 폴더에 존재하는 하위 폴더 조회 방법

#include <iostream>
#include <experimental/filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	string directory = "/Users/";

	for (auto& name : fs::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}

// 일단 맥에서는 실패
