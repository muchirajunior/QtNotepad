#ifndef MYNOTEPAD_H
#define MYNOTEPAD_H

#include <QMainWindow>

namespace Ui {
class mynotepad;
}

class mynotepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit mynotepad(QWidget *parent = nullptr);
    ~mynotepad();

private:
    Ui::mynotepad *ui;
};

#endif // MYNOTEPAD_H
