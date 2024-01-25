#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sum of vector is computed") {
    std::vector<int> v0 = {};
    REQUIRE (Sum(v0) == 0);

    std::vector<int> v1 = {1,2,3};
    REQUIRE (Sum(v1) == 6);

    std::vector<int> v2 = {-1,-2,-3};
    REQUIRE (Sum(v2) == -6);
}

TEST_CASE("Product of vector is computed") {
    std::vector<int> v0 = {};
    REQUIRE (Product(v0) == 0);

    std::vector<int> v1 = {1,2,3};
    REQUIRE (Product(v1) == 6);

    std::vector<int> v2 = {-1,2};
    REQUIRE (Product(v2) == -2);
}

// TEST_CASE("Integer added to vertex points is returned") {
//     std::vector<int> v0 = {1,1,1};
//     REQUIRE (VertexPlusN(v0,1) == {2,2,2});

//     std::vector<int> v1 = {0};
//     REQUIRE (VertexPlusN(v1,5) == {5});

//     std::vector<int> v2 = {-1,-2};
//     REQUIRE (VertexPlusN(v2, -1) == {-2,-3});
//}