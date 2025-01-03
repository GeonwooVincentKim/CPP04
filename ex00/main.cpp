/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:06:59 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:32:22 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "------- Testing Original Cases below: -------" << std::endl;
    const Animal* oldMeta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    oldMeta->makeSound();

    delete oldMeta;
    delete j;
    delete i;

    std::cout << std::endl;
    std::cout << "------- Testing New Cases below: -------" << std::endl;

    // Base class pointer to base class object
    const Animal* meta = new Animal();
    std::cout << std::endl;

    // Base class pointer to derived class objects
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;

    // Print types
    std::cout << "Dog Type: " << dog->getType() << std::endl;
    std::cout << "Cat Type: " << cat->getType() << std::endl;
    std::cout << std::endl;

    // Test makeSound() (virtual function behavior)
    cat->makeSound();  // Should call Cat's makeSound
    dog->makeSound();  // Should call Dog's makeSound
    meta->makeSound(); // Should call Animal's makeSound
    std::cout << std::endl;

    // WrongAnimal behavior test
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << std::endl;

    std::cout << "WrongCat Type: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();  // Should call WrongAnimal's makeSound (not overridden)
    wrongMeta->makeSound(); // Should call WrongAnimal's makeSound
    std::cout << std::endl;

    // Clean up
    delete meta;
    delete dog;
    delete cat;
    std::cout << std::endl;
    delete wrongMeta;
    delete wrongCat;

    return 0;
}
