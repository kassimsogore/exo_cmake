cmake_minimum_required(VERSION 3.10)
set(CMAKE_BUILD_TYPE Release)
project(FirstOrganizedCmake VERSION 1.0)

#C++ VERSION
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#project version
configure_file(cmake/FirstOrganizedCmake.h.in FirstOrganizedCmake.h)

#about librairy
add_subdirectory(src/log_lib)

#about executable
option(FIRSTORGANIZEDCMAKE_WITH_EXECUTABLES "Compile mains" OFF)
if(FIRSTORGANIZEDCMAKE_WITH_EXECUTABLES)
	message(STATUS "Configuring firsOrganizedCMake with executable")
	add_subdirectory(mains)
endif()

#about tests
option(FIRSTORGANIZEDCMAKE_WITH_TESTS "Compile tests projects" ON)

if(FIRSTORGANIZEDCMAKE_WITH_TESTS)
	#Enable testing with Ctest
	enable_testing()
	message(STATUS "Configuring FirstOrganizedCmake with tests")
	add_subdirectory(tests)
endif()

include(CMakePackageConfigHelpers) #define the following command
configure_package_config_file(
	cmake/FirstOrganizedCmakeConfig.cmake.in
	FirstOrganizedCmakeConfig.cmake
	INSTALL_DESTINATION ${PROJECT_BINARY_DIR}
)
	