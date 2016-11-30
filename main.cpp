#include "pollstation.h"
#include <QApplication>
#include "app/IVotechain_PollStation.h"
#include "app/Votechain_PollStation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PollStation w;
    IVotechain_PollStation *s;
    w.show();

    s = new Votechain_PollStation();
    return a.exec();
}
