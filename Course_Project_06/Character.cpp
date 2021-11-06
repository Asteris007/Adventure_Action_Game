#include "Character.h"

#include <iostream>
#include <conio.h>



using std::string; using std::cout;
using std::endl;

Character::Character() {
	
	}
Character::Character(string m_name,  int m_hp, int m_strenght, int m_intelligence, int& x, int& y)
{
	this-> m_name=m_name;
	
	this->m_hp=m_hp;
	this->m_strenght=m_strenght;
	this->m_intelligence=m_intelligence;

	this->x = x;
	this->y = y;

}

void Character::SetName(string m_name) {
	this->m_name=m_name;
}



void Character::SetHP(int m_hp) {
	this->m_hp=m_hp;
}
void Character::SetStren(int m_strenght) {
	this->m_strenght= m_strenght ;
}
void Character::SetIntell(int intell) {
	this->m_intelligence= m_intelligence;
}

string Character::GetName() {
	return m_name;
}


int Character::GetHP() { return m_hp; }
int Character::GetStren() { return m_strenght; }
int Character::GetIntell() { return m_intelligence; }

void Character:: SetCharacter(int& x, int& y) {
	this->x = x;
	this->y = x;
}

 int &Character::getX(void) {
	return x;
}

 int &Character::getY(void) {
	return y;
}

void Character::Attack() {
	
	system("cls");
		cout << endl << "=========ATTACK THE ENEMY!==========" << endl;
		m_hp += 8;
		m_strenght += 6;
		m_intelligence += 4;
	if (m_hp >= 60) {
		LevelUp();
		
	}
	DisplayCh();
	Defend();
	system("pause");
	
}

void Character::Defend() {

	cout <<endl<< "*****DEFEND From Enemy!******"<<endl;
	m_hp -= 3;
	m_strenght -= 2;
	m_intelligence -= 1;
	DisplayCh();
	
	system("pause");
}

void Character::LevelUp() {
	
	
	m_hp = ((10 * m_hp) / 100) + m_hp;
	m_strenght = ((10 * m_strenght) / 100) + m_strenght;
	m_intelligence = ((10 * m_intelligence) / 100) + m_intelligence;
	level++;
	m_hp = 0;
	cout << endl<<"<<<<<<<<<<<<<<<Congratulations Level Up!>>>>>>>>>>>>>>>> : Level " << level;
	DisplayCh();
	system("pause");
}

void Character::DisplayCh() {
	

	cout <<endl<< "---Name: " << m_name <<endl;
		cout << endl<< "---HP:" << m_hp;
		cout << endl << "---Strenght: " << m_strenght;
	cout << endl << "---Level:" << level<<endl;
		system("pause");
	}


