#include <iostream>

using namespace std;

// Variables
	// Enemy
int enemyHealth = 3;
int enemyAttack = 1;
int enemyDefense = 0;
	
	// Mario
int health = 10;
int jumpAttack = 1;
int hammerAttack = 1;
int defense = 0;

	// General
int choice;

int main() {
	while (enemyHealth > 0) {
		cout <<
			health << "/10 health remaining" << endl <<
			"1. Jump" << endl <<
			"2. Hammer" << endl <<
			"3. Item" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Mario attacks Goomba for " << jumpAttack - enemyDefense << ". Goomba attacks Mario for " << enemyAttack - defense << ".\n";
			enemyHealth = enemyHealth - (jumpAttack - enemyDefense);
			health = health - (enemyAttack - defense);
			break;
		case 2:
			cout << "Mario attacks Goomba for " << hammerAttack - enemyDefense << ". Goomba attacks Mario for " << enemyAttack - defense << ".\n";
			enemyHealth = enemyHealth - (hammerAttack - enemyDefense);
			health = health - (enemyAttack - defense);
			break;
		case 3:
			health = health + 5;
			if (health > 10) {
				health = 10;
			}
			cout << "Mario uses item and heals for 5 health. Mario now has " << health << "/10 health.\n";
			
			cout << "Goomba attacks Mario for " << enemyAttack - defense << ".\n";
			health = health - (enemyAttack - defense);
			break;
		default:
			cout << "Invalid choice." << endl;
			break;
		}
	}

	cout << "Goomba died." << endl;
	system("pause");
	return 0;
}