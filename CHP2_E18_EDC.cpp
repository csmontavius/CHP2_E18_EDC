/*
Program: Energy Drink Consumption
Programmer: Montavius Spratley Burford
Date: 2/9/2025
Requirments: Write a program that displays the following:
the approximate number of customers in a survey who purchase one or more energy drinks per week
the approximate number of customers in a survey who prefer citrus-flavored energy drinks
*/

#include <iostream>

void calculate_energy_drink_stats(int surveyed_customers) {
    const double percentage_energy_drink_consumers = 0.15;
    const double percentage_citrus_drinkers = 0.58;

    
    int num_energy_drink_consumers = static_cast<int>(surveyed_customers * percentage_energy_drink_consumers);
    std::cout << "Approximate number of customers who purchase one or more energy drinks per week: " << num_energy_drink_consumers << std::endl;

   
    int num_citrus_drinkers = static_cast<int>(num_energy_drink_consumers * percentage_citrus_drinkers);
    std::cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << num_citrus_drinkers << std::endl;
}

int main() {
    int surveyed_customers;
    std::cout << "Enter the number of customers surveyed: ";
    std::cin >> surveyed_customers;

    calculate_energy_drink_stats(surveyed_customers);

    return 0;
}
