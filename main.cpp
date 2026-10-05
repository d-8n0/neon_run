#include <iostream>

#define START_HP            100
#define START_ATTACK         10
#define START_DEFENSE         5
#define START_HACK            5
#define START_MONEY         100
#define START_REPUTATION      0

int main()
{
    setlocale(LC_ALL, "Russian");
    const std::string BOLD = "\033[1m";
    const std::string RESET = "\033[0m";

    std::cout << BOLD << "==================\n";
    std::cout         << " N E O N . R U N\n";
    std::cout         << "==================\n" << RESET;

    std::string heroName;
    int hp = START_HP;
    int maxHp = START_HP;
    int attack = START_ATTACK;
    int defense = START_DEFENSE;
    int hackSkill = START_HACK;
    int money = START_MONEY;
    int reputation = START_REPUTATION;

    bool isRookie = true;

    double percentHP = maxHp / 100.0 * hp;

    std::cout << "\nВведите позывной вышего героя: ";
    std::getline(std::cin, heroName);
    std::cout << heroName << std::endl;

    std::cout << "\n=== ХАРАКТЕРИСТИКИ " << heroName << " ===" << std::endl;
    std::cout << "Атака     : " << attack << std::endl;
    std::cout << "Защита    : " << defense << std::endl;
    std::cout << "Хак скилл : " << hackSkill << std::endl;
    std::cout << "Деньги    : " << money << std::endl;
    std::cout << "HP        : " << hp << " / " << maxHp << " ( " << percentHP << "% )" << std::endl;


}
