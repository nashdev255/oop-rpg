#include "Party.hpp"

template<class... Args>
Party :: Party(Args*... args) {
    this->fighters = { args... };
}
