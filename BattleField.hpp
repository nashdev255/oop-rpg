#pragma once
#include <iostream>
#include <vector>
#include <random>
#include "./Characters/Character.hpp"
#include "./Party.hpp"
#include "./Characters/Fighters/Fighter.hpp"
#include "./Characters/Monsters/Monster.hpp"

class BattleField {
    private:
        Party* party;
        Fighter* selectedFighter;
        Monster* monster;
        bool fighterTurn;
    public:
        BattleField(Party* party, Monster* monster);
        virtual ~BattleField() {};
        // turn
        void initTurn();
        void setTurn(bool turn);
        void switchTurn();
        void endTurn();
        void action();
        void selectFighter();
        void selectFighterAttack();
        void randomMonsterAttack();
        Fighter* selectRandomFighter();
        // Status
        Party* getParty();
        void setParty(Party* party);
        Monster* getMonster();
        void setMonster(Monster* monster);
};

inline Party* BattleField :: getParty() {
    return this->party;
}

inline void BattleField :: setParty(Party* const party) {
    this->party = party;
}

inline Monster* BattleField :: getMonster() {
    return this->monster;
}

inline void BattleField :: setMonster(Monster* const monster) {
    this->monster = monster;
}
