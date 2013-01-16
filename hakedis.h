#ifndef HAKEDIS_H
#define HAKEDIS_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class Hakedis;
}

class Hakedis : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Hakedis(QWidget *parent = 0);
    ~Hakedis();
    
private:
    Ui::Hakedis *ui;
};

#endif // HAKEDIS_H
