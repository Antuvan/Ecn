# CMake generated Testfile for 
# Source directory: /home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control
# Build directory: /home/ajay/ros2_ws/build/gazebo_ros2_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/copyright.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_copyright/copyright.txt" "--command" "/opt/ros/humble/bin/ament_copyright" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/cppcheck.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/cppcheck.xunit.xml" "--include_dirs" "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/cpplint.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_cpplint/cpplint.txt" "--command" "/opt/ros/humble/bin/ament_cpplint" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/lint_cmake.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/uncrustify.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/bin/ament_uncrustify" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/humble/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/xmllint.xunit.xml" "--package-name" "gazebo_ros2_control" "--output-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/ajay/ros2_ws/build/gazebo_ros2_control/test_results/gazebo_ros2_control/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;99;ament_package;/home/ajay/ros2_ws/src/ros-controls/gazebo_ros2_control/gazebo_ros2_control/CMakeLists.txt;0;")
