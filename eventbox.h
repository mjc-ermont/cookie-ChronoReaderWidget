#ifndef EVENTBOX_H
#define EVENTBOX_H

#include <QtGui>
#include "timecalcs.h"

namespace Ui {
class EventBox;
}

class EventBox : public QFrame
{
    Q_OBJECT
    
    public:
        void setTime(QTime m_time);

        explicit EventBox(QString name, QString contributeurs, QTime debut, int signe, QTime fin, QString lieu, QString description);
        ~EventBox();
        void reload();

    private:
        Ui::EventBox *ui;

        QTime debut;
        int signe;
        QTime fin;

        QTime time;

    public slots:
};

#endif // EVENTBOX_H
