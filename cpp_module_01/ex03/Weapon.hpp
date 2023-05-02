#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string _type);
		Weapon();
		void setType(std::string _type);
		std::string getType();
};

// int main(void);

#endif

// class HumanA {
// 	Weapon &w;
// 	std::string name;


// 	public:
// 		HumanA(std::string _name, Weapon &_w): w(_w) { name = _name; }
// 		void attack() { std::cout << name << " atatcks with thueir " << w.getType() << std::endl; }

// };

// class HumanB {
// 	Weapon *w;
// 	std::string name;

// 	public:
// 		HumanB(std::string _name) { name = _name; }
// 		void attack() { std::cout << name << " atatcks with thueir " << w->getType() << std::endl; }
// 		void setWeapon(Weapon &z) { 
// 			w = &z;
// 		 }
// };



// int main()
// {

// 	// switch
// 	if (c == 5)
// 		return 5;
// 	else (c == 6)
// 		return 6;

// 	switch (c) {
// 		case (5) : return 5;
// 		case 6: return 6;
// 		default: return 0;

// 	}