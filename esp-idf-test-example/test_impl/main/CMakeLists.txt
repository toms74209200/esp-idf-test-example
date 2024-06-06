file(GLOB_RECURSE INCLUDE_CPP_FILES ${CMAKE_SOURCE_DIR}/main/*.cpp)
message("INCLUDE_CPP_FILES: ${INCLUDE_CPP_FILES}")
idf_component_register(SRCS
                    "main_test.cpp"
                    ${INCLUDE_CPP_FILES}
                    INCLUDE_DIRS "timer")
