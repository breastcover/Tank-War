// World of Tank War.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <time.h>

#include "Graphic.h"
#include "MainTank.h"

using namespace std;

int main()
{
	Graphic::Create();

	MainTank mainTank;

	bool loop = true;
	bool skip = false;
	while (loop)
	{
		if (_kbhit())
		{
			int key = _getch();
			switch (key)
			{
			case 72:
				mainTank.SetDir(Dir::UP);
				break;
			case 80:
				mainTank.SetDir(Dir::DOWN);
				break;
			case 75:
				mainTank.SetDir(Dir::LEFT);
				break;
			case 77:
				mainTank.SetDir(Dir::RIGHT);

			case 224:
				break;

			case 27:
				loop = false;
				break;
			case 32:
				break;

			case 13:
				if (skip)
					skip = false;
				else
					skip = true;
				break;
			default:
				break;
			}
		}
		if (!skip)
		{
			cleardevice();

			mainTank.Move();
			mainTank.Display();
		}
		Sleep(200);
	}

	Graphic::Destroy();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
