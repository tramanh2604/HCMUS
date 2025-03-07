# Quản lí tập tin
- File gồm có 2 dạng: text và binary

## Đĩa từ - Cấu trúc
![HDD](/images/hdd.PNG)

- HDD (hard disk drive) gồm sectors, read-write head, track.
- Gồm có nhiều đĩa, ghi data ở cả 2 mặt đĩa.
- Các khái niệm cần nhớ:
	+ Head: là 1 mặt từ trên đĩa, mặt dưới của đĩa là head thứ 2. Các head đc đánh stt từ trên xuống (bắt đầu từ 0).
	+ Cylinder: vòng tròn ở giữa đĩa, gọi là track. Mỗi mặt đều có track riêng. Tập hợp tất cả các track có cùng bán kính tạo thành trụ rỗng -> cylinder.
	+ Sectors: là 1 cung tròn trên mặt đĩa, mặc định là 512 byte/sector. 
- Mỗi head có nhiều track (vòng tròn đồng tâm), track đc đánh stt từ ngoài vào trong (bắt đầu từ 0)
- Sectors: chọn vị trí bất kì từ 1, đi theo ngược chiều kim đồng hồ.
- Địa chỉ vật lý của 1 sector: head, track, sector. Ví dụ: sector trong ảnh: head = 0, track = 0, sector = 1 => khó nhớ. 
- Nên sinh ra đchi logic của sector: xem như mảng 1 chiều. Đchi số 0 tương ứng head = 0, track = 0, sector = 1. Ví dụ trên đĩa có 18 sector: head = 0, track = 0, sector = 18.
- Sau khi chạy hết vòng tròn ở ngoài cùng, nó k nhảy vào vòng tiếp theo, mà là vòng tròn ngoài cùng của track 1.

## Thuật toán đọc đĩa
- Mỗi gói tin nằm ở 1 đchi logic nào đó. Tập tin gồm nhiều gói tin. 

![Tệp tin](/images/teptin.PNG)

### 1. First Come First Serve (FCFS)
- Phục vụ theo thứ tự yêu cầu.
- Đơn giản nhưng k đáp ứng tốt dvu.
- Ví dụ: đầu đọc hiện tại vị trí 11 | 24 8 21 7 2 14 12
	+ Di chuyển mắt đọc từ 11 -> 24 (nhiều thao tác phía dưới).
	+ 24 -> 8 ....
- Di chuyển qua 1 - tốn 1 đơn vị thời gian. Ví dụ từ 11 -> 24, tốn 13 đơn vị tg. Tổng kết quả di chuyển là chi phí để đọc 1 tệp tin với các gói tin nằm ở vị trí như đề yêu cầu.

### 2. Shortest seek time first (SSTF)
- Chọn nhu cầu gần với vị trí hiện hành nhất.
- Có nhiều yêu cầu phải chờ lâu

![SSTF](/images/SSTF.PNG)

## 3. Scan
- Di chuyển đầu đọc về 1 phía của đĩa đến block xa nhất sau đó di chuyển về phía kia
- Còn gọi là thuật toán thang máy

![Scan](/images/scan.PNG)

## 4. C-Scan
![C - Scan](/images/C-Scan.PNG)

- Di chuyển về tận cùng ở đĩa, rồi quay lại đầu, rồi lại tiếp tục.
- Ưu điểm hơn Scan: tiết kiệm thời gian hơn. 

## 5. Look và C-Look
![Look](/images/look.PNG)

- Dịch chuyển đến gói tin xa nhất
- Còn C-look là quay về đầu của đầu đọc. 
- Khuyết điểm: phải biết trc và tính toán đc gói tin xa nhất. Việc tìm min, max trên mảng lớn => tốn chi phí.

## Đĩa từ - Cấu trúc
