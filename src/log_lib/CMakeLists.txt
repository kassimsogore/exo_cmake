set(target_name loglib)

add_library(${target_name} STATIC "")

target_sources(${target_name}
	PRIVATE
		"${PROJECT_SOURCE_DIR}/src/log_lib/print_log.cpp"
	
	PRIVATE
		"${PROJECT_SOURCE_DIR}/include/log_lib/print_log.h"
)

target_include_directories(${target_name}
		PUBLIC
			"${PROJECT_SOURCE_DIR}/include"
			"${PROJECT_BINARY_DIR}"
)

export(TARGETS ${target_name}
	FILE ${PROJECT_BINARY_DIR}/${target_name}_target.cmake
)
			