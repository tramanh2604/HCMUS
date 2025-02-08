#include <stdio.h>
#include <iostream>
#include "DonThuc.h"

using namespace std;

void DonThuc::NhapDonThuc() {
	printf("Nhap hang so: ");
	scanf_s("%lf", &HangSo);

	printf("Nhap so luong bien: ");
	scanf_s("%d", &n);

	bien = new Bien[n];

	for (int i = 0; i < n; i++) {
		printf("Ten bien %d: ", i+1);
		scanf_s(" %c", &bien[i].TenBien, 1);

		printf("Mu: ");
		scanf_s("%d", &bien[i].SoMu);
	}
}

void DonThuc::XuatDonThuc() {
	cout << HangSo;
	for (int i = 0; i < n; i++) {
		cout << bien[i].TenBien << "^" << bien[i].SoMu;
	}
	printf("\n");
}

void DonThuc::HeSo() {
	cout << HangSo;
	printf("\n");
}

void DonThuc::HeMu() {
	int heMu = 0;
	for (int i = 0; i < n; i++) {
		heMu += bien[i].SoMu;
	}
	cout << heMu;
	printf("\n");
}

double DonThuc::TinhGiaTri() {
	int Tong = HangSo;
	for (int i = 0; i < n; i++) {
		float giatri;
		printf("Nhap vao gia tri cua bien %c: ", bien[i].TenBien);
		scanf_s("%f", &giatri);
		Tong *= pow(giatri, bien[i].SoMu);
	}
	return Tong;
}

void DonThuc::DaoHam() {
	char biendh;
	printf("Chon bien muon dao ham: ");
	scanf_s(" %c", &biendh);

	for (int i = 0; i < n; i++) {
		if (biendh == bien[i].TenBien) {
			HangSo = HangSo * bien[i].SoMu;
			bien[i].SoMu--;
		}
	}
}

void DonThuc::CongDonThuc(DonThuc b) {
	//kiem tra bien cua don thuc
	if (n != b.n) {
		cout << "Khong cong duoc don thuc" << "\n";
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (bien[i].TenBien != b.bien[i].TenBien || bien[i].SoMu != b.bien[i].SoMu) {
				return;
			}
		}
	}

	//neu cung bac, cong hang so 2 don thuc
	HangSo += b.HangSo;
}

void DonThuc::Nhan(DonThuc b) {
	//Nhan hang so
	HangSo *= b.HangSo;

	//tao mang tam de chua bien ketqua
	Bien* newBien = new Bien[n + b.n];
	int newSize = 0;

	//copy bien vao mang moi
	for (int i = 0; i < n; i++) {
		newBien[newSize++] = bien[i];
	}

	//xu ly bien cua b
	for (int i = 0; i < b.n; i++) {
		bool found = false;
		for (int j = 0; j < newSize; j++) {
			if (newBien[j].TenBien == b.bien[i].TenBien) {
				newBien[j].SoMu += b.bien[i].SoMu;
				found = true;
				break;
			}
		}
		if (!found) {
			newBien[newSize++] = b.bien[i]; //them bien moi vao danh sach
		}
	}

	//giai phong mang cu
	delete[] bien;
	bien = new Bien[newSize];
	for (int i = 0; i < newSize; i++) {
		bien[i] = newBien[i];
	}
	n = newSize;

	//giai phong bo nho tam
	delete[] newBien;
}
