/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:14:23 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/14 22:14:24 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    delete dog;
    delete cat;

    std::cout << "\nTesting deep copies:" << std::endl;

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the ball!");
    Dog copyDog = originalDog;

    std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    copyDog.getBrain()->setIdea(0, "Guard the house!");
    std::cout << "After modification:" << std::endl;
    std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\nTesting Animal array:" << std::endl;

    const Animal* animals[4];
    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < 4; ++i)
        delete animals[i];

    return 0;
}
