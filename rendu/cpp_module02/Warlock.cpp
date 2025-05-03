#include "Warlock.hpp"

/* coplien's form ----------------------------------------------------------- */

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
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
	this->_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	this->_book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	ASpell *saved = this->_book.createSpell(spellName);
	if (saved)
	{
		saved->launch(target);
	}
}