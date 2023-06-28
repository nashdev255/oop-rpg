#pragma once
#include <iostream>
#include <string>
#include "../Includes/CharacterInclude.hpp"

class Character {
    protected:
        // constant status
        std::string name;
        ElementalAttribute element;

        // special status
        int level, reqExp, exp;

        // flux status
        int maxhp, hp, atk, def, spd;
        bool isAlive = true;

    public:
        // general
        Character() {};
        Character(std::string name, int maxhp, int atk, int def, int spd);
        virtual ~Character() {};
        void showStatus();

        // alive or Not
        bool getAlive();
        void setAlive(bool alive);

        // messages
        virtual void aliveMessage();
        virtual void attackMessage();

        // getter, setter
        std::string getName();
        void setName(std::string name);
        ElementalAttribute getElement();
        void setElement(ElementalAttribute element);

        int getLevel();
        void setLevel(int level);
        int getReqExp();
        void setReqExp(int reqExp);
        int getExp();
        void setExp(int exp);

        int getMaxhp();
        void setMaxhp(int maxhp);
        int getHp();
        void setHp(int hp);
        int getAtk();
        void setAtk(int atk);
        int getDef();
        void setDef(int def);
        int getSpd();
        void setSpd(int spd);

        // receiver
        void damaged(int atk);
        void healed(int point);

};

// alive or not
inline bool Character :: getAlive() {
    return this->isAlive;
}

inline void Character :: setAlive(bool const alive) {
    this->isAlive = alive;
}

// getter, setter
inline std::string Character :: getName() {
    return this->name;
}

inline void Character :: setName(std::string name) {
    this->name = name;
}

inline ElementalAttribute Character :: getElement() {
    return this->element;
}

inline void Character :: setElement(ElementalAttribute element) {
    this->element = element;
}

inline int Character :: getLevel() {
    return this->level;
}

inline void Character :: setLevel(int level) {
    this->level = level;
}

inline int Character :: getReqExp() {
    return this->reqExp;
}

inline void Character :: setReqExp(int reqExp) {
    this->reqExp = reqExp;
}

inline int Character :: getExp() {
    return this->exp;
}

inline void Character :: setExp(int exp) {
    this->exp = exp;
}

inline int Character :: getMaxhp() {
    return this->maxhp;
}

inline void Character :: setMaxhp(int const maxhp) {
    this->maxhp = maxhp;
}

inline int Character :: getHp() {
    return this->hp;
}

inline void Character :: setHp(int const hp) {
    this->hp = hp;
}

inline int Character :: getAtk() {
    return this->atk;
}

inline void Character :: setAtk(int const atk) {
    this->atk = atk;
}

inline int Character :: getDef() {
    return this->def;
}

inline void Character :: setDef(int const def) {
    this->def = def;
}

inline int Character :: getSpd() {
    return this->spd;
}

inline void Character :: setSpd(int const spd) {
    this->spd = spd;
}
