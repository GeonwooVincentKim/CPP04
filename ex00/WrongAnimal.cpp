/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:07:00 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:25:24 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal - " << type << " constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
    std::cout << "WrongAnimal - " << type << " parameterized constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal - " << type << " copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "WrongAnimal - " << type << " assignment operator called." << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal - " << type << " destructor called." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal - " << type << " makes a generic sound." << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
