#pragma once
#include <glm/vec2.hpp>
#include <glm/vec4.hpp>

#include <vector>
#include <random>
#include <span>

class Particle {

	glm::vec2 position; //(x,y) corrdinate 
	glm::vec2 velocity; // m/s
	glm::vec4 color; //RGBA
	float life_time;  //s 

	//constructor
	Particle(glm::vec2& init_pos, glm::vec2& init_vel, glm::vec4& init_col, float lf) :
		position(init_pos), velocity(init_vel), color(init_col), life_time(lf) {}

};