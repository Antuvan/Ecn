#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "iiwa_moveit2::servo_controller_input" for configuration "Release"
set_property(TARGET iiwa_moveit2::servo_controller_input APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(iiwa_moveit2::servo_controller_input PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libservo_controller_input.so"
  IMPORTED_SONAME_RELEASE "libservo_controller_input.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS iiwa_moveit2::servo_controller_input )
list(APPEND _IMPORT_CHECK_FILES_FOR_iiwa_moveit2::servo_controller_input "${_IMPORT_PREFIX}/lib/libservo_controller_input.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
