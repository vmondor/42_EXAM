#include "ATarget.hpp"

ATarget::ATarget(std::string type): _type(type)
{

}

ATarget::~ATarget()
{

}

std::string const& ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(ASpell const& spell)
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
