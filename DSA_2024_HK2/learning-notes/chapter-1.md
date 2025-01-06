# Chapter 1: Over View

## Các cấu trúc dữ liệu
- DSLK, Stack-queue, hàng đợi ưu tiên
- Cấu trúc cây: cây nhị phân, Heap
- Cấu trúc cây nhị phân tìm kiếm: AVL, AA...
- B-cây **chủ yếu**
- Bảng băm
- Cấu trúc đồ thị

## Các thuật toán tìm kiếm
- Tìm kiếm tuần tự
- Tìm kiếm nhị phân

## Các thuật toán sắp xếp
- Seclection Sort, Heap sort, merge sort, quick sort, radix sort.
- Thuật toán tìm cây khung nhỏ nhất, tìm đường đi ngắn nhất.

---

# Ôn tập
## Pointer
- Biến: int a;
a | |
Khi gán a = 5;
a |5|

- Biến con trỏ: int* p; chứa địa chỉ của 1 ô nhớ khác.
int* p = new int; //cấp phát bộ nhớ
p => |rác|

Nếu * p = 5;	p => |5|

- Giả sử int* q; q = p; gán giá trị của q cho p (hoặc cho q trỏ vào cùng ô nhớ với p)
p => |5| <= q

```
*p = 10;
cout << p //in ra vùng nhớ p trỏ đến
cout << *p //in ra 10
```

## Struct
- Kiểu dữ liệu tự định nghĩa. Ví dụ kiểu dữ liệu DIEM
```
struct DIEM{
	int x;
	int y;
};
```
p ||10|10||
	x 	y

- Do được bọc bởi 2 lớp, khi truy cập p.x, p.y 

## Linked List
```
struct Node{
	int data; //dữ liệu
	Node* pNext; //pointer
};

struct LinkedList{
	Node* pHead;
	Node* pTail;
};
```

**Bài Tập**: Quản lý SV bằng DS liên kết đơn
```
struct SINHVIEN{
	char MSSV[10]; 
	int NamSinh;
	bool GioiTinh;
	float DiemToan;
};
```

## Con trỏ cấu trúc
`DIEM *p = new DIEM;`
- Con trỏ trỏ đến vùng nhớ bên trong là nguyên kiểu DIEM.
p => ||10|10||
		x y

- Để truy cập phần tử p->x, p->y

## Duyệt qua Linked List
- Duyệt qua mảng dùng for.
- Duyệt qua Linked List dùng con trỏ, trỏ vào từng Node của list cho đến khi gặp pTail thì dừng.
	+ B1: khai báo p, cho p trỏ vào pHead.
	+ B2: p nhảy từ NODE này sang NODE kế, cho đến khi là NULL.
	```
	//B1
	NODE *p =pHead;

	//B2
	while(p != NULL){
		//Do something
		//Vd in ra DSLK chẵn
		if(p->data % 2 == 0){
			cout << p->data;
		}

		p = p->pNext; 
	}
	```
