#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const& getName() const;
        std::string const& getTitle() const;
        void setTitle(std::string const& title);
        void introduce() const;
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget& target);

    private:
        Warlock(Warlock const& src);
        Warlock& operator=(Warlock const& src);
        std::string _name;
        std::string _title;
        SpellBook spellbook;
};