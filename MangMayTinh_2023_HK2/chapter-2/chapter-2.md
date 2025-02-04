# Các Mô Hình kiến Trúc Mạng MT (Chuẩn hóa, Kiến trúc đa tầng và OSI)

## Vấn đề chuẩn hóa mạng
- Cở sở xuất hiện kiến trúc đa tầng:
- Sự khác biệt về kiến trúc mạng gây trở ngại cho việc kết nối liên mạng và khả năng mở rộng mạng
- Cần xây dựng mô hình chuẩn:
	+ Làm cơ sở cho nghiên cứu và thiết kế mạng.
	+ Tạo đk cho việc phát triển và sử dụng mạng.
- Các tổ chức tiêu chuẩn hóa mạng MT: ISO, ITU, IEEE.

## Mô hình kiến trúc đa tầng
- Phân chia các chức năng trong việc trao đổi thông tin.

- Các quy tắc phân tầng.
	+ Không quá nhiều tầng
	+ Xđich mqh giữa các tầng:
		+ Theo chiều ngang: phản ánh của hđ của các đồng tầng ở 2 thiết bị. Các đồng tầng trc khi trao đổi thông tin vs nhau phải bắt tay, hội thoại và thỏa thuận vs nhau bằng các tham số của giao thức.
		+ Theo chiều dọc: là qh giữa các tầng kề nhau trong cùng 1 thiết bị. Giao diện tầng: xác định các thao tác và các dvu tầng dưới cung cấp cho tầng trên.
	+ MQH giữa các đồng tầng -> giao thức tầng.
	+ Data k truyền theo chiều ngang.

- Lưu chuyển thông tin trong trong kiến trúc phân tầng: 
	+ encapsulation (đóng gói tin) bổ sung thêm Header.
	+ de-encapsulation (giải đóng gói) tách thông tin điều khiển đẩy lên trên.

- Nguyên tắc truyền thông đồng tầng: 
	+ Thông tin điều khiển giao thức PCI - thêm vào đầu gói tin
	+ Đơn vị data dịch vụ SDU
	+ Đơn vị data giao thức PDU

**PDU = PCI + SDU** gồm header và data

- Giao diện và dvu trong môi trường các hệ thống mở
	+ SAP (server access point): điểm truy cập dvu.
	+ mỗi một SAP có 1 nhận dạng duy nhất.

## Mô hình OSI
N = 7 tầng

![OSI](../images/OSI-model.png)

- 7 - application: cung cấp giao diện, ứng dụng để end user tương tác vs các dvu mạng.

- 6 - presentation: 
	+ biểu diễn của data theo 1 dạng nhất định -> đuôi file tương ứng.
	+ encryption: mã hóa data.
	+ nén data

- 5 - session: hỗ trợ đa nhiệm, tạo các phiên làm việc cho threads.

- 4 - transport: 
	+ thiết lập kết nối end-to-end (host gửi và host nhận).
	+ reliability (độ tin cậy)

- 3 - network:
	+ routing; xác định đường đi cho gói tin từ mạng này sang mạng kia qua default gateway

- 2 - data link: định đchi MAC cho từng thiết bị, đóng gói frame theo đúng công nghệ mạng. LLC là ddkhien liên kết vs các tầng khác.

- 1 - physical: quy định các gói tin chuyển thành chuỗi bits, có bit báo hiệu bắt đầu và bit kết thúc. 

## Mô hình TCP/IP
- Gồm 2 protocol điển hình: TCP/IP, IPv4

![TCP/IP](../images/TCP-IP.PNG)

- Các giao thức trong TCP/IP

![TCP/IP](../images/TCP-IP2.PNG)

- Application: 
	+ POP (gửi nhận thư điện tử)
	+ DNS (domain name system, phân giải tên miền)
	+ HTTP (hyptertext transfer protocol - web)
	+ FTP (file transfer protocol)
	+ SMTP (truyền thư đơn giản)
	+ TELNET (cấu hình từ xa, tuy nhiên thông tin cấu hình truyền đi ở dạng rõ -> dễ bị tấn công)
	+ SSH (secure shell -  hỗ trợ truy cập từ xa an toàn)

- Transport:
	+ TCP: an toàn hơn
	+ UDP: 

- Internet: 
	+ ARP: đóng các packet thành frame, IPv4 cần ARP
	+ ICMP: hỗ trợ IP
	+ DHCP: cấp pát đchi IP động

- Network Access:

## Phân mảnh dữ liệu
- Data đc truyền qua nhiều mạng khác nhau, kích thước cho phép khác nhau.
- Đơn vị truyền cực đại của 1 môi trường truyền: MTU (maximum transmission unit).
- Mạng nhận đc gói data có kích thước lớn hơn MTU của nó => data phân mảnh thành gói nhỏ hơn để chuyển tiếp. 
	+ gói nhỏ hơn gán thêm header để giúp quá trình nhận data đc chính xác.
	
# Bài 2 - TCP/IP một số kiến trúc mở rộng

## 1. Giao thức UDP - transport
- Là giao thức k kết nối (connectionless).
- Sử dụng cho các ứng dụng k yêu cầu độ tin cậy cao. 
- K có cơ chế xác nhận ACK, k đảm bảo chuyển giao các gói tin đến đích và theo đúng thứ tự.
- K bỏ các gói tin trùng
- Gán và quản lý port để định danh cho các ƯD

![port](../images/port.PNG)

- Sử dụng 16 bit để định danh port number.

- Header UDP: Source port (16bit), Destination Port(16), Length(16), checksum(16)

## 2. Giao thức TCP - transport
- Hướng kết nối
- Cung cấp các chức năng:
	+ Thiết lập, duy trì, giải phóng liên kết 
	+ Phân phát gói tin tin cậy
	+ Tạo stt cho packet
	+ Điều khiển lỗi
	+ đa kết nối cho các quá trình khác nhau giữa thực thể nguồn - đích thông qua port number
- Đặc điểm:
	+ Ngăn sự tràn lụt, mất data
	+ Bên nhận gửi xác nhận cho bên gửi đã nhận packet
	+ IP datagram có thể đến đích k đúng thứ tự, TCP sắp xếp lại
	+ Chỉ phát lại packet lỗi
	+ Đơn vị: segment

![Format TCP](../images/format-TCP.PNG)

