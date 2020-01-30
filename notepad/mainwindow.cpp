#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include "QFileDialog"
#include "QTextStream"
#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QPalette>
#include <QPrinter>
#include <QPrintDialog>
#include <form.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->statusBar->showMessage("you are proudly working on muchira junior notepad ");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: myfuction (){

    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
}
void MainWindow::on_actionnew_triggered()
{
     ui->tabWidget->addTab(new Form,QString ("tab %0").arg(ui->tabWidget->count()+1));
   myfuction();
}


void MainWindow::on_actionopen_triggered()
{
    //new filename=filename;
    QString filename = QFileDialog::getOpenFileName(this,"open the file");
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"warning","file not open");
        return;
    }
    QTextStream in(&file);QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();

}

void MainWindow::on_actionsave_triggered()
{
//    QString filename = QFileDialog::saveState();
    //filename.insert(this,filename);
    QFile file(filename);
    if(!file.open(QFile::WriteOnly| QFile::Text)){
        QMessageBox::warning(this,"warning","file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();

}
void MainWindow::on_actionsaveas_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"open the file");
    QFile file(filename);
    filepath=filename;
    if(!file.open(QFile::WriteOnly| QFile::Text)){
        QMessageBox::warning(this,"warning","file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actioncopy_triggered()
{
    myfuction();
    ui->textEdit->copy();
}

void MainWindow::on_actionpaste_triggered()
{
    myfuction();
    ui->textEdit->paste();
}

void MainWindow::on_actioncut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionabout_notepad_triggered()
{
    QMessageBox::information(this,"about notepad","developer: MUCHIRA JUNIOR \nuse: making text and code files \n place:KARATINA UNIVERSITY \n date:20/JAN/2020\n GPL licence open source");
}

void MainWindow::on_actionundo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionredo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_actioncolor_triggered()
{
    QColor color= QColorDialog::getColor(Qt::white,this,"choose color");
    if (color.isValid()){
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow::on_actionfont_triggered()
{
    bool ok;
    QFont font= QFontDialog::getFont(&ok,this);
    if (ok){
        ui->textEdit->setFont(font);
    }else {
        return;
}
 }

void MainWindow::on_actionback_ground_color_triggered()
{
    QColor color= QColorDialog::getColor(Qt::white,this,"choose color");
    if (color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
}
}

void MainWindow::on_actionnotepad_background_color_triggered()
{
    QColor color= QColorDialog::getColor(Qt::white,this,"choose color");
    if (color.isValid()){
        ui->textEdit->setPalette(QPalette(color));
    }
}

void MainWindow::on_actionprint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("your printer");
    QPrintDialog dialog(&printer,this);
   if (dialog.exec() == QDialog::Rejected) return;
    ui->textEdit->print(&printer);
}
