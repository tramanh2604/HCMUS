Dùng danh sách liên kết đơn để quản lý thông tin các NHÂN VIÊN của 1 công ty. Mỗi NHÂN VIÊN gồm các thông tin: Tên nhân viên, năm sinh, hệ số lương, lương cơ bản. 

a.     Khai báo các cấu trúc dữ liệu cần thiết để có thể lưu trữ dưới dạng DSLK đơn. 

```
//Cấu trúc lưu thông tin nhân viên
struct NHANVIEN{
	char TenNV[50];
	int NamSinh;
	float HeSoLuong;
	int LuongCB;
};
//cấu trúc của 1 Node
struct NODE{
	NHANVIEN data;
	NODE* pNext = NULL;
};
//Cấu trúc của danh sách liên kết đơn
Struct LinkedList{
	Node* pHead = NULL;
	Node* pTail = NULL;
};
```

b.     Viết hàm xuất tên của tất cả nhân viên sinh năm 2000 và có lương trên 10 triệu đồng. Biết, lương = lương cơ bản x hệ số lương.
```
//Hàm tính lương mỗi nhân viên
int LuongNV(NHANVIEN a){
	return a.LuongCB * a.HeSoLuong;
}

//Hàm xuất tên nhân viên sinh năm 2000, lương trên 10 triệu
void TenNV(LinkedList list){
	//Kiểm tra rỗng
	If(list.pHead == NULL){
		printf(“Khong ton tai nhan vien thoa yeu cau\n”);
		return;
	}
	NODE* p = list.pHead;
	bool found = false;
	while(p != NULL){
		if(p->data.NamSinh == 2000 & LuongNV(p->data) > 10000000){
			cout << “Ten nhan vien: ” << p->data.TenNV << endl;
			found = true;
		}
		p = p->pNext;
	}
	if(!found){
		printf(“Khong ton tai nhan vien thoa yeu cau”);
	}
}
```
