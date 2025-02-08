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

# Destructor (giải phóng bộ nhớ cho class)
- Ví dụ có class DonThuc
```
class DonThuc{
	double HangSo;
	Bien* bien;
	int n;

	DonThuc(){
		bien = nullptr; //tránh trỏ lung tung
		n = 0;
	}

	//Destructor
	~DonThuc(){
		delete[] bien;
		bien = nullptr
	}
}
```
- Các trường hợp trong destructor:
**1. DonThuc a là 1 biến cục bộ trong hàm main**: destrutor tự hủy vì khi main kết thúc, a ra khỏi phạm vi
```
void main(){
	DonThuc a;
	a.NhapDonThuc();
}
```

**2. Cấp phát động:** cần gọi lệnh `delete` để kích hoạt destructor
```
void main(){
	DonThuc* dt = new DonThuc();
	dt->NhapDonThuc;

	//cần gọi delete để kích hoạt destructor
	delete dt;
}
```

# Khi nào thì nên dùng cấp phát động???
- Muốn quản lý vòng đời của đối tượng thủ công
- Số lượng đối tượng không xác định trước.
- Dùng đối tượng trong suốt quá trình & chia sẻ giữa nhiều hàm (con trỏ hàm). => đối tượng cần tồn tại sau khi hàm kết thúc.
- Khi đối tượng quá lớn k muốn nó nằm trên stack.