#include <stdio.h>
#include <utility>
#include "LopPhanSo.h"

void LopPhanSo::NhapPhanSo() {
	printf("Nhap tu so: ");
	scanf_s("%d", &TuSo); //tu so cua doi tuong goi ham

	printf("Nhap mau so: ");
	scanf_s("%d", &MauSo);
}

LopPhanSo LopPhanSo::operator+(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

LopPhanSo LopPhanSo::operator-(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.MauSo - MauSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

LopPhanSo LopPhanSo::operator/(LopPhanSo b) {
	LopPhanSo kq;
	//nghich dao b
	b.NghichDao();
	kq.TuSo = TuSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

LopPhanSo LopPhanSo::operator*(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

bool LopPhanSo::operator==(LopPhanSo b) {
	//Tao ban sao de rut gon
	LopPhanSo A = *this, B = b;
	A.RutGon();
	B.RutGon();
	return (A.TuSo == B.TuSo) && (A.MauSo == B.MauSo);
}

bool LopPhanSo::operator!=(LopPhanSo b) {
	LopPhanSo A = *this, B = b;
	A.RutGon();
	B.RutGon();
	return (A.TuSo != B.MauSo) || (A.MauSo != B.MauSo);
}

bool LopPhanSo::operator>(LopPhanSo b) {
	LopPhanSo A = *this, B = b;
	A.RutGon();
	B.RutGon();

	int TuA = A.TuSo * B.MauSo;
	int TuB = B.TuSo * A.MauSo;
	return TuA > TuB;
}

bool LopPhanSo::operator<(LopPhanSo b) {
	LopPhanSo A = *this, B = b;
	A.RutGon();
	B.RutGon();
	
	int TuA = A.TuSo * B.MauSo;
	int TuB = B.TuSo * A.MauSo;
	return TuA < TuB;
}

void LopPhanSo::SoSanh(LopPhanSo b) {
	//truong hop cung mau
	if (MauSo == b.MauSo) {
		if (TuSo > b.TuSo) {
			printf("Phan so lon hon b\n");
		}
		else if (TuSo < b.TuSo) {
			printf("Phan so be hon b\n");
		}
		else {
			printf("Hai phan so bang nhau\n");
		}
	}
	else {
		//quy dong mau so de so sanh
		int TuA = TuSo * b.MauSo;
		int TuB = b.TuSo * MauSo;
		if (TuA > TuB) {
			printf("Phan so lon hon b\n");
		}
		else if (TuA < TuB) {
			printf("Phan so be hon b\n");
		}
		else {
			printf("Hai phan so bang nhau\n");
		}
	}
}

LopPhanSo LopPhanSo::NghichDao() {
	if (TuSo == 0) {
		printf("Khong the nghich dao phan so\n");
	}
	else {
		std::swap(TuSo, MauSo);
	}
	return *this;
}

void LopPhanSo::XuatPhanSo() {
	printf("%d/%d", TuSo, MauSo);
}

LopPhanSo LopPhanSo::RutGon() {
	int i = UCLN(TuSo, MauSo);
	if (i == 1)
		printf("Khong the rut gon\n");
	else {
		TuSo = TuSo / i;
		MauSo = MauSo / i;
	}

	return *this;
}

int LopPhanSo::DocTuSo() {
	return TuSo;
}

int LopPhanSo::DocMauSo() {
	return MauSo;
}

void LopPhanSo::GanTuSo(int k) {
	TuSo = k;
}

void LopPhanSo::GanMauSo(int k) {
	if (k != 0) {
		TuSo = k;
	}
}

//ham tim uoc chung
int UCLN(int a, int b) {
	if (b == 0) {
		return a;
	}
	return UCLN(b, a % b);
}

