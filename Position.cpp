#include <iostream>
class Position {
private:
    double pOpen;
    double sLoss;
    double tProfit;
    double pVolume;
public:
double risk(double sLoss, double pOpen, double pVolume) {
    return (sLoss - pOpen) * pVolume;
    }
    double setPosition(double position_pOpen, double position_sLoss, double position_pVolume)
    {
    pOpen   = position_pOpen;
    sLoss   = position_sLoss;
    pVolume = position_pVolume;
    }
};
int main() {
    //Расчёт риска по позиции
    Position newLong;
    double position_pOpen = 0.0;
    std::cout << "Введите цену открытия позиции\n ---> ";
    std::cin >> position_pOpen;
    double position_sLoss = 0.0;
    std::cout << "Введите цену stop loss\n ---> ";
    std::cin >> position_sLoss;
    double position_pVolume;
    std::cout << "Введите объём позиции\n ---> ";
    std::cin >> position_pVolume;
    newLong.setPosition(position_sLoss, position_pOpen, position_pVolume);
    std::cout << "По достижении уровня цены " << position_sLoss << " убыток позиции составит " << newLong.risk(position_sLoss, position_pOpen, position_pVolume);
    return 0;
}
