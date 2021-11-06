
#include "theMap.h"
#include "Enemy.h"
#include "Character.h"
#include"Necromancer.h"
#include "Skeleton.h"
#include "Heretic.h"
#include "HeroType.h"

#include <iostream>
#include <string>



using std::string; 
using std::cout;




int main()
{
	HeroType* ht = new HeroType("DIABLO", 40 , 11, 12,1,1);

	Heretic* e = new Heretic("Heretic", 20, 1, 4, 3, 4);
	Heretic* e1 = new Heretic("Heretic", 20, 1, 4, 27, 15);
	Heretic* e2 = new Heretic("Heretic", 20, 1, 4, 18, 8);
	Heretic* e3 = new Heretic("Heretic", 20, 1, 4, 14, 19);
	

	Skeleton* s = new Skeleton("Skeleton", 32, 3, 0, 21, 10);
	Skeleton* s1 = new Skeleton("Skeleton", 32, 3, 0, 17, 15);
	Skeleton* s2 = new Skeleton("Skeleton", 32, 3, 0, 8, 16);
	Skeleton* s3 = new Skeleton("Skeleton", 32, 3, 0, 28, 17);

	Necromancer* m = new Necromancer("Necromanser", 65, 2, 7, 5, 19);
	Necromancer* m1 = new Necromancer("Necromanser", 65, 2, 7, 27, 7);
	Necromancer* m2 = new Necromancer("Necromanser", 65, 2, 7, 6, 18);
	Necromancer* m3 = new Necromancer("Necromanser", 65, 2, 7, 5, 7);
	


theMap ma{ht,e,e1,e2,e3,s,s1,s2,s3,m,m1,m2,m3};

		ma.fullscreen();
		ma.moveChar();

		cout << endl << " Estervina Arias, SIT, FN:18621804 "<<endl<<" 5b-group, Course: 2 ";
	
return 0;

}

	
	