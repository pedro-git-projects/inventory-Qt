#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "additemdialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->menuNewProduct, &QAction::triggered, this, &MainWindow::handleMenuItemNew);
}


void MainWindow::handleMenuItemNew() {
    Item* newItem = nullptr;
    AddItemDialog addItemDialog(newItem, nullptr);

    addItemDialog.setModal(true);
    addItemDialog.exec();

    if(newItem != nullptr) {
        productList.push_back(newItem);
        ui->lstProducts->addItem(newItem->getName());
    }
}


MainWindow::~MainWindow() {
    delete ui;
}

