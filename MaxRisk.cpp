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
//Сначала выясним риск в одном лоте
double oneLotRisk = pOpen - sLoss;
//Сколько в допустимом риске рисков одного лота
double size;
        size = risk / oneLotRisk;
        std::cout << "Размер лота позиции = " << size << "\n";
}