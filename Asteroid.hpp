#pragma once

#ifndef ASTEROID_HPP
#define ASTEROID_HPP

// STL
#include <vector>

#include "Vector2.hpp"

namespace Engine
{
    class App;
    class Asteroid
    {
        public:
            Asteroid(App * parent);
            void Update(float deltaTime);
            void Render();
            
        private:
         void ApplyImpulse(Math::Vector2 impulse);
           
            float m_angle;
            float m_mass;
            float m_rotation;
            Engine::Math::Vector2 m_position;
            Engine::Math::Vector2 m_velocity;
             App* m_parent;
            std::vector<Engine::Math::Vector2>m_points;
            float m_currentSpeed;
    };
} // namespace Engine
#endif