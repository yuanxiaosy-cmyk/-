#ifndef NODE_H
#define NODE_H

#include <QString>

// 人员信息基类
class Person {
public:
    QString id;         // 编号
    QString name;       // 姓名
    QString gender;     // 性别
    int age;            // 年龄

    Person() : age(0) {}
    Person(QString i, QString n, QString g, int a)
        : id(i), name(n), gender(g), age(a) {}
    
    virtual ~Person() {}
    virtual QString getType() const { return "Person"; }
    virtual QString toString() const {
        return QString("ID: %1, Name: %2, Gender: %3, Age: %4")
               .arg(id).arg(name).arg(gender).arg(age);
    }
};

// 学生类（继承Person）
class Student : public Person {
public:
    QString major;      // 专业
    QString className;  // 班级

    Student() {}
    Student(QString i, QString n, QString g, int a, QString m, QString c)
        : Person(i, n, g, a), major(m), className(c) {}
    
    QString getType() const override { return "Student"; }
    QString toString() const override {
        return QString("Student - ID: %1, Name: %2, Gender: %3, Age: %4, Major: %5, Class: %6")
               .arg(id).arg(name).arg(gender).arg(age).arg(major).arg(className);
    }
};

// 教师类（继承Person）
class Teacher : public Person {
public:
    QString department; // 部门
    QString title;      // 职称

    Teacher() {}
    Teacher(QString i, QString n, QString g, int a, QString d, QString t)
        : Person(i, n, g, a), department(d), title(t) {}
    
    QString getType() const override { return "Teacher"; }
    QString toString() const override {
        return QString("Teacher - ID: %1, Name: %2, Gender: %3, Age: %4, Dept: %5, Title: %6")
               .arg(id).arg(name).arg(gender).arg(age).arg(department).arg(title);
    }
};

// 链表节点类
template <typename T>
class Node {
public:
    T* data;       // 指向动态分配内存的指针
    Node<T>* next; // 指向下一个节点的指针

    // 构造函数
    Node(T* value = nullptr) : data(value), next(nullptr) {}

    // 析构函数：释放动态分配的data内存
    ~Node() {
        if (data != nullptr) {
            delete data;
            data = nullptr;
        }
        next = nullptr;
    }
};

#endif // NODE_H