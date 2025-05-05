#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
private:
    std::string _name;
    std::string _effects;

    ASpell(const ASpell &src);
    ASpell &operator=(const ASpell &src);
    
public:
    virtual ~ASpell();
    ASpell(std::string name, std::string effects);

    std::string getName(void) const;
    std::string getEffects(void) const;

    virtual ASpell *clone() = 0;

    void launch(const ATarget &src) const;
};

#endif