#include <iostream>
#include <string>

enum LogLevel {
    INFO,
    WARNING,
    ERROR
};

void log(LogLevel level, const std::string& message) {
    std::string colorCode;
    std::string levelText;

    switch (level) {
        case INFO:
            colorCode = "\033[32m";  
            levelText = "INFO";
            break;
        case WARNING:
            colorCode = "\033[33m";  
            levelText = "WARNING";
            break;
        case ERROR:
            colorCode = "\033[31m";  
            levelText = "ERROR";
            break;
    }

    std::cout << colorCode << "[" << levelText << "] " << message << "\033[0m" << std::endl;
}

int main() {
    log(INFO, "Midas Yielder");
    log(WARNING, "The best RWA Telegram Miniapp!");
    log(ERROR, "@Meomundep");

    return 0;
}
