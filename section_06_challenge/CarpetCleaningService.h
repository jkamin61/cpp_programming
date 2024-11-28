#ifndef CARPETCLEANINGSERVICE_H
#define CARPETCLEANINGSERVICE_H

class CarpetCleaningService {
public:
    static void start_program();
private:
    static constexpr int CHARGE_PER_SMALL_ROOM = 25;
    static constexpr int CHARGE_PER_LARGE_ROOM = 35;
    static constexpr double SALES_TAX_RATE = 0.06;
    static constexpr int DAYS_VALID_FOR = 30;
};

#endif // CARPETCLEANINGSERVICE_H
