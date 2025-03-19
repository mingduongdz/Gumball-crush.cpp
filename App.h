#ifndef APP_H
#define APP_H

#include <SDL2/SDL.h>
#include <SDl2/SDL_image.h>
#include <cstdio>
//<cstdio>: Thư viện chuẩn C cung cấp các hàm đầu vào/đầu ra, như printf và scanf, giúp xử lý dữ liệu dưới dạng văn bản hoặc nhị phân.
#include <cstdlib>
//<cstdlib>: Thư viện chuẩn C cung cấp các hàm quản lý bộ nhớ, chuyển đổi số, điều khiển tiến trình và các hàm hữu ích khác như malloc, free, atoi, exit
#include <string>
#include <sstream>
#include <ctime>
//<ctime>: Thư viện chuẩn C cung cấp các hàm để xử lý thời gian và ngày tháng, như time, difftime, clock.
#include <Windows.h>
#include "Appconfig.h"
//"Appconfig.h": Thư viện này có thể chứa các cấu hình và định nghĩa cấu hình cho ứng dụng của bạn.
#include "Candy.h"
//"Candy.h": Thư viện này có thể chứa các khai báo và định nghĩa liên quan đến đối tượng Candy trong trò chơi hoặc ứng dụng của bạn.
#include "Texture.h"
//"Texture.h": Thư viện này có thể chứa các hàm và cấu trúc để làm việc với kết cấu (textures) trong đồ họa.
#include "Board.h"
//"Board.h": Thư viện này có thể chứa các hàm và cấu trúc để quản lý bảng hoặc lưới (board) trong trò chơi hoặc ứng dụng của bạn.
#include "Button.h"
//"Button.h": Thư viện này có thể chứa các hàm và cấu trúc để làm việc với các nút bấm trong giao diện người dùng.
#include "CommonFunc.h"
//"CommonFunc.h": Thư viện này có thể chứa các hàm thông dụng, tiện ích được sử dụng nhiều nơi trong ứng dụng của bạn.
#include "Sound.h"

class App
{
public:
	App();
	//App(): Hàm khởi tạo, được gọi khi một đối tượng App được tạo. Thường dùng để khởi tạo các giá trị ban đầu cho biến thành viên và thực hiện các bước thiết lập cần thiết.
	~App();
	//~App(): Hàm hủy, được gọi khi một đối tượng App bị hủy. Thường dùng để giải phóng tài nguyên và thực hiện các bước dọn dẹp cần thiết.

    bool checkWinCondition();

	bool loadMenu();

	bool loadGameOver();

	bool loadGame();

	void closeMenu();

	void closeGameOver();

	void closeGame();

	void renderMenu();

	void renderGameOver();

	void renderGame();

	void renderRegenerate(int regenerateStartTime);

	void run();

	static SDL_Renderer *renderer;
//*static SDL_Renderer renderer: Con trỏ tĩnh đến bộ render của SDL, dùng để vẽ đồ họa lên màn hình.

private:
	SDL_Window* window = NULL;
//: Con trỏ đến cửa sổ SDL.

	TTF_Font *gameFont;
//*TTF_Font gameFont: Con trỏ đến font chữ của trò chơi.
	SDL_Rect menuClip;
//SDL_Rect menuClip: Hình chữ nhật định nghĩa vùng hiển thị menu.
    Texture menuTexture;
//Texture menuTexture: Kết cấu của menu.

    SDL_Rect backgroundClip;
//SDL_Rect backgroundClip: Hình chữ nhật định nghĩa vùng hiển thị nền.
    Texture backgroundTexture;
//Texture backgroundTexture: Kết cấu của nền.
    SDL_Rect regenerateClip;
//SDL_Rect regenerateClip: Hình chữ nhật định nghĩa vùng hiển thị tái tạo.
    Texture regenerateTexture;
//Texture regenerateTexture: Kết cấu của tái tạo.
    SDL_Rect gameoverClip;
//SDL_Rect gameoverClip: Hình chữ nhật định nghĩa vùng hiển thị kết thúc trò chơi.
    Texture gameoverTexture;
//Texture gameoverTexture: Kết cấu của màn hình kết thúc trò chơi.
	Board board;
//Board board: Đối tượng bảng trò chơi.
	Button playButton;
//Button playButton: Nút bấm "Chơi".
	Button quitButton;
//Button quitButton: Nút bấm "Thoát".
	Candy candy[TOTAL_CANDYS];
//Candy candy[TOTAL_CANDYS]: Mảng đối tượng kẹo trong trò chơi.
	Candy *pressedCandys[2];
//*Candy pressedCandys[2]: Mảng con trỏ tới hai đối tượng kẹo đang được nhấn.

    SDL_Rect scoreGameTextClip;

    SDL_Rect scoreGameoverTextClip;
//SDL_Rect scoreGameTextClip: Hình chữ nhật định nghĩa vùng hiển thị điểm số trong trò chơi.
    SDL_Rect multiplierClip;
//SDL_Rect multiplierClip: Hình chữ nhật định nghĩa vùng hiển thị hệ số nhân điểm.
    SDL_Rect timerClip;
//DL_Rect timerClip: Hình chữ nhật định nghĩa vùng hiển thị đồng hồ đếm ngược
	int startTime;

	int pressedCount;
//int pressedCount: Biến đếm số lượng đối tượng kẹo đang được nhấn.
    MusicPlayer musicPlayer;
};

#endif // APP_H
