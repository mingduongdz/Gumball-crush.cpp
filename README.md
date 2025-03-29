# 🍬 Candy Match Game

Đây là một phiên bản đơn giản nhưng thú vị của trò chơi Candy Crush, được phát triển bằng ngôn ngữ C++ và thư viện SDL2. Trò chơi bao gồm các nhân vật trong bộ **Amazing World of Gumball**. Người chơi có thể di chuyển các viên kẹo để tạo thành chuỗi giống nhau và ghi điểm.

## ✨ Tính năng
- Giao diện đồ họa sử dụng SDL2.
- Cơ chế kéo-thả kẹo để tạo chuỗi.
- Hiệu ứng hoạt ảnh khi kẹo rơi xuống.
- Kiểm tra điều kiện thắng/thua.
- Phát âm thanh khi người chơi tương tác.

## 📂 Cấu trúc dự án
```
├── Sources/            # Chứa mã nguồn chính  
│   ├── Animation.cpp   # Xử lý hiệu ứng hoạt ảnh  
│   ├── App.cpp         # Quản lý vòng lặp chính của trò chơi  
│   ├── Board.cpp       # Xử lý logic bảng kẹo  
│   ├── Button.cpp      # Xử lý nút bấm trong giao diện  
│   ├── Candy.cpp       # Quản lý các viên kẹo và thao tác hoán đổi  
│   ├── CommonFunc.cpp  # Các hàm tiện ích chung  
│   ├── main.cpp        # Điểm vào chính của chương trình  
│   ├── Sound.cpp       # Xử lý âm thanh và nhạc nền  
│   ├── Texture.cpp     # Quản lý tải và hiển thị hình ảnh  
│
├── Headers/            # Chứa các tệp tiêu đề (header)  
│   ├── Animation.h     # Khai báo lớp Animation  
│   ├── App.h           # Khai báo lớp App  
│   ├── Appconfig.h     # Chứa các thông số cấu hình ứng dụng  
│   ├── Board.h         # Khai báo lớp Board  
│   ├── Button.h        # Khai báo lớp Button  
│   ├── Candy.h         # Khai báo lớp Candy  
│   ├── CommonFunc.h    # Khai báo các hàm tiện ích chung  
│   ├── Sound.h         # Khai báo lớp Sound  
│   ├── Texture.h       # Khai báo lớp Texture  
│
├── Others/             # Chứa các tệp phụ trợ  
│   ├── Candy Crush.depend  # Tệp phụ trợ của trình biên dịch  

```

## 🛠 Cài đặt
### Yêu cầu hệ thống
- Hệ điều hành: Windows, Linux, macOS
- Trình biên dịch: g++ (MinGW trên Windows)
- Thư viện: SDL2, SDL2_image, SDL2_mixer, SDL2_ttf

### Hướng dẫn cài đặt thư viện SDL2 (Ubuntu)
```bash
sudo apt update
sudo apt install libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev
```

### Biên dịch và chạy chương trình
```bash
g++ -o CandyMatch src/*.cpp -Iinclude -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
./CandyMatch
```

## 🎮 Điều khiển
- **Nhấn chuột trái** để chọn kẹo.
- **Kéo và thả** để di chuyển kẹo.
- **Tạo chuỗi từ 3 viên kẹo trở lên** để ghi điểm.

## 📌 Ghi chú quan trọng
- Đảm bảo rằng tất cả các tệp tài nguyên như hình ảnh và âm thanh nằm trong thư mục `assets/`.
- Nếu gặp lỗi thiếu thư viện, hãy kiểm tra xem SDL2 đã được cài đặt đầy đủ chưa.


Chúc bạn chơi game vui vẻ! 🎮

## 📜 Nguồn & Ghi chú
- **Code:** CODEPAL, ChatGPT
- **Âm thanh:** APT song (from YouTube)
- **Hình ảnh kẹo:** Pinterest
- **Font chữ:** GG Font
