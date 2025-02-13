#pragma once
class SV {
private:
	char hoten[50];
	float Toan;
	float Van;
public:
	void Nhap();
	void Xuat();
	char* Hoten();
	float GetToan();
	float GetVan();
	void GanHoTen();
	void GanToan();
	void GanVan();
	float DTB();
	void XepLoai(float dtb);
};