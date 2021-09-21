#include <iostream>
class Position {
private:
    double pRisk;
    double pSize;
    double pOpen;
    double sLoss;
public:
double maxRisk(double sLoss, double pOpen, double pRisk) {
    return pRisk / (pOpen - sLoss);
    }
    double setPosition(double position_pOpen, double position_sLoss, double position_pRisk)
    {
    pOpen   = position_pOpen;
    sLoss   = position_sLoss;
    pRisk = position_pRisk;
    }
};
int main() {
    //Расчёт риска по позиции
    Position newLong;
    double position_pRisk = 0.0;
    std::cout << "Введите максимальный риск по позиции\n ---> ";
    std::cin >> position_pRisk;
    double position_pOpen = 0.0;
    std::cout << "Введите цену открытия позиции\n ---> ";
    std::cin >> position_pOpen;
    double position_sLoss = 0.0;
    std::cout << "Введите цену stop loss\n ---> ";
    std::cin >> position_sLoss;
    newLong.setPosition(position_sLoss, position_pOpen, position_pRisk);
    std::cout << "Рабочий объём по позиции = " << newLong.maxRisk(position_sLoss, position_pOpen, position_pRisk);
    return 0;
}
