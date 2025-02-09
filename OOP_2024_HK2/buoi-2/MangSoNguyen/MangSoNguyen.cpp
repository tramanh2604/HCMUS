#include <stdio.h>
#include <iostream>
#include "MangSoNguyen.h"

using namespace std;

void Mang::NhapMang() {
	cout << "Nhap so luong ptu: ";
	cin >> n;

	arr = new int[n];
	//kiem tra cap phat
	if (!arr) {
		cout << "Loi cap phat bo nho" << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		cin >> arr[i];
	}
}

void Mang::XuatMang() {
	if (!arr) {
		printf("Mang chua duoc khoi tao\n");
		return;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int Mang::KichThuoc() {
	// return sizeof(arr) / sizeof(arr[0]);
	// sai vì arr đang là con trỏ, nên chỉ có kích thước default là 4 hoặc 8 byte
	return n;
}

int Mang::PtuTaiViTri() {
	int k;
	printf("Vi tri: ");
	scanf_s("%d", &k);
	return arr[k];
}

void Mang::GanGiaTri() {
	int k;
	printf("Vi tri muon gan: ");
	scanf_s("%d", &k);

	int gt;
	printf("Gia tri muon gan: ");
	scanf_s("%d", &gt);

	arr[k] = gt;
}

int Mang::TimPtu() {
	int gt;
	printf("Gia tri can tim: ");
	scanf_s("%d", &gt);

	for (int i = 0; i < n; i++) {
		if (arr[i] == gt) {
			return i;
		}
	}
	return -1;
}

//selection sort
void Mang::Tang() {
	// i < n - 1
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}

		}
		//Hoan doi, co the dung ham swap
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;

	}
}

//selection sort
void Mang::Giam() {
	for (int i = 0; i < n - 1; i++) {
		int maxIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}
		//hoan doi
		int temp = arr[i];
		arr[i] = arr[maxIndex];
		arr[maxIndex] = temp;
	}
}