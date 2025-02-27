#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const& type);
        ATarget* createTarget(std::string const& type);
   
    private:
        std::map<std::string, ATarget*> _book;
        TargetGenerator(TargetGenerator const& src);
        TargetGenerator& operator=(TargetGenerator const& src);
};