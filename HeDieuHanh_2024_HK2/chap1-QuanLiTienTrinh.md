# Chapter 1: Quản lý tiến trình - Tổ chức quản lý

## Các mô hình xử lý đồng hành
- Chương trình double click vào file exe => chuẩn bị k gian và nạp vào RAM.
- Tiến trình là 1 chương trình đang chạy hoặc đang nằm trên thanh RAM.

## Nhu cầu xử lý đồng hành

![Tiến trình](/images/tien-trinh.PNG)

+ CPU: giai đoạn tính toán, cần dùng đến CPU
+ IO: giai đoạn nhập/xuất ra màn hình.

- 2 giai đoạn sẽ luân phiên để thực thi. Ví dụ có 2 tiến trình đang chạy Job1, Job2, tiến trình nào k cần CPU thì tiến trình kia lấy.

**=> Tận dụng tối đa thời gian sử dụng CPU. Xử lý đồng thời để tăng hiệu xuất sử dụng CPU**

## Khó khăn
- Tài nguyên giới hạn (CPU, RAM...), ứng dụng vô hạn.
- Nhiều hđ đan xen.
- Cấp phát tài nguyên cho tiến trình nào.
- Chia sẻ tài nguyên
- Bảo vệ tài nguyên

=> Giải pháp, xếp hàng, xử lý tuần tự. Vẫn có khuyết điểm là đứa cuối chờ rất lâu mới đc sử dụng.
=> Cách 2 là đưa CPU, bấm giờ, thu hồi, cấp phát người mới, và luân phiên -> các chương trình có khả năng sử dụng CPU như nhau.

**OS hiện tại k áp dụng cách nào chính thức mà còn tùy**

## Tiểu trình (thread)
- Là luồng xử lý bên trong tiến trình.
- Mỗi tiểu trình sở hữu:
	+ Một CPU (ảo) riêng.
	+ Dùng chung k gian địa chỉ với tiến trình.

## Các trạng thái của tiến trình

![Các trạng thái](/images/trang-thai-tien-trinh.PNG)

- ready: có nhu cầu nhận CPU.
- running: có CPU để chạy. Trong quá trình chạy mà hết thời gian mà vẫn còn nhu cầu chạy (tiến trình chưa xong) -> trả CPU -> ready -> chờ nhận lần tiếp.
- blocked: đã thực thi xong -> IO

- Giả định máy chỉ có 1 CPU, 1 nhân: tại 1 thời điểm có 1 tiến trình running, nhiều ready, blocked.

## Cấu trúc dữ liệu khối quản lý tiến trình

![Khối quản lý](/images/khoi-quan-ly-tien-trinh.PNG)

- Định danh (process ID)
- Trạng thái tiến trình
- Ngữ cảnh tiến trình: lưu lại các IP, files... -> vì khi running hết time, trả CPU thì nó phải save lại để thực hiện tiếp
	+ Trạng thái CPU
	+ bộ xử lý (cho máy nhiều CPU)
	+ Bộ nhớ chính
	+ Tài nguyên sử dụng/ tạo lập.
- Thông tin giao tiếp
	+ Tiến trình cha, con
	+ Độ ưu tiên
- Thông tin thống kê
	+ Time sử dụng CPU
	+ Time chờ

---

# Điều phối process

![Danh sách process](/images/danh-sach-process.PNG)

- Ready list: 
- Waiting lists: mỗi tài nguyên có 1 hàng đợi khác nhau.

## Bộ điều phối
- Scheduler: chọn 1 tiến trình dựa trên 1 nguyên tắc của OS. Ví dụ ai đến trc được trc, độ ưu tiên ai cao hơn...
- Dispatcher: chuyển CPU cho tiến trình được chọn. Đầu tiên báo cho process A, A lưu công việc vào context. Dispatcher chuyển CPU cho B, tuy nhiên báo trc cho B là nạp context cũ lên trước.

![Bộ điều phối](/images/bo-dieu-phoi.PNG)

## Mục tiêu điều phối
- Công bằng (fairness): tất cả process đều có cơ hội nhận CPU.
- Hiệu quả: tận dụng CPU 100% time.
- Respone time (thời gian đáp ứng hợp lý): cực tiểu hóa time hồi đáp cho các tương tác của end user.
- Time lưu lại trong hệ thống (turnaround time): cực tiểu hóa time hoàn tất.
- Throughput (thông lượng tối đa): cực đại hóa số công việc đc xử lý trong 1 đơn vị time.

## Nguyên tắc điều phối
- Độc quyền: tiến trình giữ CPU luôn cho đến khi running xong.
- K độc quyền: process đang running, nhưng OS yêu cầu thì trả CPU.
