#pragma once
#include <string>
#include <iostream>



using std::string;


class Character
{
protected:
	string m_name;
	int  m_hp, m_strenght, m_intelligence;
	int x;
	int	y;
	int level = 1;
public:

	Character();
	Character(string name, int m_hp, int m_strenght, int m_intelligence, int& x, int& y);
	void SetCharacter(int& x, int& y);
	void SetName(string name);
	
	void SetHP(int hp);
	void SetStren(int m_strenght);
	void SetIntell(int m_intelligence);
	
	string GetName(); 

	int GetHP();
	int GetStren();
	int GetIntell();

	int &getX(void);
	 int &getY(void);

	virtual void Attack();
	virtual void Defend();
	virtual void LevelUp();
	virtual void DisplayCh();

};

