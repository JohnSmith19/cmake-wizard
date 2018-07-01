#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

//class QListWidgetItem;
QT_FORWARD_DECLARE_CLASS(QListWidgetItem);

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void InsertFlagItem(const QString&, const QString&);
    void insertNewIncludeDirectory(const QString&);

private slots:
    void on_actionExport_triggered();

    void on_flagsAddBtn_clicked();

    void on_flagsRemoveBtn_clicked();

    void on_addIncludeBtn_clicked();

    void on_includeList_itemChanged(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
