# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(screenshot LANGUAGES CXX)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
    set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/widgets/desktop/screenshot")
# set(GTest_DIR "C:/Users/never/Documents/gtest/googletest/build/googletest/generated")
add_subdirectory(gTest)
# add_subdirectory(qTests/)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# find_package(GTest CONFIG REQUIRED)

qt_standard_project_setup()

qt_add_executable(screenshot
    main.cpp
    screenshot.cpp screenshot.h
#    tst_firsttest.cpp
)

set_target_properties(screenshot PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(screenshot PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    gtest_main
)

install(TARGETS screenshot
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)

# add_test(NAME firstTest COMMAND )
