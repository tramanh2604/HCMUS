#include <stdio.h>
#include <math.h>
#include "LopDiem.h"

void LopDiem::NhapDiem() {
	printf("Nhap x: ");
	scanf_s("%d", &x); //tu so cua doi tuong goi ham

	printf("Nhap y: ");
	scanf_s("%d", &y);
}

float LopDiem::TinhKhoangCach(LopDiem b) {
	LopDiem kq;
	kq.x = x - b.x;
	kq.y = y - b.y;

	return sqrt(kq.x * kq.x + kq.y * kq.y);
}

