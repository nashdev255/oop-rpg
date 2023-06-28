#pragma once
#include <iostream>
#include <vector>
#include <stdarg.h>
#include "./Characters/Character.hpp"
#include "./Characters/Fighters/Fighter.hpp"

class Fighter;

class Party {
    private:
        std::vector<Fighter*> fighters;
    public:
        template<typename... Args> Party(Args*... args);
        virtual ~Party();
        std::vector<Fighter*> getFighters();
        template<typename... Args> void setFighters(Args*... args);
};

inline std::vector<Fighter*> Party :: getFighters() {
    return this->fighters;
}

template<typename... Args>
inline void Party :: setFighters(Args*... args) {
    this->fighters = { args... };
}
