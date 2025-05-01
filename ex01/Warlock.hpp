#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

class Warlock {
    private:
        std::string _name;
        std::string _title;
    protected:
    public:
        ~Warlock(void);
        Warlock(std::string name, std::string title);

        const std::string &getName(void) const;
        const std::string &getTitle(void) const;

        void setTitle(const std::string &title);

        void introduce(void) const; 
} ;

#endif