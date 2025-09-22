#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hydrodynamics::hydrodynamics" for configuration ""
set_property(TARGET hydrodynamics::hydrodynamics APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(hydrodynamics::hydrodynamics PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libhydrodynamics.so"
  IMPORTED_SONAME_NOCONFIG "libhydrodynamics.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hydrodynamics::hydrodynamics )
list(APPEND _IMPORT_CHECK_FILES_FOR_hydrodynamics::hydrodynamics "${_IMPORT_PREFIX}/lib/libhydrodynamics.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
