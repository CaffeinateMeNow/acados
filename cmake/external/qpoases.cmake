include(ExternalProject)

ExternalProject_Add(
    qpoases_project

    CONFIGURE_COMMAND ""
    SOURCE_DIR "${PROJECT_SOURCE_DIR}/external/qpOASES"
    BINARY_DIR "${PROJECT_SOURCE_DIR}/external/qpOASES/build"
    CONFIGURE_COMMAND cmake -D CMAKE_INSTALL_PREFIX=${CMAKE_INSTALL_PREFIX} ..
    BUILD_COMMAND cmake --build .
    INSTALL_COMMAND cmake --build . --target install
)

# ExternalProject_Get_Property(qpoases_project source_dir)
# add_library(qpoases STATIC IMPORTED GLOBAL)
# add_dependencies(qpoases qpoases_project)
# set_property(TARGET qpoases PROPERTY IMPORTED_LOCATION "${source_dir}/build/lib/libqpOASES_e.a")
