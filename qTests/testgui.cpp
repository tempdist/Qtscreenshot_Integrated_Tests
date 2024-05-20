#include <QtWidgets>
#include <QTest>
#include "testgui.h"


class TestGui: public QObject
{
    Q_OBJECT

private slots:
    void testLabel();
    void testSpinBox();
};

void TestGui::testLabel()
{
    QLineEdit lineEdit;

    QTest::keyClicks(&lineEdit, "hello world");

    QCOMPARE(lineEdit.text(), QString("hello world"));
}

void TestGui::testSpinBox()
{
    QLineEdit lineEdit;

    QTest::keyClicks(&lineEdit, "hello world");

    QCOMPARE(lineEdit.text(), QString("hello world"));
}

QTEST_MAIN(TestGui)
#include "testgui.moc"