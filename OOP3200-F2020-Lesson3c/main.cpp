#include <iomanip>
#include <iostream>
#include <vector>



#include "GameObject.h"
#include "Vector2D.h"

static void BuildGameObjects(std::vector<GameObject*>& game_objects, int num = 1)
{
	for (int count = 0; count < num; ++count)
	{
		int id;
		std::cout << "Enter the gameObject ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject Position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the gameObject's Id" << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto*  gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
	}
	
	
}
static void CompareObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second object is: " << Vector2D::Distance(
		object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(
		object1->GetPosition(), object2->GetPosition()) << std::endl;


	std::cout << "First Game Object Details:  " << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object Details:  " << std::endl;
	std::cout << object2->ToString() << std::endl;
	
}

int main()
{
	std::vector<GameObject*> gameObjects;
	
	int num_of_GO;
	std::cout << "How many game objects do you need?:";
	std::cin >> num_of_GO;
		std::cout <<"\n-------------------------------------------------------------" << std::endl;

	BuildGameObjects(gameObjects, num_of_GO);
	

	int index1;
	std::cout << "What is the first object index?:";
	std::cin >> index1;
	std::cout << "\n-------------------------------------------------------------" << std::endl;
	int index2;
	std::cout << "What is the second object index?:";
	std::cin >> index2;
	std::cout << "\n-------------------------------------------------------------" << std::endl;

	CompareObjects(gameObjects[index1], gameObjects[index2]);
	CompareObjects(gameObjects[index1], gameObjects[index2]);
	
	
}

