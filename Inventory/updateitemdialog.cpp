#include "updateitemdialog.h"
#include "ui_updateitemdialog.h"

UpdateItemDialog::UpdateItemDialog(QWidget *parent) : QDialog(parent), ui(new Ui::UpdateItemDialog) {
    ui->setupUi(this);
}

UpdateItemDialog::~UpdateItemDialog() {
    delete ui;
}
