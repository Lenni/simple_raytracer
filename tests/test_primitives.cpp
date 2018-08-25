#include <gtest/gtest.h>
#include <primitives.h>

using namespace primitives::polygons;
using namespace math::vector;

vec3 expected_a = vec3(1, 1, 1);
vec3 expected_b = vec3(2, 2, 2);
vec3 expected_c = vec3(3, 3, 3);


triangle test_tris = triangle(expected_a, expected_b, expected_c);

//Test GetComponents

TEST(Triangles, GetComponents)
{
  vec3 a = test_tris.get_a();
  vec3 b = test_tris.get_b();
  vec3 c = test_tris.get_c();

  EXPECT_EQ(expected_a, a);
  EXPECT_EQ(expected_b, b);
  EXPECT_EQ(expected_c, c);
}
