#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>

template<class T>
struct Node {
	T value_;
	Node<T> *next_;
	Node<T> *prev_;

	Node() : next_(NULL), prev_(NULL) {}
};

#endif
