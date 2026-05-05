#ifndef SET_H
#define SET_H

#include "List.h"

template <typename T>
class Set : public List<T> {
public:
    Set() : List<T>() {}
    ~Set() {}

    // 判断元素是否存在
    bool contains(const T* value) const {
        Node<T>* current = this->head;
        while (current != nullptr) {
            if (current->data->id == value->id) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // 添加元素（不重复）
    void add(T* value) {
        if (!contains(value)) {
            this->append(value);
        }
    }

    // 重载 + 运算符：合并集合并返回新集合
    Set<T>* operator+(const Set<T>& other) const {
        Set<T>* result = new Set<T>();

        // 添加当前集合的所有元素
        Node<T>* current = this->head;
        while (current != nullptr) {
            result->add(new T(*(current->data)));
            current = current->next;
        }

        // 添加另一个集合中不重复的元素
        current = other.head;
        while (current != nullptr) {
            if (!result->contains(current->data)) {
                result->add(new T(*(current->data)));
            }
            current = current->next;
        }

        return result;
    }

    // 重载 - 运算符：集合相减并返回新集合
    Set<T>* operator-(const Set<T>& other) const {
        Set<T>* result = new Set<T>();

        Node<T>* current = this->head;
        while (current != nullptr) {
            if (!other.contains(current->data)) {
                result->add(new T(*(current->data)));
            }
            current = current->next;
        }

        return result;
    }
};

#endif // SET_H