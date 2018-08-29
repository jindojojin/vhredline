#ifndef WORKINGSTATUS_H
#define WORKINGSTATUS_H

#include <QWidget>

namespace Ui {
    class WorkingStatus;
}

class WorkingStatus : public QWidget
{
    Q_OBJECT

public:
    explicit WorkingStatus(QWidget *parent = 0);
    ~WorkingStatus();

private:
    Ui::WorkingStatus *ui;
};

#endif // WORKINGSTATUS_H
