/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:01:22 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/21 02:15:15 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat():Animal("Cat"){
 
    std::cout << "Cat are here!" << std::endl; 
}

void Cat::makeSound() const{

        std::cout << "🐈🐈🐈 mio...."<< std::endl;
}

Cat::~Cat(void){


  std::cout << "The Cat killed!" << std::endl;
}



/* *******************   WRONG_CAT   ******************* */
WrongCat::WrongCat():WrongAnimal("WrongCat"){
 
    std::cout << "WrongCat are here!" << std::endl; 
}

void WrongCat::makeSound() const{

        std::cout << "🐈🐈🐈 mio...."<< std::endl;
}

WrongCat::~WrongCat(void){


  std::cout << "The WrongCat killed!" << std::endl;
}