//hej
#pragma once

#include "SFMLI.h"

#include "File.h"

#include "Logger.h"

/*class SubSound{
public:
	SubSound();
	~SubSound();

private:

};
*/

class SoundManager{
public:
	SoundManager();
	~SoundManager();

	void initialize(sf::RenderWindow* window);

	void finalize(sf::RenderWindow* window);

	void tick(sf::RenderWindow* window, clock_t, float dt);


private:

};