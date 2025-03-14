- Khi có thành phần là con trỏ (VD lớp mảng) bắt buộc cài lại hàm tạo sao chép.
```
MyArray::MyArray(const MyArray& b) {
	if (b.n > 0) {
		n = b.n;
		pa = new int[n];
		for (int i = 0; i < n; i++) {
			pa[i] = b.pa[i];
		}
	}
	else {
		pa = nullptr;
		n = 0;
	}
}
```
- Khi có thành phần là con trỏ, bắt buộc cài đặt toán tử gán bằng.
```
void MyArray::operator=(const MyArray& b) {
	//them dieu kien gan khi doi tuong khac doi tuong can gan
	//this la con tro dai dien cho toan tu gan bang

	if (this != &b) {
		if (n > 0) {
			n = b.n;
			//huy vung nho hien tai
			delete[]pa;
			pa = new int[n];
			for (int i = 0; i < n; i++) {
				pa[i] = b.pa[i];
			}
		}
		else {
			pa = nullptr;
			n = 0;
		}
	}
}
```