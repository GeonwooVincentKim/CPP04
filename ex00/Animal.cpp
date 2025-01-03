/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:06:46 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:20:59 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal - " << type << " constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
    std::cout << "Animal - " << type << " parameterized constructor called." << std::endl;
}

// Animal::Animal(const Animal& origin)
// {
//     *this = origin;
//     std::cout << "Animal copy constructor called." << std::endl;
// }

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal - " << type << " copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal - " << type << " assignment operator called." << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal - " << type << " destructor called." << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal - " << type << " makes a generic sound." << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}
