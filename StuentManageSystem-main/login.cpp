#include "login.h"
#include "ui_login.h"
#include "PersonManager.h"
#include <QMessageBox>
#include <QIcon>

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("人员信息管理系统 - 登录");
    
    // 设置窗口图标
    this->setWindowIcon(QIcon(":/s/log.jpg"));

    // 设置密码输入框的回显模式
    ui->lineEdit_ps->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

//退出程序按钮
void login::on_btn_exit_clicked()
{
    this->reject();
    QApplication::quit();
}

// 登录验证
bool login::validateUser(const QString &username, const QString &password)
{
    return (username == "袁潇" && password == "123");
}

// 登录人员管理系统
void login::on_btn_login_clicked()
{
    QString username = ui->lineEdit_id->text().trimmed();
    QString password = ui->lineEdit_ps->text();

    if(username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "用户名和密码不能为空");
        return;
    }

    if(validateUser(username, password)) {
        PersonManager *manager = new PersonManager();
        manager->show();
        this->accept();
    } else {
        QMessageBox::critical(this, "登录失败", "用户名或密码错误");
        ui->lineEdit_id->clear();
        ui->lineEdit_ps->clear();
        ui->lineEdit_id->setFocus();
    }
}

void login::on_lineEdit_ps_cursorPositionChanged(int arg1, int arg2)
{
}

void login::on_lineEdit_id_cursorPositionChanged(int arg1, int arg2)
{
}