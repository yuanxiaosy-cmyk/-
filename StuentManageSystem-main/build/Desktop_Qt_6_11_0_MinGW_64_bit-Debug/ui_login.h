/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_top;
    QFrame *loginFrame;
    QVBoxLayout *verticalLayout_frame;
    QLabel *label_icon;
    QLabel *label_title;
    QLabel *label_subtitle;
    QSpacerItem *verticalSpacer_form;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_ps;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QSpacerItem *verticalSpacer_bottom;
    QSpacerItem *verticalSpacer_bottom_main;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(450, 420);
        login->setStyleSheet(QString::fromUtf8("\n"
"QDialog {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #667eea, stop:1 #764ba2);\n"
"}\n"
"\n"
"QFrame#loginFrame {\n"
"    background-color: rgba(255, 255, 255, 0.98);\n"
"    border-radius: 16px;\n"
"    box-shadow: 0 20px 60px rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QLabel#label_icon {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #667eea, stop:1 #764ba2);\n"
"    border-radius: 50%;\n"
"}\n"
"\n"
"QLabel#label_title {\n"
"    font-size: 26px;\n"
"    font-weight: bold;\n"
"    color: #1a202c;\n"
"    letter-spacing: 2px;\n"
"}\n"
"\n"
"QLabel#label_subtitle {\n"
"    font-size: 13px;\n"
"    color: #718096;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: none;\n"
"    border-bottom: 2px solid #e2e8f0;\n"
"    background-color: transparent;\n"
"    padding: 12px 0 8px 0;\n"
"    font-size: 15px;\n"
"    color: #2d3748;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-bottom-color: #667eea;\n"
"    outline: none;\n"
"}\n"
"\n"
"QLineEdit::pla"
                        "ceholder {\n"
"    color: #a0aec0;\n"
"}\n"
"\n"
"QPushButton#btn_login {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #667eea, stop:1 #764ba2);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 14px 0;\n"
"    font-size: 16px;\n"
"    font-weight: 600;\n"
"    letter-spacing: 1px;\n"
"}\n"
"\n"
"QPushButton#btn_login:hover {\n"
"    transform: translateY(-2px);\n"
"    box-shadow: 0 8px 20px rgba(102, 126, 234, 0.4);\n"
"}\n"
"\n"
"QPushButton#btn_exit {\n"
"    background-color: #edf2f7;\n"
"    color: #4a5568;\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 12px 0;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton#btn_exit:hover {\n"
"    background-color: #e2e8f0;\n"
"}\n"
"   "));
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_top = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_top);

        loginFrame = new QFrame(login);
        loginFrame->setObjectName("loginFrame");
        verticalLayout_frame = new QVBoxLayout(loginFrame);
        verticalLayout_frame->setObjectName("verticalLayout_frame");
        label_icon = new QLabel(loginFrame);
        label_icon->setObjectName("label_icon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_icon->sizePolicy().hasHeightForWidth());
        label_icon->setSizePolicy(sizePolicy);
        label_icon->setMinimumSize(QSize(100, 100));
        label_icon->setMaximumSize(QSize(100, 100));
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/s/log.jpg")));
        label_icon->setScaledContents(true);
        label_icon->setAlignment(Qt::AlignCenter);

        verticalLayout_frame->addWidget(label_icon);

        label_title = new QLabel(loginFrame);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout_frame->addWidget(label_title);

        label_subtitle = new QLabel(loginFrame);
        label_subtitle->setObjectName("label_subtitle");
        label_subtitle->setAlignment(Qt::AlignCenter);

        verticalLayout_frame->addWidget(label_subtitle);

        verticalSpacer_form = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_frame->addItem(verticalSpacer_form);

        formLayout = new QFormLayout();
        formLayout->setContentsMargins(30, 30, 30, 30);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(25);
        lineEdit_id = new QLineEdit(loginFrame);
        lineEdit_id->setObjectName("lineEdit_id");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_id);

        lineEdit_ps = new QLineEdit(loginFrame);
        lineEdit_ps->setObjectName("lineEdit_ps");
        lineEdit_ps->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_ps);


        verticalLayout_frame->addLayout(formLayout);

        btn_login = new QPushButton(loginFrame);
        btn_login->setObjectName("btn_login");

        verticalLayout_frame->addWidget(btn_login);

        btn_exit = new QPushButton(loginFrame);
        btn_exit->setObjectName("btn_exit");

        verticalLayout_frame->addWidget(btn_exit);

        verticalSpacer_bottom = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_frame->addItem(verticalSpacer_bottom);


        verticalLayout->addWidget(loginFrame);

        verticalSpacer_bottom_main = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_bottom_main);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\344\272\272\345\221\230\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_title->setText(QCoreApplication::translate("login", "\344\272\272\345\221\230\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_subtitle->setText(QCoreApplication::translate("login", "\350\257\267\347\231\273\345\275\225\346\202\250\347\232\204\350\264\246\345\217\267", nullptr));
        lineEdit_id->setPlaceholderText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_ps->setPlaceholderText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        btn_login->setText(QCoreApplication::translate("login", "\347\231\273 \345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
