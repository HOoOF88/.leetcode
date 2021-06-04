// PrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
using namespace std;

#include <iostream>
#include <math.h>
#include <windows.h>
void SetColor(unsigned short forecolor = 4, unsigned short backgroudcolor = 0)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); //获取缓冲区句柄
	SetConsoleTextAttribute(hCon, forecolor | backgroudcolor); //设置文本及背景色
}
int isPrime(int& i)
{
	cout.width(7);
	int j = 2;
	for (j = 2; j <= sqrt(i); j++)
	{
		switch ((i % j == 0) ? 1 : 0)//
		{
		case 1:
			return 0;//不是素数
		case 0:
			break;//素数
		}

	}
	return 1;
}
int main()
{
	SetColor(40, 30);
	std::cout << "Colored hello world for windows!\n";
	SetColor(120, 20);
	std::cout << "Colored hello world for windows!\n";
	SetColor(10, 50);
	std::cout << "Colored hello world for windows!\n";
	cout.width(12);
	int i;
	int num;
	for (i = 1; i < 30000; i++)
	{
		num = isPrime(i);
		switch (num)
		{
		case 0:
			SetColor(0, 7);
			cout << i;
			break;
		case 1:
			if (i % 6 == 5)
			{
				SetColor(0, 5);
			}
			else 
			{
				SetColor(0, 4);
			}


			cout << i;//素数
			break;
		}

	}

	getchar();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
