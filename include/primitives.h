#pragma once

#include <vec3.h>

using namespace math::vector;

namespace primitives{
  namespace polygons{


    class triangle{

    public:

      triangle();
      triangle(vec3 _a, vec3 _b, vec3 _c);

      void set_points(vec3 _a, vec3 _b, vec3 _c);

      vec3 get_a() const;
      vec3 get_b() const;
      vec3 get_c() const;

    private:

      vec3 a, b, c;

    };
  }
}
