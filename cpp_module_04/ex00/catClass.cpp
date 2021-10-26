#include "animalClass.hpp"
#include "catClass.hpp"

Cat::Cat(void): Animal("Cat")
{
  std::cout << "Cat constructor called" << std::endl;
  return ;
}

//https://www.cplusplus.com/forum/beginner/73730/
Cat::Cat(const Cat & src): Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
  return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
  return ;
}

Cat &				Cat::operator=(Cat const &rhs )
{
  this->type = rhs.type;
  return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
