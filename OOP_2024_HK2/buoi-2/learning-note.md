# Chapter 2 - OOP
## Lập trình hướng thủ tục
- Với lập trình hướng thủ tục, bt tính tổng 2 phân số, ta sẽ:
```
//nhap vao 2 phan so, tinh tong
PhanSo a, b;

//Nhap phan so a <> HANH DONG
a = NhapPhanSo();

//Nhap phan so b <> HANH DONG
b = NhapPhanSo();
//Tinh tong <> HANH DONG
kq = TinhTong(a,b);

//Xuat KQ
print("KQ", kq)
```
=> Mọi thứ bắt đầu bởi hàm, hành động làm gốc.

=> OOP thì data làm gốc, data thực hiện hàm.

- Objects bao gồm 2 phần:
	+ Thành phần dữ liệu: TuSo, MauSo.
	+ Thành phần xử lý: NhapPhanSo, TinhTong, Xuat

## Class & Object
- Class quyết định cấu trúc của Object, là khuôn mẫu tạo ra Object.
- Class gom cả 2 thành phần của Object

- Ví dụ, bt tính tổng 2 phân số, ta sẽ:

**LopPhanSo.h**
```
#pragma once
class LopPhanSo {

public:

	//thanh phan du lieu
	int TuSo;
	int MauSo;

	//thanh phan xu ly
	void NhapPhanSo();
	LopPhanSo TinhTong(LopPhanSo b);
	void XuatPhanSo();
};
```
**LaPhanSo.cpp**
```
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
```

**main.cpp**
```
void main() {
	LopPhanSo a, b;
	a.NhapPhanSo();
	b.NhapPhanSo();
	
	LopPhanSo kq;
	kq = a.TinhTong(b);
	
	kq.XuatPhanSo();
}
```