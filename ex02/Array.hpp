#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
private:
	T* arr;
	int len;
public:
	Array() {
		arr = new T[0];
		len = 0;
	}

	Array(int size) {
		arr = new T[size];
		len = size;
	}

	Array(Array &array) {
		*this = array;
	}

	Array& operator=(Array const &array) {
		if (this->arr == array.arr)
			return *this;
		this->len = array.len;
		this->arr = new T[array.len];
		for (int i = 0; i < array.len; i++) {
			this->arr[i] = array.arr[i];
		}
		return *this;
	}

	T& operator[](int i) {
		if (i < 0 || i >= len)
			throw std::exception();
		return this->arr[i];
	}

	int size() const {
		return len;
	}
};

#endif
