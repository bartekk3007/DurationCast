#include <iostream>     // std::cout
#include <chrono>       // std::chrono::seconds, std::chrono::milliseconds
// std::chrono::duration_cast

int main()
{
    std::chrono::seconds s(1);// 1 second
    std::chrono::milliseconds ms = std::chrono::duration_cast<std::chrono::milliseconds> (s);

    ms += std::chrono::milliseconds(2500);// 2500 millisecond
    s = std::chrono::duration_cast<std::chrono::seconds> (ms);// truncated

    std::cout << "milliseconds " << ms.count() << '\n';
    std::cout << "seconds " << s.count() << '\n';

    return 0;
}