add_executable(CoCoTestsRunner
    test-AST.c
)
target_include_directories(CoCoTestsRunner PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(CoCoTestsRunner PRIVATE CCORE)