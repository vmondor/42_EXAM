#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const& name);
        ASpell* createSpell(std::string const& name);
   
    private:
        std::map<std::string, ASpell*> _book;
        SpellBook(SpellBook const& src);
        SpellBook& operator=(SpellBook const& src);
};