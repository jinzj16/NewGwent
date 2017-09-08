#include "quitdialog.h"
#include "ui_quitdialog.h"

QuitDialog::QuitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuitDialog)
{
    ui->setupUi(this);

}

QuitDialog::~QuitDialog()
{
    delete ui;
}


void QuitDialog::on_YesButton_clicked()
{
    emit YesButtonClicked();
    close();
}

void QuitDialog::on_NoButton_clicked()
{
    close();
}
