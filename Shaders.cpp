#include "Global.h"

/*
static int shaderCounter = 0;
char* shader;

HOOK_STATIC(CSurface, generate_fragment_shader_source, (GraphicsPrimitiveType primitive_type, int position_count, int texcoord_count, GraphicsTextureColorType texcolor_type, int tex_offset, int color_count, int color_uniform, int fog, int alpha_test, GraphicsComparisonType alpha_comparison) -> char*)
{

    char* ret = super(primitive_type, position_count, texcoord_count, texcolor_type, tex_offset, color_count, color_uniform, fog, alpha_test, alpha_comparison);

    printf("\n--%d--\n%s\n-----\n", shaderCounter, ret);

    if (texcolor_type == GRAPHICS_TEXCOLOR_RGBA && tex_offset == 1)
    {
        shaderCounter++;
        return shader;
    }


    shaderCounter++;


    return ret;
}

HOOK_METHOD(CApp, OnInit, () -> void)
{
    shader = G_->GetResources()->LoadFile("data/shaders/default.fs");

    printf("%s\n", shader);

    super();
}

HOOK_METHOD(CApp, OnKeyDown, (SDLKey key) -> void)
{
    if (key == SDLKey::SDLK_KP_MINUS)
    {
    }
    if (key == SDLKey::SDLK_KP_PLUS)
    {
    }

    super(key);
}
*/
