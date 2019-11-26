cmake_minimum_required(VERSION 3.13)
project(FRRenderer)

set(CMAKE_CXX_STANDARD 17)

find_path(FRMATH_PATH "vector2.h" ${CMAKE_CURRENT_SOURCE_DIR}/../FRMath)


set(USE_FRMATH)
include(../FRMath/CMakeLists.txt)

find_path(FR_OPENGL_WARPPER_PATH "renderer.h" ${CMAKE_CURRENT_SOURCE_DIR}/realization/FROpenGLWrapper)

set(USE_FR_OPENGL_WARPPER ON)

if((NOT FR_OPENGL_WARPPER_PATH) OR (NOT EXISTS ${FR_OPENGL_WARPPER_PATH}))
    execute_process(COMMAND git clone git@github.com:Fork3r/FROpenGLWrapper.git -b dev
            ${CMAKE_CURRENT_SOURCE_DIR}/realization/FROpenGLWrapper)
endif()
#endif()
include(${CMAKE_CURRENT_SOURCE_DIR}/realization/FROpenGLWrapper/CMakeLists.txt)
include_directories(..)

add_executable(FRRenderer main.cpp renderer.h model.h ${header} ${src})

TARGET_LINK_LIBRARIES(FRRenderer ${libraries})
