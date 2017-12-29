#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GameUi.h"
#include <iostream>

class GameUi : public QMainWindow
{
	Q_OBJECT

public:
	GameUi(QWidget *parent = Q_NULLPTR);

	// 标题界面
	void GameTitle();

	// 游戏界面
	void GameMap();

	// 结束页面
	void GameOver();
private:
	Ui::GameUiClass ui;
};
