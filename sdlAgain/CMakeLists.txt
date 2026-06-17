cmake_minimum_required(VERSION 3.30)
project(iota_system)

set(CMAKE_C_STANDARD 23)

include(FetchContent)


function(include_dependency libName gitURL gitTag)
	FetchContent_Declare(${libName}
	GIT_REPOSITORY ${gitURL}
	GIT_TAG        ${gitTag}
	GIT_SHALLOW    TRUE
	GIT_PROGRESS   TRUE
	)

	FetchContent_MakeAvailable(${libName})
endFunction()

set(SOURCES 
	main.cpp
	text.cpp
	tiles.cpp
)

find_package(SDL3 QUIET)
if (NOT SDL3_FOUND)
	message(STATUS "Getting SDL3 from Github")
	include_dependency(SDL3 https://github.com/libsdl-org/SDL.git release-3.4.0)
else()
	message(STATUS "Using local SDL3")
endif()

add_executable(iota_system ${SOURCES})

target_include_directories(iota_system PUBLIC ${SDL3_INCLUDE_DIRS})

target_compile_definitions(iota_system PRIVATE SDL_MAIN_USE_CALLBACKS)

target_link_libraries(iota_system PRIVATE SDL3::SDL3)