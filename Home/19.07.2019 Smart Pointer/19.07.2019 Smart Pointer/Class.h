#pragma once
#include<iostream>
#include<memory>
#include<string>
using namespace std;
template <typename T>
class UniquePtr {
private:
	T*ptr;
public:
	UniquePtr() :ptr(nullptr) {};
	UniquePtr(T NewPtr) : ptr(NewPtr) {};
	~UniquePtr() { delete ptr };

	T * operator->()const 
		return ptr;

	T operator *()const 
		return ptr;
	
	bool operator bool() {
		if (ptr == nullptr) {
			return false;
		}
		return true;
	}

	T operator=(UniquePtr<T> & other) = delete;
	T operator=(UniquePtr<T> && other) {
		this->ptr = other.ptr;
		other.ptr = nullptr;
	}

	T * Get()
		return ptr;

	T * Release()const {
		T NewPtr = new T(ptr);
		ptr = nullptr;
		return NewPtr;
	}

	T * Reset()const {
		if (ptr = nullptr) {

		}
	}

};

class SharedPtr {
	



};