#include "PersonManager.h"
#include "ui_PersonManager.h"
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QIcon>
PersonManager::PersonManager(QWidget *parent)
    : QDialog(parent), ui(new Ui::PersonManager)
{
    ui->setupUi(this);
    this->setWindowTitle("人员信息管理系统");

    studentList = new List<Student>();
    teacherList = new List<Teacher>();

    studentList->append(new Student("2025001", "袁潇", "男", 19, "计算机科学", "2班"));
    studentList->append(new Student("2025002", "张岩", "女", 18, "计算机科学", "2班"));


    teacherList->append(new Teacher("001", "李教授", "男", 45, "计算机学院", "教授"));
    teacherList->append(new Teacher("002", "王老师", "女", 35, "软件工程系", "副教授"));
    teacherList->append(new Teacher("003", "张老师", "男", 30, "人工智能系", "副教授"));

    QStringList studentHeaders{"学号", "姓名", "专业", "班级", "性别", "年龄"};
    ui->tableStudent->setColumnCount(studentHeaders.size());
    ui->tableStudent->setHorizontalHeaderLabels(studentHeaders);

    QStringList teacherHeaders{"工号", "姓名", "部门", "职称", "性别", "年龄"};
    ui->tableTeacher->setColumnCount(teacherHeaders.size());
    ui->tableTeacher->setHorizontalHeaderLabels(teacherHeaders);

    refreshStudentTable();
    refreshTeacherTable();
}

PersonManager::~PersonManager()
{
    delete ui;
    delete studentList;
    delete teacherList;
}

template <typename T>
void PersonManager::sortListById(List<T>* list)
{
    if(list->isEmpty()) return;
    Node<T>*& head = list->getHead();
    if(head == nullptr || head->next == nullptr) return;

    bool swapped;
    Node<T>** ptr;
    do {
        swapped = false;
        ptr = &head;
        while((*ptr)->next != nullptr) {
            Node<T>* current = *ptr;
            Node<T>* nextNode = current->next;
            if(current->data->id > nextNode->data->id) {
                current->next = nextNode->next;
                nextNode->next = current;
                *ptr = nextNode;
                swapped = true;
            }
            ptr = &(*ptr)->next;
        }
    } while(swapped);
}

void PersonManager::refreshStudentTable()
{
    sortListById(studentList);
    ui->tableStudent->setRowCount(0);
    for (int i = 0; i < studentList->getLength(); i++) {
        Student* s = studentList->getAt(i);
        if (s) {
            int row = ui->tableStudent->rowCount();
            ui->tableStudent->insertRow(row);
            ui->tableStudent->setItem(row, 0, new QTableWidgetItem(s->id));
            ui->tableStudent->setItem(row, 1, new QTableWidgetItem(s->name));
            ui->tableStudent->setItem(row, 2, new QTableWidgetItem(s->major));
            ui->tableStudent->setItem(row, 3, new QTableWidgetItem(s->className));
            ui->tableStudent->setItem(row, 4, new QTableWidgetItem(s->gender));
            ui->tableStudent->setItem(row, 5, new QTableWidgetItem(QString::number(s->age)));
        }
    }
}

void PersonManager::refreshTeacherTable()
{
    sortListById(teacherList);
    ui->tableTeacher->setRowCount(0);
    for (int i = 0; i < teacherList->getLength(); i++) {
        Teacher* t = teacherList->getAt(i);
        if (t) {
            int row = ui->tableTeacher->rowCount();
            ui->tableTeacher->insertRow(row);
            ui->tableTeacher->setItem(row, 0, new QTableWidgetItem(t->id));
            ui->tableTeacher->setItem(row, 1, new QTableWidgetItem(t->name));
            ui->tableTeacher->setItem(row, 2, new QTableWidgetItem(t->department));
            ui->tableTeacher->setItem(row, 3, new QTableWidgetItem(t->title));
            ui->tableTeacher->setItem(row, 4, new QTableWidgetItem(t->gender));
            ui->tableTeacher->setItem(row, 5, new QTableWidgetItem(QString::number(t->age)));
        }
    }
}

