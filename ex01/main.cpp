/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:14:23 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/18 21:09:12 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Testing basic functionality
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    std::cout << "\nTesting deep copy:" << std::endl;

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Fetch the ball");
    Dog copyDog = originalDog;

    std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    copyDog.getBrain()->setIdea(0, "Guard the house");
    std::cout << "After modification:" << std::endl;
    std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    return 0;
}
