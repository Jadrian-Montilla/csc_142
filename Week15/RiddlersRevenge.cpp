#include <iostream>
#include <utility>
#include <tuple>


std::tuple<int, std::string, bool> getRiddleInfo() {
    return std::make_tuple(7, "What has roots as nobody sees, is taller than trees...", true);
}

int main(){
    int riddleNumber;
    std::string riddleAnswer;
    bool riddleSolved;

    std::tie(riddleNumber, riddleAnswer, riddleSolved) = getRiddleInfo();

    std::cout << "Riddle " << riddleNumber << " / " << riddleAnswer << "\n" << std::endl;
    std::cout << "Is it solved: " << (riddleSolved ? "Yes":"No") << std::endl;

    return 0;
}