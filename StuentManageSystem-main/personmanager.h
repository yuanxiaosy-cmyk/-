#ifndef PERSONMANAGER_H
#define PERSONMANAGER_H

#include <QObject>
#include <QDialog>
#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include "Set.h"

namespace Ui {
    class PersonManager;
}

class PersonManager : public QDialog
{
    Q_OBJECT

public:
    explicit PersonManager(QWidget *parent = nullptr);
    ~PersonManager();

private slots:
    // 学生管理
    void on_btnAddStudent_clicked();
    void on_btnDeleteStudent_clicked();
    void on_btnUpdateStudent_clicked();
    void on_btnQueryStudent_clicked();
    void on_btnRefreshStudent_clicked();
    
    // 学生批量操作
    void on_btnBatchAddStudent_clicked();
    void on_btnBatchDeleteStudent_clicked();

    // 教师管理
    void on_btnAddTeacher_clicked();
    void on_btnDeleteTeacher_clicked();
    void on_btnUpdateTeacher_clicked();
    void on_btnQueryTeacher_clicked();
    void on_btnRefreshTeacher_clicked();
    
    // 教师批量操作
    void on_btnBatchAddTeacher_clicked();
    void on_btnBatchDeleteTeacher_clicked();

    // 人员统计（左下角按钮）
    void on_btnStatistics_clicked();

    // 返回登录
    void on_btnReturn_clicked();

private:
    Ui::PersonManager *ui;

    // 链表管理
    List<Student>* studentList;
    List<Teacher>* teacherList;

    // 刷新表格
    void refreshStudentTable();
    void refreshTeacherTable();

    // 排序函数
    template <typename T>
    void sortListById(List<T>* list);
};

#endif // PERSONMANAGER_H