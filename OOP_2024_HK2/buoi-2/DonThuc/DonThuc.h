#pragma once
class DonThuc {
private:
	struct Bien {
		char TenBien;
		int SoMu;
	};

	//thanh phan du lieu
	double HangSo;
	Bien* bien = NULL;
	int n; //so luong bien trong don thuc

public:
	~DonThuc() {
		delete[] bien;
		bien = nullptr;
	}
	//thanh phan xu ly
	void NhapDonThuc();
	void XuatDonThuc();
	void HeSo();
	void HeMu();
	double TinhGiaTri();
	void DaoHam();
	void CongDonThuc(DonThuc b);
	void Nhan(DonThuc b);
};