cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

project(notepadqq)


find_package(Qt4 COMPONENTS QtCore QtGui QtNetwork)
find_package(QScintilla)

include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})

qt4_wrap_cpp(notepadqq_HEADERS_MOC
    mainwindow.h 
    qsciscintillaqq.h 
    frmabout.h 
    userlexer.h 
    qtabwidgetqq.h
)

qt4_wrap_ui(notepadqq_FORM_HEADERS
    mainwindow.ui
    frmabout.ui
)

qt4_add_resources(notepadqq_RES ${CMAKE_SOURCE_DIR}/resources.qrc)

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(notepadqq
    frmabout.cpp 
    generalfunctions.cpp 
    main.cpp 
    mainwindow.cpp 
    qsciscintillaqq.cpp 
    qtabwidgetqq.cpp 
    userlexer.cpp
    ${notepadqq_HEADERS_MOC}
    ${notepadqq_FORM_HEADERS}
    ${notepadqq_RES}
)

target_link_libraries(
    notepadqq
    ${QT_LIBRARIES}
    ${QSCINTILLA_LIBRARIES}
)
