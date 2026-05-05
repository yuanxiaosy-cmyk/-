#ifndef STACK_H
#define STACK_H

#include "List.h"

template <typename T>
class Stack : public List<T> {
public:
    Stack() : List<T>() {}
    ~Stack() {}

    // 入栈：在头部添加元素
    void push(T* value) {
        this->prepend(value);
    }

    // 出栈：删除并返回头部元素
    T* pop() {
        if (this->isEmpty()) {
            return nullptr;
        }

        Node<T>* temp = this->head;
        T* data = temp->data;
        temp->data = nullptr; // 防止Node析构时释放data
        this->head = this->head->next;
        if (this->head == nullptr) {
            this->tail = nullptr;
        }
        delete temp;
        this->length--;
        return data;
    }

    // 获取栈顶元素（不删除）
    T* peek() const {
        if (this->isEmpty()) {
            return nullptr;
        }
        return this->head->data;
    }
};

#endif // STACK_H