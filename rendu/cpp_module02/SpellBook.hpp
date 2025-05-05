#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
class ASpell ;

class SpellBook {
    private:
        std::map<std::string, ASpell *> _book;

        SpellBook(const SpellBook &src);
        SpellBook &operator=(const SpellBook &src);
        
    public:
        ~SpellBook(void);
        SpellBook(void);

        void learnSpell(ASpell *src);
        void forgetSpell(std::string const &spellName);
        ASpell *createSpell(std::string const  &spellName);
} ;

#endif