# Tuần 2: Tác nhân tìm kiếm
- Tác nhân (agent) là 1 thực thể có khả năng nhận thức và sau đó là hành động.
- Tác nhân hợp lý (rational agent) sẽ hđ để đặt đc kết quả tốt nhất.
	+ Sau khi nhận thức có thể suy nghĩ/suy diễn
	+ Sau khi nhận thức có thể phản xạ mà k cần suy nghĩ.
- Mọi hệ thống AI đều muốn xây dựng từ Sensors => Actuators.
- Kết quả tốt nhất:
	+ Dựa vào định nghĩa/ tiêu chí
	+ Trong môi trường hiện có
	+ Tg ra quyết định
	+ Tri thức đang có hiện tại
- Lên kế hoạch để giải quyết bài toán
	+ Dựa trên hiểu biết về môi trường đang có
	+ "Suy nghĩ" để đưa ra kết hoạch hđ nhằm đạt đc kết quả tốt nhất (giải đc bt).
	+ Thực hiện theo kế hoạch.

## 1. Bài toán tìm kiếm
- 1 bt tìm kiếm bao gồm:
	+ Không gian trạng thái
	+ Hàm "successor": cho biết từ 1 trạng thái sẽ có thể đi đến những thái kế nào (vs hđ nào và chi phí bao nhiêu).
	+ Trạng thái bắt đầu, và hàm kiểm tra trạng thái đích.

## 2. Đồ thị (không gian) trạng thái
- Là 1 cách biểu diễn của bài toàn tìm kiếm
- Mỗi đỉnh ứng vs 1 trạng trái
- các cạnh đi ra từ 1 đỉnh ứng vs hàm successir tại đỉnh đó.
- Trong đồ thị trạng thái, mỗi trạng thái chỉ xuất hiện 1 lần.
=> K xây dựng vì rất lớn.

## 3. Cây tìm kiếm
- Giúp ta dễ xdinh các trạng thái có thể tạo mỗi thời điểm

## 4. Nhận xét
- BFS: dừng sớm, giảm chi phí. Có tối ưu.
- DFS, BFS: k cần duyệt lại node cũ 
	+ => Cần lưu lại danh sách các node đã duyệt, tốn RAM. Trong các bài toán lớn, số lượng RAM là vô kể.
	+ => Làm sao để biết node đã duyệt rồi?
- Không duyệt lại node cũ??
- Do vậy trong thực tế chưa biết duyệt hay chưa duyệt node cũ sẽ tốt hơn.
