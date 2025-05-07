#include "Warlock.hpp"

/* coplien's form ----------------------------------------------------------- */

Warlock::~Warlock(void)
{
	for (std::map<std::string, ASpell*>::iterator i = this->_book.begin(); i != this->_book.end(); i++){
		if (i->second)
			delete (i->second);
	}
	_book.clear();
	std::cout << this->_name << " My job here is done!" << std::endl;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName(void) const { return this->_name; }

const std::string &Warlock::getTitle(void) const { return this->_title; }

void Warlock::setTitle(const std::string &title) { this->_title = title; }

void Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

// new

void Warlock::learnSpell(ASpell *spell)
{
	if (!spell)
		return;
	std::string name = spell->getName();
	std::pair<std::string, ASpell *> pair(name, spell);
	this->_book.insert(pair);
}

void Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell *>::iterator i = this->_book.find(spellName);
	if (spellName == i->first)
	{
		delete i->second;
		i->second = NULL;
		this->_book.erase(i->first);
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	std::map<std::string, ASpell *>::iterator i = this->_book.find(spellName);
	if (spellName == i->first)
	{
		i->second->launch(target);
	}
}