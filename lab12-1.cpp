#include <iostream>
#include <cstring>

using namespace std;


class Human
{
private:
	int legs;
	int arms;


public:
	string hair;
	string name;

	Human()
	{
		setName();
		setHair();
		legs = 2;
		arms = 2;
	}

	int getLegs()
	{
		return legs;
	}

	int getArms()
	{
		return arms;
	}

	void setLegs()
	{
		cout << "how many legs does htis person have? ";
		cin >> legs;
	}


	void setName()
	{
		cout << "what is the persons name?" << endl;
		cin >> name;
	}

	void setHair()
	{
		cout << "what hair color do you want? " << endl;
		cin >> hair;
	}
};

class Man: public Human
{
public:
	bool hasEgo = true;
	string pee = "standing";
};

int main()
{
	Man bob;
	Human sue;

	cout << "Our " bob.name << " has " << bob.getLegs() << " legs & " bob.getArms() " arms & " bob.hair << " hair color" << endl;

	cout << bob.name << "has an ego? " bob.ego << endl;

	sue.setLegs();

	cout << "Our " << sue.name << " has " << sue.getLegs() << " legs & " sue.getArms() " arms & " sue.hair << " hair color" << endl;
}