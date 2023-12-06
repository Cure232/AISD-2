#pragma once

#include <iostream>

template<typename T>
class LinkedList {
protected:
	struct Node {
		Node* next;
		Node* prev;
		T data;
	};

private:
	Node items[];
	int length = 0;
	Node* head_ptr = nullptr;
	Node* tail_ptr = nullptr;

public:
	LinkedList() {

	}

	LinkedList(const LinkedList& ll) {

	}

	//LinkedList() Для случайного заполнения

	~LinkedList() {

	}

	LinkedList& operator=(const LinkedList& rhs) {

	}

	void push_tail(T item) {

	}

	void push_tail(LinkedList list) {

	}

	void push_head(T item) {

	}

	void push_head(LinkedList list) {

	}

	T pop_head() {

	}

	T pop_tail() {

	}

	void delete_node(const T& to_delete) {

	}

	const T& operator[](const int& i) const {
		return items[i].data;
	}

	T& operator[](const int& i) {
		return items[i].data;
	}
};