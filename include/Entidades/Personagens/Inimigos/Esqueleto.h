#pragma once

#include "Inimigo.h"

#define PATH_ESQUELETO "assets/Inimigos/enemy1.png"

#define DANO_ESQUELETO 20.f
#define TAM_ESQUELETO_X 40.0f
#define TAM_ESQUELETO_Y 42.0f
#define VELOCIDADE_ESQUELETO 150.0f

namespace Entidades{
    namespace Personagens {
        namespace Inimigos {
            class Esqueleto: public Inimigo {
            private:
                
            public:
                Esqueleto(const sf::Vector2f pos,Jogador *jogador, int dano);
                ~Esqueleto();
            };
        }
    }
}