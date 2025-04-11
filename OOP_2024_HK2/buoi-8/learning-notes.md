# 1. Hàm tạo
- Chỉ định hàm tạo từ lớp cha: `NhanVienSX::NhanVienSX():NhanVien()`

# 2. Toán tử gán bằng
- Có thể sử dụng lại operator= của lớp cha.

# 3. Định nghĩa lại phương thức

# 4. Quan hệ IS-A
- Lớp A quan hệ IS-A với lớp B.
	+ A là 1 trường hợp đặt biệt của B.
	+ A cùng loại vs B.
- Ví dụ: GVCN là 1 loại GV đặc biệt.
- Chúng ta chỉ cho class A kế thừa class B khi và chỉ khi "A is a B".

=> Cho A kế thừa B.
`class ConMeo: public ConVat{}`

# 5. Quan hệ HAS-A
- Lớp A quan hệ HAS-A với lớp B.
	+ A bao hàm B.
	+ A chứa B
	+ B là 1 bộ phận của A.
- Ví dụ: ChiecXe chứa BanhXe

=> Cho B là 1 thuộc tính của A.

```
class ChiecXe{
private:
	BanhXe *m_banhXe;
}
```