#ifndef QUITDIALOG_H
#define QUITDIALOG_H

#include <QDialog>

namespace Ui {
class QuitDialog;
}

class QuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuitDialog(QWidget *parent = 0);
    ~QuitDialog();

private slots:

    void on_YesButton_clicked();

    void on_NoButton_clicked();

private:
    Ui::QuitDialog *ui;

signals:
    void YesButtonClicked();

};

#endif // QUITDIALOG_H
