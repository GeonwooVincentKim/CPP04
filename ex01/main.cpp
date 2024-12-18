/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:14:23 by geonwkim          #+#    #+#             */
/*   Updated: 2024/12/18 23:01:46 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// int main() {
//     // Testing basic functionality
//     const Animal* dog = new Dog();
//     const Animal* cat = new Cat();

//     dog->makeSound();
//     cat->makeSound();

//     delete dog;
//     delete cat;

//     std::cout << "\nTesting deep copy:" << std::endl;

//     Dog originalDog;
//     originalDog.getBrain()->setIdea(0, "Fetch the ball");
//     Dog copyDog = originalDog;

//     std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
//     std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

//     copyDog.getBrain()->setIdea(0, "Guard the house");
//     std::cout << "After modification:" << std::endl;
//     std::cout << "Original Dog's Brain Idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
//     std::cout << "Copy Dog's Brain Idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;



    
//     return 0;
// }


int main() {
    // // テストケース1: 基本的な代入
    // {
    //     std::cout << "Test Case 1: Basic Assignment" << std::endl;
    //     Dog dog1;
    //     Dog dog2;
    //     dog2 = dog1;
    // }

    // // テストケース2: コピーコンストラクター
    // {
    //     std::cout << "\nTest Case 2: Copy Constructor" << std::endl;
    //     Dog dog1;
    //     Dog dog2(dog1);
    // }

    // // テストケース3: 自己代入
    // // {
    // //     std::cout << "\nTest Case 3: Self Assignment" << std::endl;
    // //     Dog dog1;
    // //     dog1 = dog1;
    // // }

    // // テストケース4: 連続代入と破棄
    // {
    //     std::cout << "\nTest Case 4: Multiple Assignments" << std::endl;
    //     Dog dog1;
    //     Dog dog2;
    //     Dog dog3;
        
    //     dog2 = dog1;
    //     dog3 = dog2;
    // }

    // // メモリリークを確認するためのより長い操作
    // {
    //     std::cout << "\nTest Case 5: Extended Memory Test" << std::endl;
    //     for (int i = 0; i < 100; ++i) {
    //         Dog dog1;
    //         Dog dog2;
    //         dog2 = dog1;
    //     }
    // }

    //Dog dog1;
    Dog *dog2 = new Dog();
    Dog *dog1 = new Dog();

    // dog1->getBrain()->setIdea(0, "i'm dog1");
    // dog2->getBrain()->setIdea(0, "i'm dog2");

    dog1 = dog2;

    // std::cout << dog1->getBrain()->getIdea(0) << std::endl;
    
    delete dog1;
    delete dog2;
    return 0;
}
