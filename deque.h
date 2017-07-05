#ifndef _DEQUE_H_
#define _DEQUE_H_

#include "node.h"

#include <iostream>

template<class T>
void BubbleSort(T *deq, size_t size);

template <class T>
class deque {
public:
	deque();

	deque(const deque<T> &deq);

	void Push_back(const T &elem);

	void Pop_back();

	void Push_front(const T &elem);

	void Pop_front();

	size_t Size();

	deque<T> operator+(const deque<T> &deq);

	deque<T> &operator=(const deque<T> &deq);

	bool operator==(const deque<T> &deq);

	bool operator!=(const deque<T> &deq);

	T &Front();

	T &Back();

	bool Empty();

	void DequeSort();

	template<class U>
	friend std::ostream &operator<<(std::ostream &os, const deque<U> &deq);

	void Clear();

	~deque();

private:
	Node<T> *first_;
	Node<T> *last_;
	size_t size_;
};

template <class T>
deque<T> :: deque() {
	size_ = 0;
	first_ = NULL;
	last_ = first_;
}

template<class T>
deque<T> :: deque(const deque<T> &deq) {
	size_ = 0;
	first_ = new Node<T>;
	*this = deq;
}

template<class T>
T & deque<T> :: Front() {
	if (size_ != 0)
		return first_->value_;
	else
		throw 1;
}

template<class T>
T &deque<T> :: Back() {
	if (size_ != 0)
		return last_->value_;
	else
		throw 2;
}

template<class T>
std::ostream& operator<<(std::ostream& os,const deque<T> &deq) {
	if (deq.size_ >= 0) {
		Node<T> *Quit = deq.first_;
		while (Quit != 0) {
			os << Quit->value_ << " ";
			Quit = Quit->next_;
		}
	} else
		throw 3;
	return os;
}

template<class T>
void deque<T> :: Push_back(const T &elem) {
	if (size_ == 0) {
		Node<T> *newelem = new Node<T>;
		newelem->value_ = elem;
		first_ = newelem;
		last_ = first_;
		newelem = NULL;
		delete[] newelem;

	} else {
		Node<T> *newelem = new Node<T>;
		newelem->value_ = elem;
		last_->next_ = newelem;
		last_ = newelem;
		newelem = NULL;
		delete[] newelem;
	}
	++size_;
}

template<class T>
void deque<T> :: Pop_back() {
	if (size_ > 0) {
		if (size_ > 1) {
			Node<T> *D = last_;
			last_ = last_->prev_;
			D = NULL;
			delete D;
		} else {
			delete last_;
			first_ = NULL;
			last_ = first_;
		}
	} else
		throw 4;
	--size_;
}

template<class T>
void deque<T> :: Push_front(const T &elem) {
	if (size_ == 0) {
		Node<T> *newelem = new Node<T>;
		newelem->value_ = elem;
		first_ = last_ = newelem;
		newelem = NULL;
		delete newelem;

	} else {
		Node<T> *newelem = new Node<T>;
		newelem->value_ = elem;
		newelem->next_ = first_;
		first_->prev_ = newelem;
		first_ = newelem;
		newelem = NULL;
		delete newelem;
	}
	++size_;
}

template<class T>
void deque<T> :: Pop_front() {
	if (size_ > 0) {
		if (size_ > 1) {
			Node<T> *New = first_;
			first_ = first_->next_;
			delete New;

		} else {
			delete last_;
			first_ = NULL;
			last_ = first_;
		}

	} else
		throw 5;
	--size_;
}

template<class T>
deque<T> deque<T> :: operator+(const deque<T> &deq) {
	deque<T> P = *this;
	Node<T> *New = deq.first_;
	while (New != NULL) {
		P.Push_back(New->value_);
		New = New->next_;
		++size_;
	}
	return P;
}

template<class T>
bool deque<T> :: operator==(const deque<T> &deq) {
	if (size_ != deq.size_)
		return false;
	Node<T> *New = first_;
	Node<T> *Newdeq = deq.first_;
	while (New != last_) {
		if (New->value_ != Newdeq->value_)
			return false;
		New = New->next_;
		Newdeq = Newdeq->next_;
	}
	if (last_->value_ != deq.last_->value_)
		return false;
	return true;
}

template<class T>
deque<T> &deque<T> :: operator=(const deque<T> &deq) {
	if (*this != deq) {
		Node<T> *Newdeq = deq.first_;
		if (size_ == 0)
			delete first_;
		if (size_ > 0)
			(*this).Clear();
		while (Newdeq != 0) {
			(*this).Push_back(Newdeq->value_);
			Newdeq = Newdeq->next_;
		}
	} else
		return *this;
}

template<class T>
bool deque<T> :: operator!=(const deque<T> &deq) {
	if (*this == deq)
		return false;
	else
		return true;
}

template<class T>
void deque<T> :: Clear() {
	if (size_ > 0) {
		Node<T> *F = first_->next_;
		delete first_;
		Node<T> *tmp = F;
		while (tmp != NULL) {
			Node<T> *tmp1 = tmp->next_;
			delete tmp;
			tmp = tmp1;
		}
		size_ = 0;
		first_ = NULL;
		last_ = first_;
	}
}

template<class T>
bool deque<T> :: Empty() {
	if (size_ == 0)
		return true;
	else
		return false;
}


template<class T>
void deque<T> :: DequeSort() {
	T *mas = new T[size_];
	for (size_t i = 0; i < size_ - 1; ++i) {
		Node<T> *Q = first_;
		mas[i] = Q->value_;
		first_ = Q->next_;
		delete Q;
	}
	mas[size_ - 1] = last_->value_;
	BubbleSort(mas, size_);
	deque<T> Q;
	for (size_t i = 0; i < size_; ++i)
		Q.Push_back(mas[i]);
	*this = Q;
	delete[] mas;
}

template<class T>
void BubbleSort(T *deq, size_t size) {
	for (size_t i = 0; i < size - 1; ++i)
		for (int j = i + 1; j < size; ++j) {
			if (deq[i] >= deq[j]) {
				T tmp = deq[i];
				deq[i] = deq[j];
				deq[j] = tmp;
			}
		}
}

template<class T>
size_t deque<T> :: Size() {
	return size_;
}

template<class T>
deque<T> :: ~deque() {
	(*this).Clear();
}

#endif
