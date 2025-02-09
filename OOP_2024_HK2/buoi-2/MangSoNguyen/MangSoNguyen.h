#pragma once
class Mang {
private:
	int* arr = nullptr;
	int n; //so luong phan tu trong mang

public:
	~Mang() {
		//kiem tra truoc khi thuc hien destructor
		if (arr) {
			delete[] arr;
			arr = nullptr;
		}
	}

	void NhapMang();
	void XuatMang();
	int KichThuoc();
	int PtuTaiViTri();
	void GanGiaTri();
	int TimPtu();
	void Tang();
	void Giam();
};