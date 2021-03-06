#pragma once

#include <helios/math/vector.hpp>

namespace helios
{
    struct DirectionalLight
    {
        Vector3f direction;
        Vector3f ambient;
        Vector3f diffuse;
        Vector3f specular;
    };

    struct PointLight
    {
        Vector3f position;
        Vector3f color;
    };
} // namespace helios
