#pragma once

#include <particlesystem/emitter.h>
#include <particlesystem/particle.h>

#include <glm/vec2.hpp>
#include <glm/vec4.hpp>
#include <vector>

class Emitter {

public: 
	//constructor 
	virtual void emit(std::vector<Particle>& particles) = 0; 

	//get position and veclocity 
	float get_rate() const {
		return rate; 
	}

	glm::vec2 get_position() const {
		return position; 
	}

protected: 
	glm::vec2 position{ 0,0 }; 
	float rate{ 0 }; //particles/s 
};



class Directional_emitter : public Emitter {

public:

	//constructor -> uses the constructor from base class emitter 
	Directional_emitter(const glm::vec2& dir, const glm::vec2& pos, float r) : direction(dir) {
		position = pos; 
		rate = r; 
	}

	//overriden base class for emission 
	void emit(std::vector<Particle>& p) override;

private: 
	glm::vec2 direction{ 0,0 }; //emission direction 
};


class Uniform_emitter : public Emitter {

public: 
	
	//constructor


	//overriden base class for emission 
	void emit(std::vector<Particle>& p) override; 

private: 
	//
};