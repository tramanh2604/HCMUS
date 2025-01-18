# Tầm vực
- Tầm ảnh hưởng, phạm vi hoạt động
	+ public: ở đâu cũng đc
	+ private: chỉ đc đụng vào trong lớp A (k được dùng trong hàm main)
	+ protected
- Khuyến khích thành phần data là private để che dấu nó đi, hạn chế truy xuất. Các hàm là public.

## Ví dụ
- Có class PhanSo, nếu đặt các thành phần data là public, người khác sẽ gán đc giá trị (có thể sai)
```
int main(){
	PhanSo a;

	a.Tu = 1;
	a.Mau = 0; //Vô lý
}
```
- Để tránh được chuyện đó, chuyển thành phần data thành private (an toàn hơn), muốn nhập thì sử dụng hàm NhapPhanSo().
- Hoặc nếu muốn truy xuất tử, mẫu => tạo các hàm ví dụ DocMauSo(), GanMauSo() thuộc class PhanSo.