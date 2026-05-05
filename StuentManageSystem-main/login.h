#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QObject>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_btn_exit_clicked();
    void on_btn_login_clicked();
    void on_lineEdit_ps_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_id_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::login *ui;
    bool validateUser(const QString &username, const QString &password);
};

#endif // LOGIN_H