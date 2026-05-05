#ifndef LIST_H
#define LIST_H

#include "Node.h"

template <typename T>
class List {
protected:
    Node<T>* head;  // 头指针
    Node<T>* tail;  // 尾指针
    int length;     // 链表长度

public:
    // 构造函数
    List() : head(nullptr), tail(nullptr), length(0) {}

    // 析构函数：释放整个链表的内存
    virtual ~List() {
        clear();
    }

    // 清空链表
    void clear() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* temp = current;
            current = current->next;
            delete temp; // 会自动调用Node的析构函数释放data
        }
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    // 判断链表是否为空
    bool isEmpty() const {
        return head == nullptr;
    }

    // 获取链表长度
    int getLength() const {
        return length;
    }

    // 在链表末尾添加元素（尾插法）
    virtual void append(T* value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            head = tail = newNode;
        } else {            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    // 在链表头部添加元素（头插法）
    virtual void prepend(T* value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    // 删除指定位置的元素
    bool removeAt(int index) {
        if (index < 0 || index >= length || isEmpty()) {
            return false;
        }

        Node<T>* temp;
        if (index == 0) {
            temp = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
        } else {
            Node<T>* current = head;
            for (int i = 0; i < index - 1; i++) {
                current = current->next;
            }
            temp = current->next;
            current->next = temp->next;
            if (temp == tail) {
                tail = current;
            }
        }
        delete temp;
        length--;
        return true;
    }

    // 获取指定位置的元素
    T* getAt(int index) const {
        if (index < 0 || index >= length || isEmpty()) {
            return nullptr;
        }

        Node<T>* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    // 查找元素（根据ID）
    T* findById(const QString& id) const {
        Node<T>* current = head;
        while (current != nullptr) {
            if (current->data->id == id) {
                return current->data;
            }
            current = current->next;
        }
        return nullptr;
    }

    // 遍历链表并执行操作
    void traverse(void (*callback)(T*)) const {
        Node<T>* current = head;
        while (current != nullptr) {
            callback(current->data);
            current = current->next;
        }
    }

    // 获取头指针（用于排序等操作）
    Node<T>*& getHead() {
        return head;
    }

    // 设置头指针
    void setHead(Node<T>* newHead) {
        head = newHead;
    }
};

#endif // LIST_H