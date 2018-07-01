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

    void InsertFlagItem(const QString&, const QString&);

private slots:
    void on_actionExport_triggered();

    void on_flagsAddBtn_clicked();

    void on_flagsRemoveBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
