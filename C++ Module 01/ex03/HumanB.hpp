#ifndef _HUMAN_B_H_
# define _HUMAN_B_H_

# include<iostream>
# include<Weapon.hpp>

class HumanB{

    Weapon* Wpn;
    std::string Name;

public:

    HumanB(std::string name);
    void attack();
    void    setWeapon(Weapon& wpn);

};


# endif