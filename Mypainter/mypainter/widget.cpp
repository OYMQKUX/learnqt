#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QLinearGradient linearGradient(QPointF(40, 190), QPointF(70, 190));
    linearGradient.setColorAt(0, Qt::yellow);
    linearGradient.setColorAt(0.5, Qt::red);
    linearGradient.setColorAt(1, Qt::green);
    linearGradient.setSpread(QGradient::RepeatSpread);
    QPainter painter(this);
    painter.setBrush(linearGradient);
    painter.drawRect(0, 0, 90, 40);
}
