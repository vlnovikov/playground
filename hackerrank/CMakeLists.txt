set(PROJECT_NAME hackerrank)

set(SOURCES
    # grading-students.cpp
    # apple-and-orange.cpp
    # number-line-jumps.cpp
    # between-two-sets.cpp
    # breaking-the-records.cpp
    # subarray-division.cpp
    # divisible-sum-pairs.cpp
    # migratory-birds.cpp
    # bill-division.cpp
    # sales-by-match.cpp
    # drawing-book.cpp
    # counting-valleys.cpp
    # electronics-shop.cpp
    # cats-and-mouse.cpp
    # magic-square.cpp
    # picking-numbers.cpp
    # climbing-the-leaderboard.cpp
    # hurdle-race.cpp
    # designer-pdf-viewer.cpp
    # utopean-tree.cpp
    # angry-professor.cpp
    # beautiful-days.cpp
    # viral-advertising.cpp
    # save-the-prisoner.cpp
    # circular-array-rotation.cpp
    # sequence-equatation.cpp
    # jumping-on-the-clouds.cpp
    # find-digits.cpp
    # append-and-delete.cpp
    # sherlock-and-squares.cpp
    # library-fine.cpp
    # cut-the-sticks.cpp
    # non-divisible-subset.cpp
    # repeated-string.cpp
    # equalize-the-array.cpp
    # queens_attack_ii.cpp
    # acm-icpc-team.cpp
    # taum-and-bday.cpp
    # organizing-containers.cpp
    # encryption.cpp
    # bigger-is-greater.cpp
    # beautiful-triplets.cpp
    # minimum-distances.cpp
    # lisas-workbook.cpp
    # flatland-space-stations.cpp
    # grid-search.cpp
    # lady-bug.cpp
    # 3d-surface-area.cpp
    almost-sorted.cpp
)

set(TEST_SOURCES ${SOURCES})

add_executable(test-${PROJECT_NAME} ${TEST_SOURCES})
target_link_libraries(test-${PROJECT_NAME} gtest gtest_main gmock)

gtest_discover_tests(test-${PROJECT_NAME})