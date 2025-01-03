/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:13:28 by geonwkim          #+#    #+#             */
/*   Updated: 2025/01/03 19:11:05 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& other); // Copy constructor 
    Animal& operator=(const Animal& other); // Assignment operator (代入演算子を追加)
    virtual ~Animal(); // Pure virtual destructor to make Animal abstract.

    virtual void makeSound() const = 0; // Pure virtual function.
    std::string getType() const;
};

#endif
