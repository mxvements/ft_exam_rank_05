#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

class Warlock {
    private:
        const std::string _name;
        std::string _title;
    protected:
    public:
        ~Warlock(void);
        Warlock(void);
        Warlock(const Warlock &src);
        Warlock &operator=(const Warlock &src);

        std::string &getName(void) const;
        std::string &getTitle(void) const;
        void setTitle(std::string &title);

} ;

#endif