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
