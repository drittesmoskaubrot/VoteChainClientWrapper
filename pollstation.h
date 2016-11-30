#ifndef POLLSTATION_H
#define POLLSTATION_H

#include <QMainWindow>

namespace Ui {
class PollStation;
}

class PollStation : public QMainWindow
{
    Q_OBJECT

public:
    explicit PollStation(QWidget *parent = 0);
    ~PollStation();

private:
    Ui::PollStation *ui;
};

#endif // POLLSTATION_H
