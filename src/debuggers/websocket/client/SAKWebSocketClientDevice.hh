﻿/*
 * Copyright 2020-2021 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#ifndef SAKWEBSOCKETCLIENTDEVICE_HH
#define SAKWEBSOCKETCLIENTDEVICE_HH

#include <QWebSocket>
#include <QAbstractSocket>

#include "SAKDebuggerDevice.hh"

class SAKWebSocketClientDebugger;
class SAKWebSocketClientController;
/// @brief Web socket client.
class SAKWebSocketClientDevice:public SAKDebuggerDevice
{
    Q_OBJECT
public:
    SAKWebSocketClientDevice(SAKWebSocketClientDebugger *mDebugPage, QObject *parent = Q_NULLPTR);
private:
    bool initialize(QString &errorString) final;
    bool open(QString &errorString) final;
    QByteArray read() final;
    QByteArray write(QByteArray bytes) final;
    bool checkSomething(QString &errorString) final;
    void close() final;
    void free() final;
private:
    QWebSocket *mWebSocket;
    SAKWebSocketClientDebugger *mDebugPage;
    SAKWebSocketClientController *mController;
signals:
    void clientInfoChanged(QString info);
};

#endif
