#include "SpellBook.hpp"
#include  "ASpell.hpp"

SpellBook::~SpellBook(void){
    for (std::map<std::string, ASpell*>::iterator i = this->_book.begin(); i != this->_book.end(); i++){
		if (i->second)
			delete (i->second);
	}
    _book.clear();
}

SpellBook::SpellBook(void){}

void SpellBook::learnSpell(ASpell *src){
    if (src == NULL)
        return ;
    std::string name = src->getName();
    std::map<std::string, ASpell*>::iterator i = this->_book.find(name);
    if (name != i->first)
    {
        std::pair<std::string, ASpell*> pair(name, src);
        this->_book.insert(pair);
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator i = this->_book.find(spellName);
    if (spellName == i->first)
    {
        delete i->second;
        i->second = NULL;
        this->_book.erase(spellName);
    }

}

ASpell *SpellBook::createSpell(std::string const  &spellName)
{
    std::map<std::string, ASpell*>::iterator i = this->_book.find(spellName);
    if (spellName == i->first)
       return (i->second);
    return (NULL);
}
