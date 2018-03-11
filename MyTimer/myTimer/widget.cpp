#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDateTime>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget), id1(startTimer(1000)), id2(startTimer(2000)), id3(startTimer(10000))
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::timerUpdate);
    timer->start(1000);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == id1){
        ui->label->setText(tr("%1").arg(qrand() % 10));
    }
    else if(event->timerId() == id2){
        ui->label_2->setText(tr("Hello World!"));
    }
    else{
        //qApp->quit();
    }
}

void Widget::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->lineEdit->setText(str);
    ui->lineEdit->move(qrand() % 300, qrand() % 300);
}
