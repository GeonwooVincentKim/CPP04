/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:14:16 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:46:45 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    brain = new Brain();
    std::cout << "Cat - " << type << " constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat - " << type << " copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat - " << type << " assignment operator called." << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat - " << type << " destructor called." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat - " << type << " Meow! Meow!" << std::endl;
}
