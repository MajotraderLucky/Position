#include <iostream>
class Position {
private:
    int open;
    int sLoss;
    int tProfit;
public:
int risk(int open, int sLoss) {
    return sLoss - open;
    }
    void setPosition(int position_open, int position_sLoss)
    {
    open = position_open;
    sLoss = position_sLoss;
    }
};
int main() {
    int open = 11;
    int sLoss = 5;

    Position newLong;
    newLong.setPosition(int position_open, int position_sLoss);
    newLong.risk(int open, int sLoss);
    std::cout << newLong.risk(int open, int sLoss);
    return 0;
}