void PersonManager::on_btnAddStudent_clicked()
{
    QString id = ui->editStudentId->text().trimmed();
    QString name = ui->editStudentName->text().trimmed();
    QString gender = ui->editStudentGender->text().trimmed();
    QString ageStr = ui->editStudentAge->text().trimmed();
    QString major = ui->editStudentMajor->text().trimmed();
    QString className = ui->editStudentClass->text().trimmed();

    if(id.isEmpty() || name.isEmpty() || gender.isEmpty() || ageStr.isEmpty() ||
        major.isEmpty() || className.isEmpty()) {
        QMessageBox::warning(this, "错误", "所有字段必须填写");
        return;
    }

    bool ok;
    int age = ageStr.toInt(&ok);
    if(!ok || age <= 0) {
        QMessageBox::warning(this, "错误", "年龄必须为正整数");
        return;
    }

    if (studentList->findById(id)) {
        QMessageBox::warning(this, "错误", "学号已存在");
        return;
    }

    studentList->append(new Student(id, name, gender, age, major, className));
    refreshStudentTable();
    QMessageBox::information(this, "成功", "学生信息已添加");

    ui->editStudentId->clear();
    ui->editStudentName->clear();
    ui->editStudentGender->clear();
    ui->editStudentAge->clear();
    ui->editStudentMajor->clear();
    ui->editStudentClass->clear();
}

void PersonManager::on_btnDeleteStudent_clicked()
{
    QString id = ui->editStudentId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入学号");
        return;
    }

    if (studentList->isEmpty()) {
        QMessageBox::warning(this, "错误", "学生列表为空");
        return;
    }

    for (int i = 0; i < studentList->getLength(); i++) {
        Student* s = studentList->getAt(i);
        if (s && s->id == id) {
            studentList->removeAt(i);
            refreshStudentTable();
            QMessageBox::information(this, "成功", "学生信息已删除");
            ui->editStudentId->clear();
            return;
        }
    }
    QMessageBox::warning(this, "错误", "未找到该学号");
}

void PersonManager::on_btnUpdateStudent_clicked()
{
    QString id = ui->editStudentId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入学号");
        return;
    }

    Student* s = studentList->findById(id);
    if(!s) {
        QMessageBox::warning(this, "错误", "未找到该学号");
        return;
    }

    QString name = ui->editStudentName->text().trimmed();
    QString gender = ui->editStudentGender->text().trimmed();
    QString ageStr = ui->editStudentAge->text().trimmed();
    QString major = ui->editStudentMajor->text().trimmed();
    QString className = ui->editStudentClass->text().trimmed();

    if(!name.isEmpty()) s->name = name;
    if(!gender.isEmpty()) s->gender = gender;
    if(!ageStr.isEmpty()) {
        bool ok;
        int age = ageStr.toInt(&ok);
        if(ok && age > 0) s->age = age;
    }
    if(!major.isEmpty()) s->major = major;
    if(!className.isEmpty()) s->className = className;

    refreshStudentTable();
    QMessageBox::information(this, "成功", "学生信息已修改");
}

void PersonManager::on_btnQueryStudent_clicked()
{
    QString id = ui->editStudentId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入学号");
        return;
    }

    Student* s = studentList->findById(id);
    if(s) {
        ui->editStudentName->setText(s->name);
        ui->editStudentGender->setText(s->gender);
        ui->editStudentAge->setText(QString::number(s->age));
        ui->editStudentMajor->setText(s->major);
        ui->editStudentClass->setText(s->className);
    } else {
        QMessageBox::warning(this, "错误", "未找到该学号");
    }
}

void PersonManager::on_btnRefreshStudent_clicked()
{
    refreshStudentTable();
}

