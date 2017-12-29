#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GameUi.h"
#include <iostream>

class GameUi : public QMainWindow
{
	Q_OBJECT

public:
	GameUi(QWidget *parent = Q_NULLPTR);

	// �������
	void GameTitle();

	// ��Ϸ����
	void GameMap();

	// ����ҳ��
	void GameOver();
private:
	Ui::GameUiClass ui;
};
