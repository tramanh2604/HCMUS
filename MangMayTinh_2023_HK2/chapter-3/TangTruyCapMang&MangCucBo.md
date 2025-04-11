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
	+ Cơ chế dành sẵn kênh truyền vs kỹ thuật điều khiển truy nhập phân tán 
	+ Cơ chế truy nhập ngẫu nhiên: ALOHA, CSMA
- Điều khiển liên kết logic (LLC):
	+ Phục vụ cho các giao thức lớp mạng trên
	+ Liên lạc hiệu quả vs kỹ thuật khác nhau bên dưới.
	+ Nhận đơn vị data ở tầng network - IP packet, thêm vào thông tin điều khiển cho packet
	+ Data link: MAC và LLC
- Vấn đề kết nối mạng:
	+ Card giao tiếp mạng và đchi MAC
	+ Cơ chế kiểm soát lỗi
	+ Phương tiện truyền dẫn
	+ các thiết bị kết nối mạng

## 1.1 Card giao tiếp mạng và đchi MAC
- Dùng để kết nối giữa máy tính và cáp mạng.
- Dữ liệu di chuyển trong hệ thống bus của máy tính ở dạng song song. NIC chuyển tín hiệu sang nối tiếp thì mới có thể truyền đi.
- Phân loại theo chuẩn mạng: vô tuyến và hữu tuyến
- Đchi MAC:
	+ Mỗi NIC có 1 MAC duy nhất.
	+ MAC 6 byte: 3 byte đầu là mã NSX (oui), 3 byte sau là số serial của card.

## 1.2 Cơ chế kiểm soát lỗi
- Kiểm tra chẵn lẻ (parity check)
	+ Mỗi chuỗi bit biểu diễn 1 ký cần truyền đi đc thêm vào 1 bit, gọi là bit chẵn lẻ
		+ Gán 0 nếu các bit 1 trong chuỗi là chẵn, ngược lại
	+ Bên nhận căn cứ vào parity check để phát hiện lỗi.
- Kiểm tra dư thừa theo chiều dọc và chiều ngang
	+ VRC
	+ LRC
	+ Bit thứ i của ký tự này chính là bit kiểm tra cho tất cả các bit thứ i của tất cả các ký tự trong khối.
- Kiểm tra dư thừa theo chu kỳ (CRC): k + n bit / P
- Phép toán mod-2
	+ cộng - trừ: cộng nhị phân k nhớ
	+ nhân: tương ứng dịch trái n bit
	+ chia: giống phép chia thường nhưng phép trừ trong khi chia giống như phép cộng.

![CRC](/images/crc.PNG)

![CRC](/images/crc2.PNG)

![Đa thức](/images/dathuc.PNG)

# 2. Các loại phương tiện truyền dẫn
## 2.1 Hữu tuyến
- Cáp xoắn đôi, cáp đồng trục, cáp quang
- Khi nào đấu thẳng, khi nào đấu chéo?

## 2.2 Vô tuyến
- Sóng vô tuyến (radio)
- Sóng viba
- Sóng hồng ngoại
- Sóng ánh sáng

