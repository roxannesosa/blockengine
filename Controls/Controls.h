#ifndef CONTROLS_H
#define CONTROLS_H

#include "SDL.h"

class Controls{
public:
	Controls();
	~Controls();

	void setRightKey(SDL_Keycode k);
	void setLeftKey(SDL_Keycode k);
	SDL_Keycode getRightKey();
	SDL_Keycode getLeftKey();

	void setSpeed(float s);
	float getSpeed();

private:
	SDL_Keycode rightKey;
	SDL_Keycode leftKey;

	float speed;
};

#endif