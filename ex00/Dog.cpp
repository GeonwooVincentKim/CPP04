/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:06:56 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:22:00 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog - " << type << " constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog - " << type << " copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog - " << type << " assignment operator called." << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog - " << type << " destructor called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog - " << type << " Woof! Woof!" << std::endl;
}
