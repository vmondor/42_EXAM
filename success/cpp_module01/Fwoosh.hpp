#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    public:
        Fwoosh();
        Fwoosh* clone() const;
};