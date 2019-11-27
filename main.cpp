//
// Created by rsalogub on 26.11.19.
//
#include <iostream>
#include "FRMath/vector2.h"
#include "FRMath/matrix4.h"
#include "FRRenderer/model.h"
#include "FRRenderer/renderer.h"
#include "renderer.h"

int main()
{
    FRMath::Vector2<FRMath::pointType> vector2;
    FRRenderer::Model model("", FRMath::Vector2<FRMath::pointType>(0,0));
    FRRenderer::Renderer::getRenderer();
    return 0;
}