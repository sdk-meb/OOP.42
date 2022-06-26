#ifndef _WEAPON_H_
# define _WEAPON_H_

#include<iostream>

class Weapon{
    std::string type;

public:

    Weapon(std::string type=""):type(type){
    };
    const std::string&      getType();
    void                    setType(std::string type);
};

# endif