void PersonManager::on_btnAddTeacher_clicked()
{
    QString id = ui->editTeacherId->text().trimmed();
    QString name = ui->editTeacherName->text().trimmed();
    QString gender = ui->editTeacherGender->text().trimmed();
    QString ageStr = ui->editTeacherAge->text().trimmed();
    QString dept = ui->editTeacherDept->text().trimmed();
    QString title = ui->editTeacherTitle->text().trimmed();

    if(id.isEmpty() || name.isEmpty() || gender.isEmpty() || ageStr.isEmpty() ||
        dept.isEmpty() || title.isEmpty()) {
        QMessageBox::warning(this, "错误", "所有字段必须填写");
        return;
    }

    bool ok;
    int age = ageStr.toInt(&ok);
    if(!ok || age <= 0) {
        QMessageBox::warning(this, "错误", "年龄必须为正整数");
        return;
    }

    if (teacherList->findById(id)) {
        QMessageBox::warning(this, "错误", "工号已存在");
        return;
    }

    teacherList->append(new Teacher(id, name, gender, age, dept, title));
    refreshTeacherTable();
    QMessageBox::information(this, "成功", "教师信息已添加");

    ui->editTeacherId->clear();
    ui->editTeacherName->clear();
    ui->editTeacherGender->clear();
    ui->editTeacherAge->clear();
    ui->editTeacherDept->clear();
    ui->editTeacherTitle->clear();
}

void PersonManager::on_btnDeleteTeacher_clicked()
{
    QString id = ui->editTeacherId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入工号");
        return;
    }

    if (teacherList->isEmpty()) {
        QMessageBox::warning(this, "错误", "教师列表为空");
        return;
    }

    for (int i = 0; i < teacherList->getLength(); i++) {
        Teacher* t = teacherList->getAt(i);
        if (t && t->id == id) {
            teacherList->removeAt(i);
            refreshTeacherTable();
            QMessageBox::information(this, "成功", "教师信息已删除");
            ui->editTeacherId->clear();
            return;
        }
    }
    QMessageBox::warning(this, "错误", "未找到该工号");
}

void PersonManager::on_btnUpdateTeacher_clicked()
{
    QString id = ui->editTeacherId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入工号");
        return;
    }

    Teacher* t = teacherList->findById(id);
    if(!t) {
        QMessageBox::warning(this, "错误", "未找到该工号");
        return;
    }

    QString name = ui->editTeacherName->text().trimmed();
    QString gender = ui->editTeacherGender->text().trimmed();
    QString ageStr = ui->editTeacherAge->text().trimmed();
    QString dept = ui->editTeacherDept->text().trimmed();
    QString title = ui->editTeacherTitle->text().trimmed();

    if(!name.isEmpty()) t->name = name;
    if(!gender.isEmpty()) t->gender = gender;
    if(!ageStr.isEmpty()) {
        bool ok;
        int age = ageStr.toInt(&ok);
        if(ok && age > 0) t->age = age;
    }
    if(!dept.isEmpty()) t->department = dept;
    if(!title.isEmpty()) t->title = title;

    refreshTeacherTable();
    QMessageBox::information(this, "成功", "教师信息已修改");
}

void PersonManager::on_btnQueryTeacher_clicked()
{
    QString id = ui->editTeacherId->text().trimmed();
    if(id.isEmpty()) {
        QMessageBox::warning(this, "错误", "请输入工号");
        return;
    }

    Teacher* t = teacherList->findById(id);
    if(t) {
        ui->editTeacherName->setText(t->name);
        ui->editTeacherGender->setText(t->gender);
        ui->editTeacherAge->setText(QString::number(t->age));
        ui->editTeacherDept->setText(t->department);
        ui->editTeacherTitle->setText(t->title);
    } else {
        QMessageBox::warning(this, "错误", "未找到该工号");
    }
}

void PersonManager::on_btnRefreshTeacher_clicked()
{
    refreshTeacherTable();
}

void PersonManager::on_btnStatistics_clicked()
{
    QString stats = "===== 人员统计 =====\n\n";

    stats += QString("学生总数: %1\n").arg(studentList->getLength());
    int maleCount = 0, femaleCount = 0, totalAge = 0;
    for (int i = 0; i < studentList->getLength(); i++) {
        Student* s = studentList->getAt(i);
        if (s) {
            if (s->gender == "男") maleCount++;
            else if (s->gender == "女") femaleCount++;
            totalAge += s->age;
        }
    }
    stats += QString("男生: %1, 女生: %2\n").arg(maleCount).arg(femaleCount);
    if (studentList->getLength() > 0) {
        stats += QString("平均年龄: %1\n").arg(totalAge / studentList->getLength());
    }

    stats += "\n";

    stats += QString("教师总数: %1\n").arg(teacherList->getLength());
    maleCount = 0; femaleCount = 0; totalAge = 0;
    for (int i = 0; i < teacherList->getLength(); i++) {
        Teacher* t = teacherList->getAt(i);
        if (t) {
            if (t->gender == "男") maleCount++;
            else if (t->gender == "女") femaleCount++;
            totalAge += t->age;
        }
    }
    stats += QString("男教师: %1, 女教师: %2\n").arg(maleCount).arg(femaleCount);
    if (teacherList->getLength() > 0) {
        stats += QString("平均年龄: %1\n").arg(totalAge / teacherList->getLength());
    }

    QMessageBox::information(this, "统计信息", stats);
}

