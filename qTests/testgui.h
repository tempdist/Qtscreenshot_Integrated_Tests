#ifndef TESTGUI_H
#define TESTGUI_H

#include <QObject>
#include "../screenshot.h"

class TestGui : public QObject
{
    Q_OBJECT

private slots:
    void testLabel();
    void testSpinBox();
};

#endif // MATHUTILSTESTER_H