#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
template <typename T>
class Node
{
public:
	T value;
	Node* next;
	Node* prev;

	Node(const T& value) : value(value), next(nullptr), prev(nullptr)
	{}

	void print() const
	{
		std::cout << value;
	}
}; 


template<typename T>

class Doubly_list
{
public:
	Node<T>* head;
	Node<T>* tail;
	List() : head{ nullptr }, tail(nullptr) 
	{}
	/*void add(const T& value)
	{
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->next = head;
		head = nodePtr;
	}*/
	void AddToHead(const T& value) {
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->next = head;
		head->prev = nodePtr;
		head = nodePtr;
	}

	void AddToTail(const T& value) {
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->prev = tail;
		tail->next = nodePtr;
		tail = nodePtr;
	}

	//void remove()
	//{
	//	if (head != nullptr)
	//	{
	//		Node<T>* nodePtr = head;
	//		head = head->next;
	//		delete nodePtr;
	// 
	//	}
	//}

	void DeleteFromHead() {
		if (head != nullptr)
		{
			Node<T>* nodePtr = head;
			head = head->next;
			delete nodePtr;
		}
	}
	void DeleteFromTail() {
		if (tail != nullptr) {
			Node<T>* nodePtr = tail;
			tail = tail->prev;
			delete nodePtr;
		}
		
	}
};
#endif
