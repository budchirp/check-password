cmake_minimum_required(VERSION 3.18)

project(check-password VERSION 1.0.0)

file(GLOB SRC
  "src/*.c"
  "src/include/*.h"
)

add_executable(out ${SRC})

find_library(termuxauth termux-auth)
target_include_directories(out PUBLIC ${termuxauth})
target_link_libraries(out PUBLIC ${termuxauth})
