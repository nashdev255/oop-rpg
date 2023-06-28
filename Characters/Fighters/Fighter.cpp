#pragma once
#include "Fighter.hpp"

Fighter :: Fighter(std::string const name, ElementalAttribute const element, int const maxhp, int const atk, int const def, int const spd) {
    this->name = name;
    this->element = element;
    this->maxhp = maxhp;
    this->hp = this->maxhp;
    this->atk = atk;
    this->def = def;
    this->spd = spd;
}

void Fighter :: aliveMessage() {
    if(this->getAlive()==true) {
        std::cout << this->name << " has revived!" << std::endl;
    }
    if(this->getAlive()==false) {
        std::cout << this->name << " has run out of energy..." << std::endl;
    }
}

void Fighter :: selectAttack(Monster* monster) {
    std::cout << "enter how to attack" << std::endl;
    std::cout << "<methods>" << std::endl;
    std::cout << "1:attack" << std::endl;
    std::string method;
    bool flag = true;
    while(flag) {
        std::cout << ">>";
        std::cin >> method; 
        if(method=="attack") {
            flag = false;
            this->normalAttack(monster);
        } else {
            std::cout << "type error" << std::endl;
        }
    }
    std::cout << std::endl;
}

void Fighter :: normalAttack(Monster* monster) {
    std::cout << this->name << '\'' << "s attack!" << std::endl;
    monster->damaged(this->atk);
}

void Fighter :: heal(Fighter* fighter) {
    int point = (this->maxhp)/20;
    fighter->healed(point);
}
