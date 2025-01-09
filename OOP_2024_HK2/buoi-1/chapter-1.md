# Chương 1: Course Overview

## 1. Chuẩn và quy ước lập trình
- Đặt tên: quan tâm nhiều nhất.
- Viết câu lệnh
- Chú thích

[Google Style for C/C++](https://google.github.io/styleguide/cppguide.html)

## 2. Nạp chồng hàm
- Nhiều hàm cùng tên khác tham số, k qtam tên tham số, qtam kiểu dữ liệu, danh sách tham số.

- Ví dụ:
int Tinh(int x, int y)
int Tinh(float x, int y) => OK
int Tinh(int x, int z) => k được, vì trùng 2 kiểu int giống cái 1 (k xét tên)

## 3. Lập trình tổng quát
- Tái sử dụng hàm cao nhất có thể
- Dùng phương pháp tham số hóa:
	+ Tham số hóa data (truyền tham số thông thường)
	+ Tham số hóa kiểu
	+ Tham số hóa xử lý (con trỏ hàm)

- Ví dụ: Tính tổng 2 số nguyên 3 và 5
	+ Giải pháp k tổng quát
	```
	int tinh_toan(){
		return 3 + 5;
	}
	```

	+ Giải pháp tổng quát: kiểu 1, tăng khả năng tái sử dụng
	```
	int tinh_toan(int x, int y){
		return x + y;
	}
	```

## 4. Nạp chồng (overload)
Trong C++ có thể sử dụng nạp chồng các toán tử cho các kiểu dữ liệu tự định nghĩa. Các hàm bắt đầu bằng operator.

Ví dụ:
```
//operator+ là hàm nạp chồng, khi gọi hàm Cong, nó sẽ tự định dạng thông qua dấu + của a +b
PhanSo operator+(PhanSo a, PhanSo b) {
	PhanSo kq;
	kq.TuSo = a.TuSo * b.MauSo + a.MauSo * b.TuSo;
	kq.MauSo = a.MauSo * b.MauSo;
	return kq;
}

PhanSo Cong(PhanSo a, PhanSo b) {
	return a + b;
}
```

Để ý là mình có thể viết hàm Cong như sau trong cùng mã nguồn dựa theo tính chất nạp chồng hàm
```
int Cong(int x, int y){
	return x + y;
}
```

**=> Ý tưởng viết 1 hàm k phụ thuộc kiểu dữ liệu**
```
/* Bỏ
PhanSo Cong(PhanSo a, PhanSo b) {
	return a + b;
}

int Cong(int x, int y){
	return x + y;
}
*/

//Viết 1 hàm duy nhất, ĐỘC LẬP kiểu dữ liệu
template <class T>
T Cong2PhanTu(T a, T b) {
	return a + b;
}
```

## 5. Viết hàm độc lập kiểu dữ liệu bằng `template <class T>`
** 1. Hàm nhập mảng độc lập kiểu dữ liệu**
```
template <class T>
void NhapMang(T*& a, int& n) {
	printf("Nhap so luong phan tu trong mang");
	scanf_s("%d", &n);

	a = new T[n];

	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
```

**2. Hàm tìm max độc lập kiểu dữ liệu**
```
template <class T>
T TimMax(T* a, int n) {
	T max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}
```

## 6. Tham số hóa xử lý
- Dùng con trỏ hàm, khái quát hóa thành độc lập dữ liệu.

Ví dụ: Hàm tìm phần tử tốt nhất
```
template <class T>
T TimPhanTuTotNhat(T a[100], int n, bool (*latotHon)(T a, T b)) {
	T kq= a[0];
	for (int i = 1; i < n; i++) {
		if (latotHon(a[i], kq)) {
			kq = a[i];
		}
	}
	return kq;
}

template <class T>
bool laLonHon(T a, T b) {
	return a > b;
}

template <class T>
bool laBeHon(T a, T b) {
	return a < b;
}
```