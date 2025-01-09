#pragma once
class LopPhanSo {

public:

	//thanh phan du lieu
	int TuSo;
	int MauSo;

	//thanh phan xu ly
	void NhapPhanSo();
	LopPhanSo TinhTong(LopPhanSo b);
	LopPhanSo TinhNhan(LopPhanSo b);
	void SoSanh(LopPhanSo b);
	void XuatPhanSo();
	LopPhanSo NghichDao();
	LopPhanSo RutGon();
};

int UCLN(int a, int b);