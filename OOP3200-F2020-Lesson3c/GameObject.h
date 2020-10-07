#pragma once
#ifndef _GAME_OBJECT_
#define  _GAME_OBJECT_
#include "Vector2D.h"

class GameObject
{
public:
	// constructors
	GameObject();
	GameObject(int id ,float x, float y);
	GameObject(int id, const Vector2D& position);

	//Role f three
	~GameObject();  // Destructor
	GameObject(const GameObject& other_object);  // copy constructor
	GameObject& operator=(const GameObject& other_object);  // Assignment operator


	//Accessor
	Vector2D GetPosition() const;
	int GerID() const;
	
	//Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	// Utility functions
	std::string ToString() const;
	
private:
	int m_id;
	Vector2D m_position;
	
};


#endif

