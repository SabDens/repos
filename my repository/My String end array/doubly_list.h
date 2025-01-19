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
class Doubly_List
{
public:
	Node<T>* head;
	Node<T>* back;


	Doubly_List() : head{ nullptr }, back{ nullptr }
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
		nodePtr->prev = nullptr;
		head = nodePtr;
		back = nodePtr;
	}
	void AddToTail(const T& value) {
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->prev = back;
		if (back != nullptr) {
			back->next = nodePtr;
		}
		back = nodePtr;
	}
	void DeleteFromHead() {
		if (head == nullptr) {
			return;
		}
		Node<T>* nodePtr = head;
		head = head->next;
		if (head != nullptr) {
			head->prev = nullptr;
		}
		else {
			back = nullptr;
		}
		delete nodePtr;


	}

	void DeleteFromTail() {
		if (back == nullptr) {
			return;
		}
		Node<T>* nodePtr = back;
		back = back->prev;
		if (back != nullptr) {
			back->next = nullptr;
		}
		else {
			head = nullptr;
		}
		delete nodePtr;
	}
	/*void remove()
	{
		if (head != nullptr)
		{
			Node<T>* nodePtr = head;
			head = head->next;
			delete nodePtr;
		}
	}*/
	void DeleteAll() {
		while (head != nullptr) {
			DeleteFromHead();
		}
	}


	/*Node<T>* find(const T& value) const
	{
		for (Node<T>* nodePtr = head;
			nodePtr != nullptr;
			nodePtr = nodePtr->next)
		{
			if (nodePtr->value == value)
			{
				return nodePtr;
			}
		}
		return nullptr;
	}

	Node<T>* findPrev(const T& value) const
	{
		if (head == nullptr)
		{
			return nullptr;
		}
		for (Node<T>* nodePtr = head->next, *prevPtr = head;
			nodePtr != nullptr;
			nodePtr = nodePtr->next, prevPtr = prevPtr->next)
		{
			if (nodePtr->value == value)
			{
				return prevPtr;
			}
		}
		return nullptr;
	}

	Node<T>* addAfter(const T& value, Node<T>* afterPtr)
	{
		if (afterPtr == nullptr)
		{
			return nullptr;
		}
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->next = afterPtr->next;
		afterPtr->next = nodePtr;
		return afterPtr->next;
	}

	Node<T>* removeAfter(Node<T>* afterPtr)
	{
		if (afterPtr != nullptr && afterPtr->next != nullptr)
		{
			Node<T>* nodePtr = afterPtr->next;
			afterPtr->next = afterPtr->next->next;
			delete nodePtr;
		}
		return afterPtr;
	}

	void clear()
	{
		while (head != nullptr)
		{
			remove();
		}
	}

	void doForEach(void(*func)(Node<T>* nodePtr))
	{
		for (Node<T>* nodePtr = head; nodePtr != nullptr; nodePtr = nodePtr->next)
		{
			func(nodePtr);
		}
	}

	static void printNode(Node<T>* nodePtr)
	{
		nodePtr->print();
		std::cout << " > ";
	}

	void print()
	{
		std::cout << " > ";
		doForEach(printNode);
		std::cout << std::endl;
	}*/

	void Show() const {
		Node<T>* nodePtr = head;
		while (nodePtr != nullptr) {
			std::cout << nodePtr->value << " ";
			nodePtr = nodePtr->next;

		}
	}
	void Reverse() {
		Node<T>* temp_h = head;
		Node<T>* temp_n = nullptr;

		while (temp_h != nullptr) {
			temp_n = temp_h->prev;
			temp_h->prev = temp_h->next;
			temp_h->next = temp_n;
			temp_h = temp_h->prev;

		}
		if (temp != nullptr) {
			head = temp_n->prev;

		}
	}
};

#endif