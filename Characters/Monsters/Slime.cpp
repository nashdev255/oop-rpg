#pragma once
#include "./Slime.hpp"

Slime :: Slime() {
    this->name = "Slime";
    this->element = Hydro;
    this->maxhp = 200;
    this->hp = this->maxhp;
    this->atk = 70;
    this->def = 70;
    this->spd = 30;
}

void Slime :: randomAction(Fighter* fighter) {
    std::random_device rand;
    std::mt19937 gen(rand());
    std::uniform_int_distribution<> randomMethod(1, 4);

    int method = randomMethod(gen);

    switch (method) {
        case 1:
            this->normalAttack(fighter);
        case 2:
            this->elementalAttack(fighter);
        case 3:
            this->bodySlamAttack(fighter);
        case 4:
            this->heal(this);
        default:
            break;
    }
}

void Slime :: normalAttack(Fighter* fighter) {
    fighter->setHp((fighter->getHp())-(this->atk));
}

void Slime :: elementalAttack(Fighter* fighter) {
    fighter->setHp((fighter->getHp())-(this->atk));
}

void Slime :: bodySlamAttack(Fighter* fighter) {
    fighter->setHp((fighter->getHp()-(this->atk+50)));
}

void Slime :: heal(Monster* monster) {
    monster->healed(this->hp/5);
}
