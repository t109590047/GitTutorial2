﻿// GitTutorial.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

//#include <iostream>

//int main()
//{
//    std::cout << "Hello World!\n";
//}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

bool Guess(int number) {
	static int target = -1;

	srand(time(NULL));
	if (target == -1) {
		target = rand() % 100 + 1;
	}

	if (number == target)
	{
		std::cout <<
			"Correct !!"; target = -1;
		return true;
	}
	else if (number > target) std::cout << "Smaller" << std::endl;
	else if (number < target) std::cout << "Bigger" << std::endl;
	return false;

	if (number > target) {
		std::cout << "Smaller" << std::endl;
		return false;
	}
	else if (number < target) {
		std::cout << "Bigger" << std::endl;
		return false;
	}
	return true;
>>>>>>> 5a54b6f431a8aa181ca61462aa495d2c18c93748
}

int main()
{
	int guess;
	do {
		std::cout << "Choose a number between 1 - 100:";
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}