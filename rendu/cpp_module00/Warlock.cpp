#include "Warlock.hpp"


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

void Warlock::introduce(void) const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}