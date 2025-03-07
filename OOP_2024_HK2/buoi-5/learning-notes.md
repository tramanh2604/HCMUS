# Chương 3: Vòng đời đối tượng
## 1. Phương thức khởi tạo 
- Làm khai sinh cho đối tượng
- Tự động gọi khi khai báo đối tượng
- Có tên trùng lớp
- Hàm tạo:
```
PhanSo::PhanSo(){
	Tu = 0;
	Mau = 1;
}
```
- Vậy trong hàm main:
```
int main(){
	PhanSo a;
}
```
=> Giá trị ban đầu của a là 0/1 do hàm tạo đc tự động gọi ngay khi a đc khai báo.
- Có thể tạo nhiềm hàm tạo, kèm theo các tham số
```
PhanSo::PhanSo(int a){
	Tu = a;
	Mau = 1;
}
```
```
PhanSo::PhanSo(int a, int b){
	if(b == 0) m = 1;
	if(b < 0){
		a = -a;
		b = -b;
	}
	Tu = a;
	Mau = b;
}
```
- Trong trường hợp class k cài đặt hàm tạo nào cả, trình biên dịch sẽ tự động phát sinh hàm tạo k đối số `LopPhanSo();`

## 1.1 Hàm tạo sao chép
- Giá trị của nó đc sao chép từ hàm tạo khác.
- Hàm tạo là 1 LopPhanSo khác:
```
LopPhanSo::LopPhanSo(const LopPhanSo& a) {
	TuSo = a.TuSo;
	MauSo = a.MauSo;
}
```
- Truyền tham chiếu vì nó sẽ k bị tạo bản sao. Nếu truyền tham trị nó sẽ tự động gọi hàm tạo sao chép.

- Các trường hợp hàm tạo sao chép đc gọi
- TH1: `void Test(LopPhanSo a)` - Truyền tham trị.
- TH2: `LopPhanSo d(c);`
- TH3: `LopPhanSo d = a;`

**Không tạo hàm tạo sao chép nào**
- Tự động phát sinh hàm tạo sao chép
- Mặc định gán từng thành phần bằng nhau

___
**Lời khuyên:**
- 1 lớp nên có tối thiểu 3 phương thức khởi tạo
```
PhanSo();
PhanSo(const PhanSo &p);
PhanSo(int tu, int mau);
```

- Toán tử gán = :
`void LoPhanSo::operator=(LopPhanSo b)`
=> Vẫn bị tạo hàm gọi sao chép

## 2. Phương thức hủy
- Tự động gọi khi đối tượng bị hủy
- Duy nhất cho mỗi lớp
- Cấu trúc: `~<tên_lớp>`