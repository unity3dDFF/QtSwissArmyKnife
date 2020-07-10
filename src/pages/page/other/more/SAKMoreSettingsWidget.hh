﻿/*
 * Copyright 2018-2020 Qter(qsak@foxmail.com). All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project(https://www.qsak.pro). The project is an open source project. You can
 * get the source of the project from: "https://github.com/qsak/QtSwissArmyKnife"
 * or "https://gitee.com/qsak/QtSwissArmyKnife". Also, you can join in the QQ
 * group which number is 952218522 to have a communication.
 */
#ifndef SAKMOREOTHERSETTINGS_HH
#define SAKMOREOTHERSETTINGS_HH

#include <QWidget>
#include <QTabWidget>

namespace Ui {
    class SAKMoreSettingsWidget;
}

class SAKDebugPage;
class SAKProtocolAnalyzerWidget;
class SAKMoreSettingsWidget:public QWidget
{
    Q_OBJECT
public:
    SAKMoreSettingsWidget(SAKDebugPage *debugPage, QWidget *parent = Q_NULLPTR);
    ~SAKMoreSettingsWidget();
private:
    SAKDebugPage *mDebugPage;
private:
    Ui::SAKMoreSettingsWidget *mUi;
    QTabWidget *mTabWidget;
};

#endif
