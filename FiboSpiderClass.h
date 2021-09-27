#ifndef POSITION_FIBOSPIDERCLASS_H
#define POSITION_FIBOSPIDERCLASS_H

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

    double setPosition(double position_pOpen, double position_sLoss, double position_pRisk) {
        pOpen = position_pOpen;
        sLoss = position_sLoss;
        pRisk = position_pRisk;
    }
};
#endif //POSITION_FIBOSPIDERCLASS_H
