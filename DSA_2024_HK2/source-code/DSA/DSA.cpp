#include <stdio.h>
#include <iostream>

using namespace std;

struct NODE {
	int data;
	NODE* pNext;
};

NODE* createNODE(int k){
	NODE* p = new NODE;
	p->data = k;
	p->pNext = NULL;
	return p;
}

void insertHead(NODE *&pHead, int k) {
	NODE* pNew = createNode(k);

	//DSLK rong
	if (pHead == nullptr) {
		pHead = pNew;
	}

	//DSLK da co node
	else {
		pNew->pNext = pHead;
		pHead = pNew;
	}
}

void insertTail(NODE*& pHead, int k) {
	NODE* pNew = createNode(k);

	//DSLK rong
	if (pHead == nullptr) {
		pHead = pNew;
	}

	//DSLK da co node
	else {
		nODE* p = pHead;
		while (p->pNext != nullptr) {
			p = p->pNext;
		}
		p->pNext = pNew;
	}
}

void deleteHead(NODE*& pHead) {
	if (pHead != NULL) {
		NODE* p = pHead;
		pHead = pHead->pNext;
		delete p;
	}
}

void deleteTail(NODE*& pHead) {
	if (pHead != nullptr) {
		if (pHead->pNext == NULL) {

			delete pHead;
		}

		if (pHead != nullptr) {
			NODE* p = pHead;
			while (p->pNext->pNext != nullptr) {
				NODE* pTemp = p->pNext;
				delete pTemp;
				p->pNext = nullptr;
			}
		}
	}
}

int main() {
	NODE* pHead = NULL;


	return 0;
}