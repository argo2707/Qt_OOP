#ifndef SING_H
#define SING_H

#include <QWidget>
#include<mainw.h>

namespace Ui {
class Sing;
}

class Sing : public QWidget
{
    Q_OBJECT

public:
    explicit Sing(QWidget *parent = nullptr);
    ~Sing();

private slots:
    void on_pushButton_clicked();

private:
    MainW* start;
    Ui::Sing *ui;

};

#endif // SING_H