void PersonManager::on_btnBatchAddStudent_clicked()
{
    bool ok;
    QString text = QInputDialog::getMultiLineText(this, "批量添加学生",
                                                  "格式：学号|姓名|性别|年龄|专业|班级",
                                                  "2024001|孙八|男|20|数据科学|4班\n2024002|周九|女|21|人工智能|3班", &ok);
    if (!ok || text.isEmpty()) return;

    Set<Student>* importSet = new Set<Student>();
    QStringList lines = text.split("\n", Qt::SkipEmptyParts);
    int successCount = 0, failCount = 0;

    foreach (QString line, lines) {
        QStringList parts = line.split("|");
        if (parts.size() != 6) { failCount++; continue; }
        bool ageOk;
        int age = parts[3].trimmed().toInt(&ageOk);
        if (parts[0].trimmed().isEmpty() || parts[1].trimmed().isEmpty() ||
            parts[2].trimmed().isEmpty() || !ageOk || age <= 0 ||
            parts[4].trimmed().isEmpty() || parts[5].trimmed().isEmpty()) {
            failCount++; continue;
        }
        importSet->add(new Student(parts[0].trimmed(), parts[1].trimmed(),
                                   parts[2].trimmed(), age, parts[4].trimmed(), parts[5].trimmed()));
        successCount++;
    }

    if (successCount == 0) { QMessageBox::warning(this, "错误", "没有有效的学生数据"); delete importSet; return; }

    Set<Student>* currentSet = new Set<Student>();
    for (int i = 0; i < studentList->getLength(); i++) {
        currentSet->add(new Student(*(studentList->getAt(i))));
    }

    Set<Student>* mergedSet = *currentSet + *importSet;
    int addedCount = mergedSet->getLength() - studentList->getLength();

    studentList->clear();
    for (int i = 0; i < mergedSet->getLength(); i++) {
        studentList->append(new Student(*(mergedSet->getAt(i))));
    }

    refreshStudentTable();
    QMessageBox::information(this, "批量添加结果",
                             QString("成功: %1 人, 重复: %2 人, 错误: %3 人, 总数: %4")
                                 .arg(addedCount).arg(successCount - addedCount).arg(failCount).arg(studentList->getLength()));

    delete importSet; delete currentSet; delete mergedSet;
}

void PersonManager::on_btnBatchDeleteStudent_clicked()
{
    bool ok;
    QString text = QInputDialog::getMultiLineText(this, "批量删除学生",
                                                  "每行一个学号", "2023001\n2023002", &ok);
    if (!ok || text.isEmpty()) return;

    Set<Student>* deleteSet = new Set<Student>();
    QStringList ids = text.split("\n", Qt::SkipEmptyParts);
    foreach (QString id, ids) {
        id = id.trimmed();
        if (!id.isEmpty()) deleteSet->add(new Student(id, "", "", 0, "", ""));
    }

    if (deleteSet->isEmpty()) { QMessageBox::warning(this, "错误", "没有有效的学号"); delete deleteSet; return; }

    Set<Student>* currentSet = new Set<Student>();
    for (int i = 0; i < studentList->getLength(); i++) {
        currentSet->add(new Student(*(studentList->getAt(i))));
    }

    Set<Student>* resultSet = *currentSet - *deleteSet;
    int deletedCount = currentSet->getLength() - resultSet->getLength();

    studentList->clear();
    for (int i = 0; i < resultSet->getLength(); i++) {
        studentList->append(new Student(*(resultSet->getAt(i))));
    }

    refreshStudentTable();
    QMessageBox::information(this, "批量删除结果",
                             QString("成功删除: %1 人, 未找到: %2 人, 总数: %3")
                                 .arg(deletedCount).arg(deleteSet->getLength() - deletedCount).arg(studentList->getLength()));

    delete deleteSet; delete currentSet; delete resultSet;
}

