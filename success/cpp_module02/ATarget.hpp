#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget(std::string type);
        virtual ~ATarget();
        std::string const& getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(ASpell const& spell);

    private:
        ATarget();
        ATarget(ATarget const& src);
        ATarget& operator=(ATarget const& src);
        std::string _type;
};