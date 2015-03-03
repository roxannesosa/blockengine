#include "Controls.h"

Controls::Controls() : rightKey(SDLK_d), leftKey(SDLK_a), speed(1){
}

Controls::~Controls(){}

void Controls::setRightKey(SDL_Keycode k){
	rightKey = k;
}

void Controls::setLeftKey(SDL_Keycode k){
	leftKey = k;
}

SDL_Keycode Controls::getRightKey(){
	return rightKey;
}

SDL_Keycode Controls::getLeftKey(){
	return leftKey;
}

void Controls::setSpeed(float s){
	speed = s;
}

float Controls::getSpeed(){
	return speed;
}