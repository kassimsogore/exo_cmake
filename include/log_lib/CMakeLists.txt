target_include_directories(${target_name}
	PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
		$<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
		$<INSTALL_INTERFACE:include>
)
#install target_lig
install(TARGETS ${target_name} EXPORT ${target_name} DESTINATION ${PROJECT_BINARY_DIR}/install/lib)
#install target export
install(EXPORT ${target_name} FILE ${target_name}_target.cmake DESTINATION ${PROJECT_BINARY_DIR}/install/cmake/)

#install includes
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION ${PROJECT_BINARY_DIR}/install/include/)
#generated include
install(FILE ${PROJECT_BINARY_DIR}/FirstOrganizedCmakeConfig.h DESTINATION ${PROJECT_BINARY_DIR}/install/include/)

#install project configuration
install(FILE ${PROJECT_BINARY_DIR}/FirstOrganizedCmakeConfig.cmake DESTINATION
${PROJECT_BINARY_DIR}/install/cmake/)