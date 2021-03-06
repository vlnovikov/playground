#include "Partition.h"

#include <random>

#include <gtest/gtest.h>

TEST(Partition, simple_case)
{
    std::random_device rd;
    std::mt19937 g(rd());

    const int32_t p = 10;
    const uint32_t sample = 100;
    for (int i = 0; i < sample; ++i)
    {
        std::vector<int32_t> v(sample);
        std::generate(v.begin(), v.end(), [&]() { return rd() % 20; });
        auto r = partition(v, p);
        std::for_each(v.begin(), v.begin() + r.first, [p](int32_t n) { EXPECT_LT(n, p); });
        std::for_each(v.begin() + r.first, v.begin() + r.second,
                      [p](int32_t n) { EXPECT_EQ(n, p); });
        std::for_each(v.begin() + r.second, v.end(), [p](int32_t n) { EXPECT_GT(n, p); });
    }
}