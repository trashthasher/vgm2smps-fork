cmake_minimum_required(VERSION 3.0)
project(vgm2smps)

find_package(ZLIB REQUIRED)
add_executable(${CMAKE_PROJECT_NAME} main.c Smps.c Sn76489.c Vgm.c VgmParser.c Ym2612.c)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${ZLIB_INCLUDE_DIRS})
target_link_libraries(${CMAKE_PROJECT_NAME} ${ZLIB_LIBRARIES} m)