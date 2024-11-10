# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ecn_auv_lab_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ecn_auv_lab_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ecn_auv_lab_FOUND FALSE)
  elseif(NOT ecn_auv_lab_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ecn_auv_lab_FOUND FALSE)
  endif()
  return()
endif()
set(_ecn_auv_lab_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ecn_auv_lab_FIND_QUIETLY)
  message(STATUS "Found ecn_auv_lab: 1.0.0 (${ecn_auv_lab_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ecn_auv_lab' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ecn_auv_lab_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ecn_auv_lab_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${ecn_auv_lab_DIR}/${_extra}")
endforeach()
