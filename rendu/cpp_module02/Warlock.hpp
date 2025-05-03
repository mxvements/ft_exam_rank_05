#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
#include "Fwoosh.hpp"
#include "Dummy.hpp"
# include "SpellBook.hpp"


class Warlock {
    private:
        std::string _name;
        std::string _title;
        //new
        SpellBook _book;
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