#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell {
    private:
    public:
        ~Polymorph(void);
        Polymorph(void);

        Polymorph *clone(void);
} ;

# endif