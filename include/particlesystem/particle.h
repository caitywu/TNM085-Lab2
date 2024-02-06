#pragma once
#include <glm/vec2.hpp>
#include <glm/vec4.hpp>

#include <vector>
#include <random>
#include <span>

class Particle {

	glm::vec2 position{ 0,0 }; //(x,y) corrdinate 
	glm::vec2 velocity{ 0,0 }; // m/s
	glm::vec4 color{ 255, 255, 255, 1 }; //RGBA
	float life_time{ 10.0 };  //s 

	//constructor
	Particle(glm::vec2& init_pos, glm::vec2& init_vel, glm::vec4& init_col, float lf) :
		position(init_pos), velocity(init_vel), color(init_col), life_time(lf) {}

};