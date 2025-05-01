#include "Warlock.hpp"

/**
 * c++ -Wall -Wextra -Werror -std=c++98 Warlock.cpp ASpell.cpp Fwoosh.cpp ATarget.cpp Dummy.cpp main.cpp
 */
int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}