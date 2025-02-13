#include <stdio.h>
#include <iostream>
#include "QuanLySV.h"

using namespace std;

void SV::Nhap() {
	cout << "Nhap ho ten: ";
	cin.getline(hoten, 50);

	cout << "Nhap diem Toan: ";
	cin >> Toan;

	cout << "Nhap diem Van: ";
	cin >> Van;
}

void SV::Xuat() {
	cout << "Ho ten: " << hoten << endl;
	cout << "Toan: " << Toan << endl;
	cout << "Van: " << Van << endl;
}

char* SV::Hoten() {
	return hoten;
}

float SV::GetToan() {
	return Toan;
}

float SV::GetVan() {
	return Van;
}

void SV::GanHoTen() {
	cout << "Nhap ho ten: ";
	cin.getline(hoten, 50);
}

void SV::GanToan() {
	cout << "Nhap diem Toan: ";
	cin >> Toan;
}

void SV::GanVan() {
	cout << "Nhap diem Van: ";
	cin >> Van;
}

float SV::DTB() {
	return (Toan + Van) / 2;
}

void SV::XepLoai(float dtb) {
	if (dtb >= 8.0) {
		printf("Gioi\n");
	}
	else if (dtb >= 7 && dtb < 8) {
		printf("Kha\n");
	}
	else if (dtb >= 5 && dtb < 7) {
		printf("Trung binh\n");
	}
	else {
		printf("Yeu\n");
	}
}