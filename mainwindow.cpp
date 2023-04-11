#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebEngineView *view = new QWebEngineView(this);
//    view->load(QUrl("http://wikipedia.com"));
    view->load(QUrl("http://chat.openai.com"));
//    view->load(QUrl("http://web.whatsapp.com"));
    view->show();

    setCentralWidget(view);
}

