#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->flagsTable->horizontalHeader()->setStretchLastSection(true);
    ui->flagsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InsertFlagItem(const QString & key, const QString & value)
{
    int row = ui->flagsTable->rowCount();
    ui->flagsTable->insertRow(row);

    auto keyColumn = new QTableWidgetItem(key);
    auto valueColumn = new QTableWidgetItem(value);

    ui->flagsTable->setItem(row, 0,keyColumn);
    ui->flagsTable->setItem(row, 1,valueColumn);
}

void MainWindow::on_actionExport_triggered()
{
    QString projectName = ui->projectNameEdit->text();
}

void MainWindow::on_flagsAddBtn_clicked()
{
    InsertFlagItem("<Key>", "<Value>");
}

void MainWindow::on_flagsRemoveBtn_clicked()
{
    ui->flagsTable->removeRow(ui->flagsTable->currentRow());
}
