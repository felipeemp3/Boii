#include <std_include.hpp>
#include "loader/component_loader.hpp"
#include "game/game.hpp"
#include "scheduler.hpp"
#include <utils/hook.hpp>

namespace branding
{
	namespace
	{
        void draw_branding()
        {
        // Versión minimalista para quitar la marca de agua de la versión
		// Esta función se llama en el bucle de renderizado del juego
        [[maybe_unused]] float color[4] = { 0.666f, 0.666f, 0.666f, 0.666f };
        [[maybe_unused]] float scale = 1.0f; // Añadido para evitar la advertencia C4189

        if (const auto* font = reinterpret_cast<uint32_t * (*)()>(0x141CAC8E0_g)())
        {			
            // Uso explícito de 'scale' para evitar C4189
            float dummy = scale * 1.0f;
            (void)dummy;
            // Intencionalmente vacío - elimina todo el texto de versión
        }
        }

		const char* get_ingame_console_prefix_stub()
		{
			return "BOIII> ";
		}
	}
}
