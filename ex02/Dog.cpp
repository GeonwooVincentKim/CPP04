/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:18:41 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/14 22:18:42 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