void PersonManager::on_btnBatchAddTeacher_clicked()
{
    bool ok;
    QString text = QInputDialog::getMultiLineText(this, "批量添加教师",
                                                  "格式：工号|姓名|性别|年龄|部门|职称",
                                                  "T004|刘老师|女|32|计算机学院|讲师\nT005|陈教授|男|50|软件工程系|教授", &ok);
    if (!ok || text.isEmpty()) return;

    Set<Teacher>* importSet = new Set<Teacher>();
    QStringList lines = text.split("\n", Qt::SkipEmptyParts);
    int successCount = 0, failCount = 0;

    foreach (QString line, lines) {
        QStringList parts = line.split("|");
        if (parts.size() != 6) { failCount++; continue; }
        bool ageOk;
        int age = parts[3].trimmed().toInt(&ageOk);
        if (parts[0].trimmed().isEmpty() || parts[1].trimmed().isEmpty() ||
            parts[2].trimmed().isEmpty() || !ageOk || age <= 0 ||
            parts[4].trimmed().isEmpty() || parts[5].trimmed().isEmpty()) {
            failCount++; continue;
        }
        importSet->add(new Teacher(parts[0].trimmed(), parts[1].trimmed(),
                                   parts[2].trimmed(), age, parts[4].trimmed(), parts[5].trimmed()));
        successCount++;
    }

    if (successCount == 0) { QMessageBox::warning(this, "错误", "没有有效的教师数据"); delete importSet; return; }

    Set<Teacher>* currentSet = new Set<Teacher>();
    for (int i = 0; i < teacherList->getLength(); i++) {
        currentSet->add(new Teacher(*(teacherList->getAt(i))));
    }

    Set<Teacher>* mergedSet = *currentSet + *importSet;
    int addedCount = mergedSet->getLength() - teacherList->getLength();

    teacherList->clear();
    for (int i = 0; i < mergedSet->getLength(); i++) {
        teacherList->append(new Teacher(*(mergedSet->getAt(i))));
    }

    refreshTeacherTable();
    QMessageBox::information(this, "批量添加结果",
                             QString("成功: %1 人, 重复: %2 人, 错误: %3 人, 总数: %4")
                                 .arg(addedCount).arg(successCount - addedCount).arg(failCount).arg(teacherList->getLength()));

    delete importSet; delete currentSet; delete mergedSet;
}

void PersonManager::on_btnBatchDeleteTeacher_clicked()
{
    bool ok;
    QString text = QInputDialog::getMultiLineText(this, "批量删除教师",
                                                  "每行一个工号", "T001\nT002", &ok);
    if (!ok || text.isEmpty()) return;

    Set<Teacher>* deleteSet = new Set<Teacher>();
    QStringList ids = text.split("\n", Qt::SkipEmptyParts);
    foreach (QString id, ids) {
        id = id.trimmed();
        if (!id.isEmpty()) deleteSet->add(new Teacher(id, "", "", 0, "", ""));
    }

    if (deleteSet->isEmpty()) { QMessageBox::warning(this, "错误", "没有有效的工号"); delete deleteSet; return; }

    Set<Teacher>* currentSet = new Set<Teacher>();
    for (int i = 0; i < teacherList->getLength(); i++) {
        currentSet->add(new Teacher(*(teacherList->getAt(i))));
    }

    Set<Teacher>* resultSet = *currentSet - *deleteSet;
    int deletedCount = currentSet->getLength() - resultSet->getLength();

    teacherList->clear();
    for (int i = 0; i < resultSet->getLength(); i++) {
        teacherList->append(new Teacher(*(resultSet->getAt(i))));
    }

    refreshTeacherTable();
    QMessageBox::information(this, "批量删除结果",
                             QString("成功删除: %1 人, 未找到: %2 人, 总数: %3")
                                 .arg(deletedCount).arg(deleteSet->getLength() - deletedCount).arg(teacherList->getLength()));

    delete deleteSet; delete currentSet; delete resultSet;
}

void PersonManager::on_btnReturn_clicked()
{
    this->accept();
}