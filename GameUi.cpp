#include "stdafx.h"
#include "GameUi.h"
#include <Windows.h>

// 窗口宽度
int windowsWidth = 800;

//窗口高度
int windowsHight = 500;

//开始创建UI
void GameUi::start()
{
	SetConsoleTitle(TEXT("贪吃蛇"));
}