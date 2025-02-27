#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName() const
{
    return _name;
}

std::string const& Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(std::string const& title)
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell && _book.find(spell->getName()) == _book.end())
        _book[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string name)
{
    std::map<std::string, ASpell*>::iterator it = _book.find(name);
    if (it != _book.end())
    {
        delete it->second;
        _book.erase(it);
    }
}

void Warlock::launchSpell(std::string name, ATarget& target)
{
    std::map<std::string, ASpell*>::iterator it = _book.find(name);
    if (it != _book.end())
    {
        it->second->launch(target);
    }
}
