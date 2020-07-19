cmake_minimum_required (VERSION 3.17.1)
project(ex1_cmakeproject)

include_directories (${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

set(SOURCES src/prog1.c)
add_executable(myexe ${PROJECT_SOURCE_DIR}/${SOURCES})

target_link_libraries(myexe libc.so libmymath.a)

install(TARGETS myexe DESTINATION /usr/local/bin)

include(InstallRequiredSystemLibraries)
set(CPACK_GENRATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Adesh")
include(CPack)
