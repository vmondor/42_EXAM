#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{

}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell && _book.find(spell->getName()) == _book.end())
        _book[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const& name)
{
    std::map<std::string, ASpell*>::iterator it = _book.find(name);
    if (it != _book.end())
    {
        delete it->second;
        _book.erase(it);
    }
}

ASpell* SpellBook::createSpell(std::string const& name)
{
    std::map<std::string, ASpell*>::iterator it = _book.find(name);
    if (it != _book.end())
    {
        return it->second->clone();
    }
    return NULL;
}
