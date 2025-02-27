#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target && _book.find(target->getType()) == _book.end())
        _book[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const& type)
{
    std::map<std::string, ATarget*>::iterator it = _book.find(type);
    if (it != _book.end())
    {
        delete it->second;
        _book.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(std::string const& type)
{
    std::map<std::string, ATarget*>::iterator it = _book.find(type);
    if (it != _book.end())
    {
        return it->second->clone();
    }
    return NULL;
}
