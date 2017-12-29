/********************************************************************************
** Form generated from reading UI file 'GameUi.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEUI_H
#define UI_GAMEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameUiClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameUiClass)
    {
        if (GameUiClass->objectName().isEmpty())
            GameUiClass->setObjectName(QStringLiteral("GameUiClass"));
        GameUiClass->resize(600, 400);
        menuBar = new QMenuBar(GameUiClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GameUiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameUiClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameUiClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GameUiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GameUiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GameUiClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameUiClass->setStatusBar(statusBar);

        retranslateUi(GameUiClass);

        QMetaObject::connectSlotsByName(GameUiClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameUiClass)
    {
        GameUiClass->setWindowTitle(QApplication::translate("GameUiClass", "GameUi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameUiClass: public Ui_GameUiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEUI_H
