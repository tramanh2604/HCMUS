# Đa hình
# 1. Hàm ảo
- `virtual void F_Ao()`
- Hàm thường: dựa vào kiểu dữ liệu khi khai báo biến (con trỏ)
- Hàm ảo: Dựa vào kiểu dữ liệu thật sự của object đang trỏ tới
- Chỉ khi và khi: Hàm ảo + con trỏ => dựa vào kiểu data của object thực sự đang trỏ tới
- Còn lại y như hàm thường: dựa vào kiểu data khi khai báo biến

```
NhanVien* pNv;

pNv = new NhanVien("Le Van B", "2 Le Duan");
pNv->F_Ao() // NhanVien
pNv->XuatNhanVien(); //Nhanvien

pNv = new NhanVienSanXuat("Tran Van B", "2 Le Duan");
pNv->F_Ao() // NhanVienSanXuat
pNv->XuatNhanVien(); //Nhanvien

pNv = new NhanVienVanPhong("Le Van B", "2 Le Duan");
pNv->F_Ao() // NhanVienVanPhong
pNv->XuatNhanVien(); //Nhanvien
```

![Tổng kết](/images/b9.PNG)

- Để đa hình được: Hàm ảo + được gọi bởi con trỏ.
