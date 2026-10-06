# Cấu trúc dữ liệu Bảng băm với kỹ thuật Băm kép (C++)

## 📌 Tổng quan dự án
Kho lưu trữ này chứa mã nguồn C++ tự triển khai cấu trúc dữ liệu Bảng băm (Hash Table) hoàn toàn từ đầu, mục đích giải quyết hiệu quả tình trạng đụng độ dữ liệu (collision) mà không phụ thuộc vào các thư viện có sẵn (như `std::unordered_map`).

Nhằm củng cố kiến thức nền tảng về Cấu trúc dữ liệu & Giải thuật, đặc biệt tập trung vào quản lý bộ nhớ và tối ưu hóa hiệu năng thuật toán.

## 🚀 Tính năng nổi bật
* **Xử lý đụng độ:** Ứng dụng kỹ thuật **Băm kép (Double Hashing)** để xử lý linh hoạt các trường hợp đụng độ, duy trì độ phức tạp thời gian tìm kiếm trung bình ở mức `O(1)`.
* **Hàm băm tùy chỉnh:** Xây dựng các hàm băm chính và phụ nhằm giảm thiểu hiện tượng phân cụm dữ liệu (clustering) và đảm bảo phân phối dữ liệu đồng đều trong vùng nhớ.
* **Quản lý bộ nhớ:** Kiểm soát an toàn việc cấp phát bộ nhớ động (`new` và `delete`), ngăn chặn tuyệt đối tình trạng rò rỉ bộ nhớ (memory leak) trong quá trình thực thi.
* **Theo dõi đụng độ:** Tích hợp thư viện `std::vector` để theo dõi và xuất ra các khóa (keys) xảy ra đụng độ theo thời gian thực.

## ⚙️ Công nghệ sử dụng
* **Ngôn ngữ:** C++
* **Môi trường:** Code::Blocks / Trình biên dịch GCC

## 📝 Ví dụ kiểm thử (Test Case)
**Đầu vào (Input):** (Kích thước bảng = 10; Các khóa cần chèn = 15, 25, 35)
```text
10
15 25 35 -1
