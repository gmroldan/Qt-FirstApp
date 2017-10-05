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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnSayHello_clicked();

private:
    Ui::MainWindow *ui;

    void showErrorMessage();
    void hideErrorMessage();
};

#endif // MAINWINDOW_H
