// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QApplication>
#include <QScreen>
//#include <QTest>
//#include "qTests/testgui.h"

#include "screenshot.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Screenshot screenshot;
    screenshot.move(screenshot.screen()->availableGeometry().topLeft() + QPoint(20, 20));
    screenshot.show();

//    TestGui test1;
//    QTest::qExec(&test1);

    return app.exec();

}
