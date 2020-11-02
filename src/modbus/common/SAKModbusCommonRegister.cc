﻿/*
 * Copyright 2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#include "SAKModbusCommonRegister.hh"
#include "ui_SAKModbusCommonRegister.h"

SAKModbusCommonRegister::SAKModbusCommonRegister(QModbusDataUnit::RegisterType type, quint16 address, quint16 value, QWidget *parent)
    :QWidget(parent)
    ,mType(type)
    ,mAddress(address)
    ,mValue(value)
    ,ui(new Ui::SAKModbusCommonRegister)
{
    ui->setupUi(this);

    ui->label->setText(QString("%1").arg(QString::number(mAddress), 5, '0'));
    ui->lineEdit->setText(QString::number(mAddress));
}

SAKModbusCommonRegister::~SAKModbusCommonRegister()
{
    delete ui;
}

QModbusDataUnit::RegisterType SAKModbusCommonRegister::type()
{
    return mType;
}

quint16 SAKModbusCommonRegister::address()
{
    return mAddress;
}

quint16 SAKModbusCommonRegister::value()
{
    return mValue;
}