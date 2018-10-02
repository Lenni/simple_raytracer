#include <tracer.h>

using namespace primitives::polygons;

trace_ray(ray r, triangle t)
{
    result<math::vector::vec3> hit = math::linalg::check_for_collision(r, t);



}
