#ifndef PYTHONIC_DICT_POP_HPP
#define PYTHONIC_DICT_POP_HPP

#include "pythonic/__dispatch__/pop.hpp"

namespace pythonic {

    namespace __dict__ {
        ALIAS(pop, pythonic::__dispatch__::pop);
        PROXY(pythonic::__dict__, pop);
    }
}

#endif
