#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell ;

class ATarget {
    private:
        std::string _type;
    public:
       virtual  ~ATarget();
        ATarget(std::string type);

        const std::string &getType(void) const;

        void setType(std::string type);

        virtual ATarget *clone() = 0;

        void getHitBySpell(const ASpell &src) const;

} ;

#endif