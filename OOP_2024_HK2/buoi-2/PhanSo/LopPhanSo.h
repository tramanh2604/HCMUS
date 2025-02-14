#pragma once
class LopPhanSo {
private:
	//thanh phan du lieu
	int TuSo;
	int MauSo;

public:
	//thanh phan xu ly
	void NhapPhanSo();
	LopPhanSo operator+(LopPhanSo b); //doi ten thanh operator+
	LopPhanSo operator-(LopPhanSo b);
	LopPhanSo operator*(LopPhanSo b);
	LopPhanSo operator/(LopPhanSo b);
	void SoSanh(LopPhanSo b);
	bool operator==(LopPhanSo b);
	bool operator!=(LopPhanSo b);
	bool operator>(LopPhanSo b);
	bool operator<(LopPhanSo b);
	void XuatPhanSo();
	LopPhanSo NghichDao();
	LopPhanSo RutGon();
	int DocTuSo();
	int DocMauSo();
	void GanTuSo(int k);
	void GanMauSo(int k);
};

int UCLN(int a, int b);