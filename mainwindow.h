#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include<QMessageBox>
#include<QTimer>
#include<QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    bool temping;
    QTimer *timer;

private slots:
    void portscan();
    void connectport();
    void receive();
    void get_temp();
    void get_temping();
    void clean();
};

#endif // MAINWINDOW_H
