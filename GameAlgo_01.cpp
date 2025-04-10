#include <iostream>
#include <ctime>

int main()
{
    std::time_t t = std::time(nullptr); // 時間を取得
    std::tm now;
    errno_t error = localtime_s(&now, &t); // タイムゾーンを考慮して変換

    std::cout << now.tm_hour << "時です" << std::endl;
    std::cout << "こんにちは" << std::endl;
}
