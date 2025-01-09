#include <stdio.h>
#include "LopPhanSo.h"

void LopPhanSo::NhapPhanSo() {
	printf("Nhap tu so: ");
	scanf_s("%d", &TuSo); //tu so cua doi tuong goi ham

	printf("Nhap mau so: ");
	scanf_s("%d", &MauSo);
}

LopPhanSo LopPhanSo::TinhTong(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

void LopPhanSo::XuatPhanSo() {
	printf("%d/%d", TuSo, MauSo);
}