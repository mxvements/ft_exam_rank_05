#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    private:
        std::string _name;
        std::string _title;
        //new
        ASpell *_spell;
    protected:
    public:
        ~Warlock(void);
        Warlock(std::string name, std::string title);

        const std::string &getName(void) const;
        const std::string &getTitle(void) const;

        void setTitle(const std::string &title);

        void introduce(void) const;

        //new
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget &target);
} ;

#endif