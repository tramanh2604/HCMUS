# Kế thừa
## 1. Khái niệm kế thừa
- Kế thừa: định nghĩa lớp mới dựa trên những lớp đã có.
	+ B kế thừa A (B: A): B có tất cả những gì mà A có. 
- Ví dụ: 
```
class A
	- a1, a2
	- FA1, FA2, FA3
```
```
class B: A
	- b1, **a1, a2**
	- FB1, FB2, **FA1, FA2, FA3**
```
- Lúc này B có thể thực hiện những gì mà A có.
```
B b;
b.FB1();
b.FA1();
```
- Có 2 cách thiết kế:
	+ cho B kế thừa A, khai báo thêm thành phần của B
	+ tạo lớp trung gian (lớp cha) chứa thành phần chung; cho A,B kế thừa từ lớp cha => Lớp cơ sở
![Kế thừa](/images/kethua.PNG)

## 2. Cài đặt
- Khai báo: class <lớp_kế_thừa>: <loại_kế_thừa><Lớp_cơ_sở>
	+ Ví dụ: `class A: public C`
- Loại kế thừa: public, private, protected

![Ví dụ](/images/vidu.PNG)

## 3. Tầm vực trong kế thừa
- **private**: truy xuất bên trong class.
- **protected**: đc phép từ bên trong class (giống private) và các lớp kế thừa từ class tương ứng.
- **public**: có thể truy xuất ở bất kì vị trí nào.

- Ví dụ: class NhanVienSanXuat kế thừa NhanVien:
	+ Có thành phần ten, diachi
	+ Nhưng k truy xuất đc trong phạm vi class NVSX.

## 4. Hàm tạo
- Khi lớp cha có hàm tạo có tham số, thì khi lớp con sử dụng, nó gọi lại lớp cha => nhưng lớp cha đã có hàm tạo nên CT k tự phát sinh hàm tạo k có tham số.

=> Tự tạo riêng cho lớp con.

- Khi tạo đối tượng, gọi hàm tạo của lớp cha trc rồi mới gọi hàm tạo của lớp con.

- Khi hủy (destructor) thì hủy lớp con trước.
