#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QListWidgetItem>
#include <QMainWindow>
#include <QVector>
#include "item.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void handleMenuItemNew();
    void removeSelectedProduct();
    void handleClick(QListWidgetItem* item);
    void handleMenuItemEdit();

private:
    Ui::MainWindow *ui;
    QVector<Item*> productList;
};

#endif // MAINWINDOW_H
