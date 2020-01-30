#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void myfuction();
    ~MainWindow();

private slots:
    void on_actionnew_triggered();

    void on_actionsave_triggered();

    void on_actioncopy_triggered();

    void on_actionpaste_triggered();

    void on_actioncut_triggered();

    void on_actionabout_notepad_triggered();

    void on_actionundo_triggered();

    void on_actionredo_triggered();

    void on_actionopen_triggered();

    void on_actionsaveas_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_actioncolor_triggered();

    void on_actionfont_triggered();

    void on_actionback_ground_color_triggered();

    void on_actionnotepad_background_color_triggered();

    void on_actionprint_triggered();

private:
    Ui::MainWindow *ui;
    QString filepath;
    QString filename;
};

#endif // MAINWINDOW_H
