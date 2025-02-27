#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const = 0;
        void launch(ATarget& target) const;

    protected:
        ASpell(ASpell const& src);
        ASpell& operator=(ASpell const& src);
        std::string _name;
        std::string _effects;
};