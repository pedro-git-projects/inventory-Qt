#ifndef UPDATEITEMDIALOG_H
#define UPDATEITEMDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateItemDialog;
}

class UpdateItemDialog : public QDialog {
    Q_OBJECT

public:
    explicit UpdateItemDialog(QWidget *parent = nullptr);
    ~UpdateItemDialog();

private:
    Ui::UpdateItemDialog *ui;
};

#endif // UPDATEITEMDIALOG_H
