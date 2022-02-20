#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:

	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		~WrongCat(void);
		WrongCat& operator = (const WrongCat& other);

		void makeSound(void) const;
};

#endif
