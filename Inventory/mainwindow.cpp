#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "additemdialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->menuNewProduct, &QAction::triggered, this, &MainWindow::handleMenuItemNew);

    connect(ui->btnRemove, &QPushButton::clicked, this, &MainWindow::removeSelectedProduct);
}


void MainWindow::handleMenuItemNew() {
    Item* newItem = nullptr;
    AddItemDialog addItemDialog(newItem, nullptr);

    addItemDialog.setModal(true);
    addItemDialog.exec();

    if(newItem != nullptr) {
        this->productList.push_back(newItem);
        ui->lstProducts->addItem(newItem->getName());
    }
}

void MainWindow::removeSelectedProduct() {
    auto index{ ui->lstProducts->currentRow() };
    if(index >= 0) {
       // removing from memory
       auto* toRemove = productList.at(index);
       delete toRemove;
       productList.removeAt(index); // removing dangling pointer;

       // removing from ui
       delete ui->lstProducts->currentItem();
    }
}


MainWindow::~MainWindow() {
    delete ui;
}

