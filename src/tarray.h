/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: Administrator
 *
 * Created on 2017年2月10日, 下午4:36
 */

#ifndef ARRAY_H
#define ARRAY_H
#include "config.h"

template<typename T>
class Array {
    T* Data;
    uint32 _Length;
public:

    Array() {
        _Length = 0;
        Data = nullptr;
    }

    Array(int len) {
        _Length = len;
        Data = new T[len];
    }

    ~Array() {
        if (Data != nullptr) {
            delete Data;
            Data = nullptr;
        }
    }

    uint32 Length() {
        return _Length;
    }

private:

    void operator=(const Array<T>& Other) {
    }

    Array(const Array& Other) {

    }
};

#endif /* ARRAY_H */

