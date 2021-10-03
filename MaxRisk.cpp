#include <iostream>

int main() {
std::cout << "Введите допустимый риск по позиции\n";
std::cout << "---> ";
double risk;
    std::cin >> risk;
    std::cout << "Введите цену открытия позиции\n";
    std::cout << "---> ";
    double pOpen;
    std::cin >> pOpen;
    std::cout << "Введите цену stop loss\n";
    std::cout << "---> ";
    double sLoss;
    std::cin >> sLoss;
    double pProfit;
    std::cout << "Введите цену take profit\n";
    std::cout << "---> ";
    std::cin >> pProfit;
    if (sLoss < pOpen) {
//Сначала выясним риск в одном лоте
        double oneLotRiskLong = pOpen - sLoss;
//Сколько в допустимом риске рисков одного лота
        double sizeLong = risk / oneLotRiskLong;
        std::cout << "Размер лота длинной позиции = " << sizeLong << "\n";
        //Считаем прибыль в позиции с новым размером лота (sizeLong)
        double takeProfitLong = (pProfit - pOpen) * sizeLong;
        std::cout << "По достижении цены take profit будет получена прибыль в размере = " << takeProfitLong << "\n";
    } else if (sLoss > pOpen) {
        double oneLotRiskShort = sLoss - pOpen;
        double sizeShort = risk / oneLotRiskShort;
        std::cout << "Размер лота короткой позиции = " << sizeShort << "\n";
        double takeProfitShort = (pOpen - pProfit) * sizeShort;
        std::cout << "По достижении цены take profit будет получена прибыль в размере = " << takeProfitShort << "\n";
    } else {
        std::cout << "Вы ввели некорректные данные!\n";
    }
}