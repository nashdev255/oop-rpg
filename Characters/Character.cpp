#pragma once
#include "Character.hpp"

// General
Character :: Character(std::string name, int maxhp, int atk, int def, int spd) {
    this->name = name;
    this->maxhp = maxhp;
    this->hp = this->maxhp;
    this->atk = atk;
    this->def = def;
    this->spd = spd;
}

void Character :: showStatus() {
    std::cout << "<showStatus>" << std::endl;
    std::cout << "name:" << this->name << std::endl;
    std::cout << "HP:" << this->hp << '/' << this->maxhp << std::endl;
    std::cout << "ATK:" << this->atk << std::endl;
    std::cout << "DEF:" << this->def << std::endl;
}

// receiver
void Character :: damaged(int const atk) {
    this->hp -= atk;
    if(this->hp<=0) {
        this->hp = 0;
        this->setAlive(false);
    }
}

void Character :: healed(int const point) {
    if(this->isAlive==false) {
        std::cout << this->name << " couldn't be healed..." << std::endl;
    } else {
        if(this->maxhp-this->hp<point) {
            this->setHp(this->getMaxhp());
        } else {
            this->hp += point;
        }
    }
}
