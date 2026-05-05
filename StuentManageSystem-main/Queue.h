#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"

template <typename T>
class Queue : public List<T> {
public:
    Queue() : List<T>() {}
    ~Queue() {}

    // 入队：在尾部添加元素
    void enqueue(T* value) {
        this->append(value);
    }

    // 出队：删除并返回头部元素
    T* dequeue() {
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

    // 获取队首元素（不删除）
    T* front() const {
        if (this->isEmpty()) {
            return nullptr;
        }
        return this->head->data;
    }
};

#endif // QUEUE_H