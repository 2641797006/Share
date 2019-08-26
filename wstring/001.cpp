#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
	locale::global(locale("en_US.UTF-8"));

	wstring ws(L"宽字符串");

	for (auto x : ws)
		wcout<< x <<endl;
}

