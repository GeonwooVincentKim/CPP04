/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:13:37 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/18 22:44:54 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    // std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
    // std::cout << "Animal parameterized constructor called." << std::endl;
}

Animal::~Animal() {
    // std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const {
    return type;
}
