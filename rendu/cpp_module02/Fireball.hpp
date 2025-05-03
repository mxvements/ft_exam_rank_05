#ifndef Fireball_HPP
# define Fireball_HPP

# include "ASpell.hpp"

class Fireball : public ASpell {
    private:
    public:
        ~Fireball(void);
        Fireball(void);

        Fireball *clone(void);
} ;

# endif