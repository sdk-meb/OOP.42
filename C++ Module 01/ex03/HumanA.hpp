#ifndef _HUMAN_A_H_
# define _HUMAN_A_H_

# include<iostream>
# include<Weapon.hpp>

class HumanA{

    Weapon wpn;
    std::string name;

public:

    HumanA(std::string name, Weapon wpn){
        this->name = name;
        this->wpn = wpn;
    }
    void    attack();

};

# endif