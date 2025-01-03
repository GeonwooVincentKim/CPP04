/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:06:50 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:33:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat - " << type << " constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat - " << type << " copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Cat - " << type << " assignment operator called." << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat - " << type << " destructor called." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat - " << type << " Meow! Meow!" << std::endl;
}
