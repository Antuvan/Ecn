cmake_minimum_required(VERSION 3.1)
project(C++_projects)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)

# basic exercises
add_executable(find_the_number basics/find_the_number.cpp)
add_executable(rps basics/rps.cpp)

# Battleship
add_executable(battleship battleship/player.h battleship/player.cpp
                          battleship/main.cpp
                          battleship/cell.h )


# 1 vs 1 game with alpha-beta algorithm
add_executable(tictactoe alpha_beta/alpha_beta.h alpha_beta/alpha_beta_game.h alpha_beta/tictactoe_config.h alpha_beta/tictactoe.cpp)
add_executable(four_in_a_row alpha_beta/alpha_beta.h alpha_beta/alpha_beta_game.h alpha_beta/four_in_a_row_config.h alpha_beta/four_in_a_row.cpp)


# 21 sticks
add_executable(sticks sticks/sticks.cpp)
add_executable(sticks_ab alpha_beta/alpha_beta.h alpha_beta/alpha_beta_game.h sticks/sticks_config.h sticks/sticks_alpha_beta.cpp)
