/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:18:28 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/14 22:18:29 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(const std::string& type) : type(type) {
    std::cout << "AAnimal parameterized constructor called." << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
