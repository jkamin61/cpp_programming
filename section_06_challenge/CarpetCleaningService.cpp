#include "CarpetCleaningService.h"
#include <iostream>

void CarpetCleaningService::start_program() {
    const std::string greeting = "Welcome to carpet's cleaning service";
    std::cout << greeting << std::endl;
    std::cout << "How many small rooms would you like cleaned?" << std::endl;
    int number_of_small_rooms;
    std::cin >> number_of_small_rooms;
    std::cout << "How many large rooms would you like cleaned?" << std::endl;
    int number_of_large_rooms;
    std::cin >> number_of_large_rooms;

    const int cost = number_of_large_rooms * CHARGE_PER_LARGE_ROOM + number_of_small_rooms * CHARGE_PER_SMALL_ROOM;
    const double tax = static_cast<double>(cost) * SALES_TAX_RATE;

    std::cout << "Estimate for carpet cleaning service\n"
              << "Number of small rooms: " << number_of_small_rooms
              << "\nNumber of large rooms: " << number_of_large_rooms
              << "\nPrice per small room: $" << CHARGE_PER_SMALL_ROOM
              << "\nPrice per large room: $" << CHARGE_PER_LARGE_ROOM
              << "\nCost: $" << cost
              << "\nTax: $" << tax
              << "\n========================="
              << "\nTotal estimate: $" << (cost + tax)
              << "\nThis estimate is valid for " << DAYS_VALID_FOR << " days" << std::endl;
}
