#
# Copyright (C) 2021-2021 QuasarApp.
# Distributed under the lgplv3 software license, see the accompanying
# Everyone is permitted to copy and distribute verbatim copies
# of this license document, but changing it is not allowed.
#

cmake_minimum_required(VERSION 3.14)

set(CURRENT_PROJECT "CFixer")


file(GLOB SOURCE_CPP
    "*.cpp" "*.qrc"
    "Private/*.cpp" "Private/*.qrc"
)

set(PUBLIC_INCUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(PRIVATE_INCUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Private")

if (ANDROID)
    add_library(${CURRENT_PROJECT} ${SOURCE_CPP})
else ()
    add_executable(${CURRENT_PROJECT} ${SOURCE_CPP})
endif()

target_link_libraries(${CURRENT_PROJECT} PUBLIC Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(${CURRENT_PROJECT} PUBLIC ${PROJECT_NAME})

target_include_directories(${CURRENT_PROJECT} PUBLIC ${PUBLIC_INCUDE_DIR})
target_include_directories(${CURRENT_PROJECT} PRIVATE ${PRIVATE_INCUDE_DIR})

