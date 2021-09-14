#include <iostream>
class Position {
private:
    int pOpen;
    int sLoss;
    int tProfit;
public:
int risk(int sLoss, int pOpen) {
    return sLoss - pOpen;
    }
    int setPosition(int position_pOpen, int position_sLoss)
    {
    pOpen = position_pOpen;
    sLoss = position_sLoss;
    }
};
int main() {
    //int pOpen = 11;
    //int sLoss = 5;

    Position newLong;
    int position_pOpen = 11;
    int position_sLoss = 5;
    newLong.setPosition(position_sLoss, position_pOpen);
    std::cout << newLong.risk(position_sLoss, position_pOpen);
    return 0;
}
