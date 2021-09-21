#include <iostream>

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
        std::cout << "Длинна волны внутри сетки Фибо = " << fiboWaves_fLongWave << "\n";
        std::cout << "Длинна волны в процентах = " << fiboWaves_fPercentWave << " %\n";
        double fiboWaves_fLevel = 23.6;
        initFibo.setFiboWaves (fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel, fiboWaves_fPercentWave, fiboWaves_fStart);
        std::cout << "Уровень фибо 0,236 = " << initFibo.fiboLine(fiboWaves_fFinish, fiboWaves_fLongWave, fiboWaves_fLevel);

        ///
        /*Область ниже ещё не переписана!
        double fibo_382 = finish - ((longWave / 100) * 38.2);
        std::cout << "Уровень фибо 0.382 = " << fibo_382 << "\n";
        double fibo_500 = finish - ((longWave / 100) * 50);
        std::cout << "Уровень фибо 0.500 = " << fibo_500 << "\n";
        double fibo_618 = finish - ((longWave / 100) * 61.8);
        std::cout << "Уровень фибо 0.618 = " << fibo_618 << "\n";
        double fibo_786 = finish - ((longWave / 100) * 78.6);
        std::cout << "Уровень фибо 0.786 = " << fibo_786 << "\n";
        //Начинаем расчёт позиции
        Position::open = fibo_382;
        std::cout << "Тестовый вывод данных класса Position - Position.open = " << Position::open << "\n";
         */
    }
}

