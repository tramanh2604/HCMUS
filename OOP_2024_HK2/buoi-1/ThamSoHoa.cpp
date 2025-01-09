#include <stdio.h>
#include <iostream>
using namespace std;

//Tham số hóa kiểu 2
struct PhanSo {
	int TuSo;
	int MauSo;
};

//operator+ là nạp chồng, cho các kiểu dữ liệu tự định nghĩa
PhanSo operator+(PhanSo a, PhanSo b) {
	PhanSo kq;
	kq.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
	kq.MauSo = a.MauSo * b.MauSo;
	return kq;
}

/* Bỏ
PhanSo Cong(PhanSo a, PhanSo b) {
	return a + b;
}

int Cong(int x, int y){
	return x + y;
}
*/

//Viết 1 hàm duy nhất, ĐỘC LẬP kiểu dữ liệu
template <class T>
T Cong2PhanTu(T a, T b) {
	return a + b;
}

//hàm tìm max trong arr, độc lập kiểu dữ liệu
template <class T>
void NhapMang(T*& a, int& n) {
	printf("Nhap so luong phan tu trong mang");
	scanf_s("%d", &n);

	a = new T[n];

	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

template <class T>
T TimMax(T* a, int n) {
	T max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

template <class T>
T TimPhanTuTotNhat(T a[100], int n, bool (*latotHon)(T a, T b)) {
	T kq= a[0];
	for (int i = 1; i < n; i++) {
		if (latotHon(a[i], kq)) {
			kq = a[i];
		}
	}
	return kq;
}

template <class T>
bool laLonHon(T a, T b) {
	return a > b;
}

template <class T>
bool laBeHon(T a, T b) {
	return a < b;
}

void main() {
	
}