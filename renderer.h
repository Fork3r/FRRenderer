//
// Created by rsalogub on 25.11.19.
//

#ifndef RENDERER_H
#define RENDERER_H

#include "rendermodel.h"

namespace FRRenderer
{
    class Renderer
    {
    public:
        void addModel(RenderModel *renderModel) {}
        void removeModel(RenderModel *renderModel) {}
    private:
        Renderer() = default;
    };

}
#endif //RENDERER_H
