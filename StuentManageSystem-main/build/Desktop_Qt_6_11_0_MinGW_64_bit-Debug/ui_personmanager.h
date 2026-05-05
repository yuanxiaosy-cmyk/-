/********************************************************************************
** Form generated from reading UI file 'personmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONMANAGER_H
#define UI_PERSONMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonManager
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabStudent;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *editStudentId;
    QLabel *label_8;
    QLineEdit *editStudentName;
    QLabel *label_9;
    QLineEdit *editStudentGender;
    QLabel *label_10;
    QLineEdit *editStudentAge;
    QLabel *label_11;
    QLineEdit *editStudentMajor;
    QLabel *label_12;
    QLineEdit *editStudentClass;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAddStudent;
    QPushButton *btnDeleteStudent;
    QPushButton *btnUpdateStudent;
    QPushButton *btnQueryStudent;
    QPushButton *btnRefreshStudent;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnBatchAddStudent;
    QPushButton *btnBatchDeleteStudent;
    QTableWidget *tableStudent;
    QWidget *tabTeacher;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLineEdit *editTeacherId;
    QLabel *label_14;
    QLineEdit *editTeacherName;
    QLabel *label_15;
    QLineEdit *editTeacherGender;
    QLabel *label_16;
    QLineEdit *editTeacherAge;
    QLabel *label_17;
    QLineEdit *editTeacherDept;
    QLabel *label_18;
    QLineEdit *editTeacherTitle;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnAddTeacher;
    QPushButton *btnDeleteTeacher;
    QPushButton *btnUpdateTeacher;
    QPushButton *btnQueryTeacher;
    QPushButton *btnRefreshTeacher;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnBatchAddTeacher;
    QPushButton *btnBatchDeleteTeacher;
    QTableWidget *tableTeacher;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStatistics;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnReturn;

    void setupUi(QDialog *PersonManager)
    {
        if (PersonManager->objectName().isEmpty())
            PersonManager->setObjectName("PersonManager");
        PersonManager->resize(1076, 700);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/s/log.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PersonManager->setWindowIcon(icon);
        PersonManager->setStyleSheet(QString::fromUtf8("background-image: url(:/s/back.jpg);"));
        verticalLayout = new QVBoxLayout(PersonManager);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(PersonManager);
        tabWidget->setObjectName("tabWidget");
        tabStudent = new QWidget();
        tabStudent->setObjectName("tabStudent");
        horizontalLayout_2 = new QHBoxLayout(tabStudent);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_2 = new QGroupBox(tabStudent);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        editStudentId = new QLineEdit(groupBox_2);
        editStudentId->setObjectName("editStudentId");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, editStudentId);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        editStudentName = new QLineEdit(groupBox_2);
        editStudentName->setObjectName("editStudentName");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, editStudentName);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        editStudentGender = new QLineEdit(groupBox_2);
        editStudentGender->setObjectName("editStudentGender");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, editStudentGender);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_10);

        editStudentAge = new QLineEdit(groupBox_2);
        editStudentAge->setObjectName("editStudentAge");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, editStudentAge);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_11);

        editStudentMajor = new QLineEdit(groupBox_2);
        editStudentMajor->setObjectName("editStudentMajor");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, editStudentMajor);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::LabelRole, label_12);

        editStudentClass = new QLineEdit(groupBox_2);
        editStudentClass->setObjectName("editStudentClass");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::FieldRole, editStudentClass);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnAddStudent = new QPushButton(groupBox_2);
        btnAddStudent->setObjectName("btnAddStudent");

        horizontalLayout_4->addWidget(btnAddStudent);

        btnDeleteStudent = new QPushButton(groupBox_2);
        btnDeleteStudent->setObjectName("btnDeleteStudent");

        horizontalLayout_4->addWidget(btnDeleteStudent);

        btnUpdateStudent = new QPushButton(groupBox_2);
        btnUpdateStudent->setObjectName("btnUpdateStudent");

        horizontalLayout_4->addWidget(btnUpdateStudent);

        btnQueryStudent = new QPushButton(groupBox_2);
        btnQueryStudent->setObjectName("btnQueryStudent");

        horizontalLayout_4->addWidget(btnQueryStudent);

        btnRefreshStudent = new QPushButton(groupBox_2);
        btnRefreshStudent->setObjectName("btnRefreshStudent");

        horizontalLayout_4->addWidget(btnRefreshStudent);


        formLayout_2->setLayout(6, QFormLayout::ItemRole::SpanningRole, horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btnBatchAddStudent = new QPushButton(groupBox_2);
        btnBatchAddStudent->setObjectName("btnBatchAddStudent");

        horizontalLayout_6->addWidget(btnBatchAddStudent);

        btnBatchDeleteStudent = new QPushButton(groupBox_2);
        btnBatchDeleteStudent->setObjectName("btnBatchDeleteStudent");

        horizontalLayout_6->addWidget(btnBatchDeleteStudent);


        formLayout_2->setLayout(7, QFormLayout::ItemRole::SpanningRole, horizontalLayout_6);


        horizontalLayout_2->addWidget(groupBox_2);

        tableStudent = new QTableWidget(tabStudent);
        tableStudent->setObjectName("tableStudent");
        tableStudent->setMinimumSize(QSize(500, 0));

        horizontalLayout_2->addWidget(tableStudent);

        tabWidget->addTab(tabStudent, QString());
        tabTeacher = new QWidget();
        tabTeacher->setObjectName("tabTeacher");
        horizontalLayout_3 = new QHBoxLayout(tabTeacher);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_3 = new QGroupBox(tabTeacher);
        groupBox_3->setObjectName("groupBox_3");
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName("formLayout_3");
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_13);

        editTeacherId = new QLineEdit(groupBox_3);
        editTeacherId->setObjectName("editTeacherId");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, editTeacherId);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_14);

        editTeacherName = new QLineEdit(groupBox_3);
        editTeacherName->setObjectName("editTeacherName");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, editTeacherName);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_15);

        editTeacherGender = new QLineEdit(groupBox_3);
        editTeacherGender->setObjectName("editTeacherGender");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, editTeacherGender);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_16);

        editTeacherAge = new QLineEdit(groupBox_3);
        editTeacherAge->setObjectName("editTeacherAge");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, editTeacherAge);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName("label_17");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::LabelRole, label_17);

        editTeacherDept = new QLineEdit(groupBox_3);
        editTeacherDept->setObjectName("editTeacherDept");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::FieldRole, editTeacherDept);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName("label_18");

        formLayout_3->setWidget(5, QFormLayout::ItemRole::LabelRole, label_18);

        editTeacherTitle = new QLineEdit(groupBox_3);
        editTeacherTitle->setObjectName("editTeacherTitle");

        formLayout_3->setWidget(5, QFormLayout::ItemRole::FieldRole, editTeacherTitle);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnAddTeacher = new QPushButton(groupBox_3);
        btnAddTeacher->setObjectName("btnAddTeacher");

        horizontalLayout_5->addWidget(btnAddTeacher);

        btnDeleteTeacher = new QPushButton(groupBox_3);
        btnDeleteTeacher->setObjectName("btnDeleteTeacher");

        horizontalLayout_5->addWidget(btnDeleteTeacher);

        btnUpdateTeacher = new QPushButton(groupBox_3);
        btnUpdateTeacher->setObjectName("btnUpdateTeacher");

        horizontalLayout_5->addWidget(btnUpdateTeacher);

        btnQueryTeacher = new QPushButton(groupBox_3);
        btnQueryTeacher->setObjectName("btnQueryTeacher");

        horizontalLayout_5->addWidget(btnQueryTeacher);

        btnRefreshTeacher = new QPushButton(groupBox_3);
        btnRefreshTeacher->setObjectName("btnRefreshTeacher");

        horizontalLayout_5->addWidget(btnRefreshTeacher);


        formLayout_3->setLayout(6, QFormLayout::ItemRole::SpanningRole, horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btnBatchAddTeacher = new QPushButton(groupBox_3);
        btnBatchAddTeacher->setObjectName("btnBatchAddTeacher");

        horizontalLayout_7->addWidget(btnBatchAddTeacher);

        btnBatchDeleteTeacher = new QPushButton(groupBox_3);
        btnBatchDeleteTeacher->setObjectName("btnBatchDeleteTeacher");

        horizontalLayout_7->addWidget(btnBatchDeleteTeacher);


        formLayout_3->setLayout(7, QFormLayout::ItemRole::SpanningRole, horizontalLayout_7);


        horizontalLayout_3->addWidget(groupBox_3);

        tableTeacher = new QTableWidget(tabTeacher);
        tableTeacher->setObjectName("tableTeacher");
        tableTeacher->setMinimumSize(QSize(500, 0));

        horizontalLayout_3->addWidget(tableTeacher);

        tabWidget->addTab(tabTeacher, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnStatistics = new QPushButton(PersonManager);
        btnStatistics->setObjectName("btnStatistics");

        horizontalLayout->addWidget(btnStatistics);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnReturn = new QPushButton(PersonManager);
        btnReturn->setObjectName("btnReturn");

        horizontalLayout->addWidget(btnReturn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PersonManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PersonManager);
    } // setupUi

    void retranslateUi(QDialog *PersonManager)
    {
        PersonManager->setWindowTitle(QCoreApplication::translate("PersonManager", "\344\272\272\345\221\230\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PersonManager", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_7->setText(QCoreApplication::translate("PersonManager", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("PersonManager", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("PersonManager", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("PersonManager", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("PersonManager", "\344\270\223\344\270\232\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("PersonManager", "\347\217\255\347\272\247\357\274\232", nullptr));
        btnAddStudent->setText(QCoreApplication::translate("PersonManager", "\346\267\273\345\212\240", nullptr));
        btnDeleteStudent->setText(QCoreApplication::translate("PersonManager", "\345\210\240\351\231\244", nullptr));
        btnUpdateStudent->setText(QCoreApplication::translate("PersonManager", "\344\277\256\346\224\271", nullptr));
        btnQueryStudent->setText(QCoreApplication::translate("PersonManager", "\346\237\245\350\257\242", nullptr));
        btnRefreshStudent->setText(QCoreApplication::translate("PersonManager", "\345\210\267\346\226\260", nullptr));
        btnBatchAddStudent->setText(QCoreApplication::translate("PersonManager", "\346\211\271\351\207\217\346\267\273\345\212\240", nullptr));
        btnBatchDeleteStudent->setText(QCoreApplication::translate("PersonManager", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStudent), QCoreApplication::translate("PersonManager", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PersonManager", "\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        label_13->setText(QCoreApplication::translate("PersonManager", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("PersonManager", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("PersonManager", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("PersonManager", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("PersonManager", "\351\203\250\351\227\250\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("PersonManager", "\350\201\214\347\247\260\357\274\232", nullptr));
        btnAddTeacher->setText(QCoreApplication::translate("PersonManager", "\346\267\273\345\212\240", nullptr));
        btnDeleteTeacher->setText(QCoreApplication::translate("PersonManager", "\345\210\240\351\231\244", nullptr));
        btnUpdateTeacher->setText(QCoreApplication::translate("PersonManager", "\344\277\256\346\224\271", nullptr));
        btnQueryTeacher->setText(QCoreApplication::translate("PersonManager", "\346\237\245\350\257\242", nullptr));
        btnRefreshTeacher->setText(QCoreApplication::translate("PersonManager", "\345\210\267\346\226\260", nullptr));
        btnBatchAddTeacher->setText(QCoreApplication::translate("PersonManager", "\346\211\271\351\207\217\346\267\273\345\212\240", nullptr));
        btnBatchDeleteTeacher->setText(QCoreApplication::translate("PersonManager", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTeacher), QCoreApplication::translate("PersonManager", "\346\225\231\345\270\210\347\256\241\347\220\206", nullptr));
        btnStatistics->setText(QCoreApplication::translate("PersonManager", "\344\272\272\345\221\230\347\273\237\350\256\241", nullptr));
        btnReturn->setText(QCoreApplication::translate("PersonManager", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonManager: public Ui_PersonManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONMANAGER_H
