/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:07:04 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 20:26:45 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongAnimal - " << type << " constructor called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongAnimal - " << type << " destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongAnimal - " << type << " copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongAnimal - " << type << " assignment operator called." << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongAnimal - " << type << " Wrong meow!" << std::endl;
}
