//
// Created by rsalogub on 25.11.19.
//

#ifndef FR_RENDERER_H
#define FR_RENDERER_H

#ifndef USE_FR_OPENGL_WARPPER
#include <FRRenderer/realization/FROpenGLWrapper/renderer.h>
namespace FRRenderer
{
    using FROpenGLWrapper::Renderer;
}
#endif
#endif //FR_RENDERER_H
