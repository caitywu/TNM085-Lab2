#include <particlesystem/particlesystem.h>



namespace example {

    void Particle::CreateParticles()

void ParticleSystem::update(double time, float speed) {
    const double dt = time - prevTime;
    prevTime = time;

    // Create some global smooth rocking motion
    const glm::vec2 vel = 0.2f * glm::vec2{static_cast<float>(std::cos(time)),
                                           -static_cast<float>(std::abs(std::sin(time)))};

    // Simulation dt may differ from actual dt based on the simulation speed
    const float simDt = static_cast<float>(dt) * speed;

    for (size_t i = 0; i < position.size(); ++i) {
        // Apply per particle jitter
        position[i] += (vel + randJitter()) * simDt;
        color[i].a = std::min(color[i].a, lifetime[i]);  // Modify alpha based on lifetime
        lifetime[i] -= simDt;

        // Check lifetime and reset if needed
        if (lifetime[i] < 0.0f) {
            position[i] = randPosition();
            color[i] = randColor();
            size[i] = randSize();
            lifetime[i] = randLifetime();
        }
    }
}
