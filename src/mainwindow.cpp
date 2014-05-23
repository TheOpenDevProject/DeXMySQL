#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mysqlmanager.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QCoreApplication::addLibraryPath("plugins");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    mySQLManager myqslMgr("127.0.0.1:3306","movieDB","root","toor");
    QStringList movieTables;
    movieTables << "movie_Title";
    movieTables << "movie_Genre";
    movieTables << "movie_GenrEe";
    QStringList arguementz;
    arguementz << "lel xD";
    arguementz << "SAAGE";
    arguementz << "SAAGE";
    myqslMgr.writeMySQL("movieTable", movieTables,arguementz);
}
