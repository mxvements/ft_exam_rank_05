#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator  {
    private:
        std::map<std::string, ATarget*> _generator;
        
        TargetGenerator(const TargetGenerator &src);
        TargetGenerator &operator=(const TargetGenerator &src);
    public:
        ~TargetGenerator(void);
        TargetGenerator(void);

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);

} ;

#endif