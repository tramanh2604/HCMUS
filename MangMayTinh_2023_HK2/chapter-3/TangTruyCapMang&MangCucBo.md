# Chương 3: Tầng truy cập mạng & mạng cục bộ
## 1. Chức năng của tầng truy cập mạng
- Giao tiếp vs phần cứng mạng và truy nhập môi trường truyền.
- Ánh xạ đchi IP -> đchi vật lý và đóng gói các gói IP thành các frame.
- 4 vấn đề kỹ thuật chính:
	+ Tầng truy nhập mạng thông tin các lớp trên thông qua LLC.
	+ Dùng đchi hóa ngang bằng 
	+ Dùng kỹ thuật đóng gói frame để tổ chức hay nhóm data
	+ Dùng MAC để chọn máy tính nào để truyền data nhị phân.
- **Các tầng con MAC, LLC**
	+ LLC (logic link control): điều khiển lưu lượng, và kiểm soát lỗi.
	+ MAC (media access control): quyết định mỗi thời điểm, ai sẽ đc phép truy nhập môi trường truyền dẫn.
- Các cơ chế đkhiển truy nhập tại tầng con MAC cũng đc phân loại:
	+ Các cơ chế dành sẵn kênh truyền vs kỹ thuật đkhiển tập trung: sử dụng pp Roll call polling hoặc hub polling.
	