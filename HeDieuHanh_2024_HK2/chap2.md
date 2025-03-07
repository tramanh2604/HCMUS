# Chương 2

## Đánh giá chiến lược điều phối
- Turn-arround time (TT) = T quit - T arrive: Từ lúc vào hệ thống đến khi hoàn tất. 
- Waiting Time (WT): T in ready list: Thời gian chờ trong ready list, k tính trong waiting list
- Xét trường hợp trung bình:

## Các chiến lược điều phối
### FIFO (FCFS)

![FIFO](/images/FIFO.png)

- Độc quyền.

- Bài tập
![Tính bảng điều phối](/images/Bai-Tap.png)


### Xoay vòng - Round Robin
- K độc quyền.
- quantim time
- Bài tập 1:

- Bài tập 2:
	+ P1 kết thúc quay về hàng đợi, cùng lúc đó P2 cũng vào.
	 => tùy theo đề bài, ví dụ ưu tiên process cũ hơn - tức lâu rồi chưa sdung CPU
	+ Cái nào cũng có lợi, P1 chạy tiếp để giảm chi phí ngữ cảnh, còn P2 thì để mau phản hồi cho người dùng

### Công việc ngắn nhất - SJF (Shortest job first)
- Ưu tiện chọn process có nhu cầu sdung CPU ít nhất trong ready list

![SJF](/images/sjf.PNG)

- Giả sử có thêm P4 cũng cần 4 chu kỳ, xét tiêu chí phụ, ai vào trc ddc ưu tiên cấp phát trước.

#### SJF độc quyền
- 1 process chạy hết chu kỳ của nó

#### SJF k độc quyền (SRTF-shortest remaining time first) (SRTN-shortest remaining time next)


### Điều phối theo độ ưu tiên
- HĐH sinh ra: CPU times...
- Người dùng gán tường minh
=> Process của hệ thống luôn có độ ưu tiên cao hơn.
- Chọn tiến trình ưu tiên cao hơn
![Độ ưu tiên - k độc quyền](/images/do-uu-tien.PNG)
	+ Priority: 0 thấp nhất, 2 cao nhất
- Hạn chế là những process 0 rất lâu mới đc chạy

### Điều phối theo nhiều mức ưu tiên
- Tổ chức nhiều ready list ứng vs nhiều mức ưu tiên.
- Mỗi RD, áp dụng chiến lược điều phối thích hợp.
