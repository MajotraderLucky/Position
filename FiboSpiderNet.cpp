#include <iostream>
#include "FiboSpiderClass.h"

class FiboWaves {
private:
    double fStart;
    double fFinish;
    double fLongWave;
    double fPercentWave;
    double fLevel;
public:
    double fiboLine(double fFinish, double fLongWave, double fLevel) {
        return fFinish - ((fLongWave / 100) * fLevel);
    }

public:
    double fiboLineShort(double fFinish, double fLongWave, double fLevel) {
        return fFinish + ((fLongWave / 100) * fLevel);
    }

    double setFiboWaves(double fiboWaves_fStart, double fiboWaves_fFinish, double fiboWaves_fLongWave, double fiboWaves_fPercentWave, double fiboWaves_fLevel)
    {
        fStart       = fiboWaves_fStart;
        fFinish      = fiboWaves_fFinish;
        fLongWave    = fiboWaves_fLongWave;
        fPercentWave = fiboWaves_fPercentWave;
        fLevel       = fiboWaves_fLevel;
    }
};

int main() {
    FiboWaves initFibo;
     double fiboWaves_fStart;
    std::cout << "Проведём расчёт сетки Фибонначчи\n";
    std::cout << "Введите цену начала сетки ---> ";
    std::cin >> fiboWaves_fStart;
    std::cout << "Введите цену конца сетки ---> ";
     double fiboWaves_fFinish;
    std::cin >> fiboWaves_fFinish;
    if (fiboWaves_fStart < fiboWaves_fFinish) {
        double fiboWaves_fLongWave;
        fiboWaves_fLongWave = fiboWaves_fFinish - fiboWaves_fStart;
        double fiboWaves_fPercentWave;
        fiboWaves_fPercentWave = (fiboWaves_fLongWave / fiboWaves_fFinish) * 100;
        std::cout << "Производим расчёт длинной позиции.\n";
        std::cout << "Длинна волны внутри сетки Фибо = " << fiboWaves_fLongWave << " пунктов.\n";
        std::cout << "Длинна волны в процентах = " << fiboWaves_fPercentWave << " %\n";
           double fiboWaves_fLevel = 23.6;
           initFibo.setFiboWaves(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel, fiboWaves_fPercentWave, fiboWaves_fStart);
         std::cout << "Уровень фибо 0,236 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
          fiboWaves_fLevel = 38.2;
         std::cout << "Уровень фибо 0,382 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
          fiboWaves_fLevel = 50.0;
         std::cout << "Уровень фибо 0,500 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
          fiboWaves_fLevel = 61.8;
         std::cout << "Уровень фибо 0,618 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
          fiboWaves_fLevel = 78.6;
         std::cout << "Уровень фибо 0,786 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
         // Рассчитаем риск позиции открытой по сетке фибо
           Position initPosition;
                    double position_pRisk;
                   std::cout << "Определите риск для первой сделки от уровня 0,382\n";
                   std::cout << "---> ";
                   std::cin >> position_pRisk;
                   fiboWaves_fLevel = 38.2;
                    double position_pOpen = initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel);
                   std::cout << "Первый вход от уровня 0,382 по цене " << position_pOpen << "\n";
                    double position_sLoss;
                   std::cout << "Укажите уровень stop loss\n";
                   std::cout << "---> ";
                   std::cin >> position_sLoss;
                   std::cout << "Размер первого ордера = " << initPosition.maxRisk(position_sLoss, position_pOpen, position_pRisk);

    } else if (fiboWaves_fStart > fiboWaves_fFinish) {
         double fiboWaves_fLongWave = fiboWaves_fStart - fiboWaves_fFinish;
         double fiboWaves_fPercentWave = (fiboWaves_fLongWave / fiboWaves_fStart) * 100;
        std::cout << "Производим расчёт длинной позиции.\n";
        std::cout << "Длинна волны внутри сетки Фибо = " << fiboWaves_fLongWave << "\n";
        std::cout << "Длинна волны в процентах = " << fiboWaves_fPercentWave << " %\n";
         double fiboWaves_fLevel = 23.6;
          initFibo.setFiboWaves(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel, fiboWaves_fPercentWave, fiboWaves_fStart);
        std::cout << "Уровень фибо 0,236 = " << initFibo.fiboLineShort(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
         fiboWaves_fLevel = 38.2;
        std::cout << "Уровень фибо 0,382 = " << initFibo.fiboLineShort(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
         fiboWaves_fLevel = 50.0;
        std::cout << "Уровень фибо 0,500 = " << initFibo.fiboLineShort(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
         fiboWaves_fLevel = 61.8;
        std::cout << "Уровень фибо 0,618 = " << initFibo.fiboLineShort(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
         fiboWaves_fLevel = 78.6;
        std::cout << "Уровень фибо 0,786 = " << initFibo.fiboLineShort(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel) << "\n";
    } else {
        std::cout << "Введены некорректные данные!\n";
    }
}

