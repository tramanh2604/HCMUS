# operator
- Trong C++ có thể tự định nghĩa operator.
- Ví dụ ở hàm cộng 2 phân số, thông thường chúng ta sẽ khai báo như vầy:
```
LopPhanSo LopPhanSo::Cong(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

# trong main sẽ gọi
kq = a.Cong(b);
```
- Thay tên hàm bằng các operator phù hợp
```
LopPhanSo LopPhanSo::opearator+(LopPhanSo b) {
	LopPhanSo kq;
	kq.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	kq.MauSo = MauSo * b.MauSo;
	return kq;
}

# trong main sẽ gọi
kq = a + b;
```
=> Gọn hơn