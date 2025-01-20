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

	Node(const T& value) : value(value), next(nullptr)
	{}

	void print() const
	{
		std::cout << value;
	}
};

template<typename T>
class List
{
public:
	Node<T>* head;
	List() : head{ nullptr }
	{}

	void add(const T& value)
	{
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->next = head;
		head = nodePtr;
	}

	void remove()
	{
		if (head != nullptr)
		{
			Node<T>* nodePtr = head;
			head = head->next;
			delete nodePtr;
		}
	}

	Node<T>* find(const T& value) const
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
	}
};

#endif


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

	void AddToHead(const T& value) {
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->next = head;
		nodePtr->prev = nullptr;
		if (head != nullptr) {
			head->prev = nodePtr;
		}
		else {
			back = nodePtr;
		}
		head = nodePtr;
	}

	void AddToTail(const T& value) {
		Node<T>* nodePtr = new Node<T>(value);
		nodePtr->prev = back;
		if (back != nullptr) {
			back->next = nodePtr;
		}
		else {
			head = nodePtr;
		}
		back = nodePtr;
	}

	void DeleteFromHead() {
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

	void DeleteAll() {
		while (head != nullptr) {
			DeleteFromHead();
		}
	}

	void InsertAtPosition(const T& value, int position) {
		if (position < 0) {
			return; // Position cannot be negative
		}
		Node<T>* nodePtr = new Node<T>(value);
		if (position == 0) {
			AddToHead(value);
			return;
		}
		Node<T>* current = head;
		for (int i = 0; i < position - 1; i++) {
			if (current == nullptr) {
				return; // Position out of range
			}
			current = current->next;
		}
		nodePtr->next = current->next;
		nodePtr->prev = current;
		if (current->next != nullptr) {
			current->next->prev = nodePtr;
		}
		else {
			back = nodePtr;
		}
		current->next = nodePtr;
	}

	void DeleteAtPosition(int position) {
		if (position < 0) {
			return; // Position cannot be negative
		}
		if (position == 0) {
			DeleteFromHead();
			return;
		}
		Node<T>* current = head;
		for (int i = 0; i < position; i++) {
			if (current == nullptr) {
				return; // Position out of range
			}
			current = current->next;
		}
		if (current->prev != nullptr) {
			current->prev->next = current->next;
		}
		if (current->next != nullptr) {
			current->next->prev = current->prev;
		}
		else {
			back = current->prev;
		}
		delete current;
	}

	Node<T>* Find(const T& value) const {
		Node<T>* current = head;
		while (current != nullptr) {
			if (current->value == value) {
				return current;
			}
			current = current->next;
		}
		return nullptr;
	}

	int Replace(const T& oldValue, const T& newValue) {
		int count = 0;
		Node<T>* current = head;
		while (current != nullptr) {
			if (current->value == oldValue) {
				current->value = newValue;
				++count;
			}
			current = current->next;
		}
		return count > 0 ? count : -1;
	}

	void Reverse() {
		Node<T>* current = head;
		Node<T>* temp = nullptr;
		while (current != nullptr) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}
		if (temp != nullptr) {
			head = temp->prev;
		}
	}

	void Show() const {
		Node<T>* nodePtr = head;
		while (nodePtr != nullptr) {
			std::cout << nodePtr->value << " ";
			nodePtr = nodePtr->next;
		}
		std::cout << std::endl;
	}
};

#endif
