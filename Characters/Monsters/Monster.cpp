#include "Monster.hpp"

Monster :: Monster(std::string name, int maxhp, int atk, int def, int spd) {
    this->name = name;
    this->maxhp = maxhp;
    this->hp = this->maxhp;
    this->atk = atk;
    this->def = def;
    this->spd = spd;
}

void Monster :: deadMessage() {
    if(this->getAlive()==false) {
        std::cout << this->name << " fainted!" << std::endl;
    }
}

void Monster :: damaged(int const point) {
    this->hp -= point;
    std::cout << "deal " << point << " damage to " << this->name << std::endl;
    if(this->hp<=0) {
        this->hp = 0;
        this->setAlive(false);
    }
}
