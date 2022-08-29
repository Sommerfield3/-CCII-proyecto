cmake_minimum_required(VERSION 3.5)

project(CMakeDBTest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        widget.cpp
        widget.h
        widget.ui
        login.h login.cpp login.ui
        newmed.h newmed.cpp newmed.ui
        newpac.h newpac.cpp newpac.ui
        vistaadm.h vistaadm.cpp vistaadm.ui
        dialog_agregar_citas.h dialog_agregar_citas.cpp dialog_agregar_citas.ui
        menudoctor.h menudoctor.cpp menudoctor.ui
        citascalendar.h citascalendar.cpp citascalendar.ui
        citascalendarpac.h citascalendarpac.cpp citascalendarpac.ui
        menupaciente.h menupaciente.cpp menupaciente.ui
        DBConexion.h
        crearcargo.h
        crearmed.h crearmed.cpp
        crearpac.h crearpac.cpp
        functorOperaciones.h functorOperaciones.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(CMakeDBTest
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET CMakeDBTest APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(CMakeDBTest SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(CMakeDBTest
            ${PROJECT_SOURCES}
        )
    endif()
endif()

find_package(Qt6 REQUIRED COMPONENTS Sql)

target_link_libraries(CMakeDBTest PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(CMakeDBTest PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(CMakeDBTest)
endif()
