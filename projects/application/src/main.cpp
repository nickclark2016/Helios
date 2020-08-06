#include "simple_directional_lighting_demo.hpp"
#include "simple_pbr_demo.hpp"
#include "simple_render_graph.hpp"
#include "textured_cube_demo.hpp"
#include "textured_quad_demo.hpp"

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include <helios/macros.hpp>

#include <iostream>

void printMessage()
{
    std::cout << "Run a Sample" << std::endl;
    std::cout << "[1]: Textured Quad" << std::endl;
    std::cout << "[2]: Textured Cube" << std::endl;
    std::cout << "[3]: Simple Directional Lighting" << std::endl;
    std::cout << "[4]: Simple PBR Lighting" << std::endl;
    std::cout << "[5]: Simple Render Graph" << std::endl;
    std::cout << "[0]: Exit" << std::endl << std::endl;
}

int main()
{
    try
    {
        i32 sample = -1;
        do
        {
            printMessage();
            std::cin >> sample;
            if (sample == 1)
            {
                textured_quad::run();
            }
            else if (sample == 2)
            {
                textured_cube::run();
            }
            else if (sample == 3)
            {
                simple_directional_lighting::run();
            }
            else if (sample == 4)
            {
                simple_pbr::run();
            }
            else if (sample == 5)
            {
                simple_render_graph::run();
            }
            std::cout << std::endl;
        } while (sample != 0);
    }
    catch (...)
    {
        std::cout << "Error in Sample" << std::endl;
    }
    return 0;
}
