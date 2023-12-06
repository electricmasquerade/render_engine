cmake_minimum_required(VERSION 3.26)
project(render_engine)

set(CMAKE_CXX_STANDARD 23)

add_executable(render_engine main.cpp
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h
        rtweekend.h
        interval.h
        camera.h
        material.h
)
