# Chương 2 - Hệ mật khóa bí mật

![Sơ đồ](..images/so-do-he-bi-mat.PNG)

Nguồn khóa trong hệ truyền tin mật phải truyền trong kênh an toàn. 

## Các hệ mật cổ điển
### Các hệ mật thay thế đơn biểu
- Khi khóa đã đc chọn thì mỗi kí tự cyra bản rõ đc ánh xạ đến 1 ký tự duy nhất của bản mã
- Độ dài khóa: 26, khóa có thể có 26!

**- Mã dịch vòng (MDV - Shift cipher)**
+ P = C = K = Z26
+ y = ek(x) = x + k mod 26
+ x = dk(y) = y - k mod 26

**Bài tập**
Bản rõ: HOC TAP TOT LAO DONG TOT
Khóa k = 5

![Bài tập](../images/bai-tap-1.PNG) 
- Nhược điểm: Dễ đoán vì mỗi ngôn ngữ phản ánh 1 ngôn ngữ của bản rõ, ví dụ chữ cái phổ biến trong TA là chữ E

**- Mã Affine:**
+ Cho P = C = Z26, K = Z26 x Z26
	
	K = {(a,b) thuộc Z26 x Z26; UCLN (a,26) = 1}

Với k = (a,b) thuộc K ta định nghĩa:
	+ y = ek(x) = ax + b mod 26
	+ x = dk(y) = a^-1(y - b) mod 26

**Bài tập**
Cho k = (7,3). Bản rõ It is nice today

![Bài tập](../images/bai-tap-2.PNG)

Giải mã: tính nghịch đảo.