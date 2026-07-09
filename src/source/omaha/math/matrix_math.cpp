/* ---------- headers */

#include "omaha\math\matrix_math.h"
#include "omaha\math\real_math.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void matrix4x3_identity(struct real_matrix4x3*);
// void matrix4x3_transpose(struct real_matrix4x3*);
// void matrix4x3_inverse(struct real_matrix4x3const *, struct real_matrix4x3*);
// void matrix4x3_scale(struct real_matrix4x3*, float);
// void matrix4x3_translation(struct real_matrix4x3*, union real_point3d const *);
// void matrix4x3_rotation_from_axis_and_angle(struct real_matrix4x3*, union vector3d const *, float, float);
// void matrix4x3_rotation_from_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *);
// void matrix4x3_rotation_from_nonaxial_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *);
// void matrix4x3_rotation_from_nonaxial_vectors_using_up(struct real_matrix4x3*, union vector3d const *, union vector3d const *);
// void matrix4x3_rotation_from_nonaxial_forward_and_left(struct real_matrix4x3*, union vector3d const *, union vector3d const *);
// void matrix4x3_rotation_between_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *);
// void matrix4x3_rotation_from_angles(struct real_matrix4x3*, float, float, float);
// void matrix4x3_rotation_to_angles(struct real_matrix4x3const *, union euler_angles3d *);
// struct matrix3x3* matrix3x3_rotation_from_quaternion(unsigned int *, struct matrix3x3&, unsigned int *, struct real32_quaternion &volatile);
// void matrix4x3_rotation_from_quaternion(struct real_matrix4x3*, struct real32_quaternion const *);
// struct real32_quaternion * matrix3x3_rotation_to_quaternion(unsigned int *, struct matrix3x3&volatile, unsigned int *, struct real32_quaternion &);
// bool matrix3x3_normalize(struct matrix3x3*);
// void matrix4x3_rotation_to_quaternion(struct real_matrix4x3const *, struct real32_quaternion *);
// void matrix4x3_from_point_and_vectors(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *);
// void matrix4x3_from_point_and_nonaxial_vectors(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *);
// void matrix4x3_from_point_and_nonaxial_vectors_using_up(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *);
// void matrix4x3_from_point_and_nonaxial_forward_and_left(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *);
// void matrix4x3_from_point_and_quaternion(struct real_matrix4x3*, union real_point3d const *, struct real32_quaternion const *);
// void matrix4x3_from_orientation(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile);
// void matrix4x3_to_orientation(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &);
// void matrix4x3_apply_orientation(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&);
// void matrix4x3_apply_orientation_vmx(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&);
// __lvx;
// void matrix4x3_from_plane(struct real_matrix4x3*, struct plane3d const *);
// void matrix4x3_to_point_and_vectors(struct real_matrix4x3const *, union real_point3d *, union vector3d *, union vector3d *);
// union vector3d * vector_from_matrices4x3(struct real_matrix4x3const *, struct real_matrix4x3const *, union vector3d *);
// union real_point3d * matrix4x3_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *);
// union vector3d * matrix4x3_transform_vector(struct real_matrix4x3const *, union vector3d const *, union vector3d *);
// union vector3d * matrix4x3_transform_normal(struct real_matrix4x3const *, union vector3d const *, union vector3d *);
// struct plane3d * matrix4x3_transform_plane(struct real_matrix4x3const *, struct plane3d const *, struct plane3d *);
// union real_point3d * matrix4x3_inverse_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *);
// union vector3d * matrix4x3_inverse_transform_vector(struct real_matrix4x3const *, union vector3d const *, union vector3d *);
// union vector3d * matrix4x3_inverse_transform_normal(struct real_matrix4x3const *, union vector3d const *, union vector3d *);
// struct plane3d * matrix4x3_inverse_transform_plane(struct real_matrix4x3const *, struct plane3d const *, struct plane3d *);
// void matrix4x3_transform_points(struct real_matrix4x3const *, long, union real_point3d const *const, union real_point3d *const);
// void matrix4x3_inverse_transform_points(struct real_matrix4x3const *, long, union real_point3d const *const, union real_point3d *const);
// void matrix4x3_multiply(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, unsigned int *, struct real_matrix4x3&);
// void matrix4x3_multiply_vmx(struct real_matrix4x3const *, struct real_matrix4x3const *, struct real_matrix4x3*);
// float matrix3x3_determinant(struct matrix3x3const *);
// struct matrix3x3* matrix3x3_transpose(struct matrix3x3const *, struct matrix3x3*);
// struct matrix3x3* matrix3x3_inverse(struct matrix3x3const *, float, struct matrix3x3*);
// struct matrix3x3* matrix3x3_from_forward_and_up(struct matrix3x3*, union vector3d const *, union vector3d const *);
// struct matrix3x3* matrix3x3_from_axis_and_angle(struct matrix3x3*, union vector3d const *, float, float);
// void matrix3x3_from_angles_cpp(struct matrix3x3*, float, float, float);
// void matrix3x3_from_angles(struct matrix3x3*, float, float, float);
// void matrix3x3_from_angles_vmx(struct matrix3x3*, float, float, float);
// struct matrix3x3* matrix3x3_multiply(struct matrix3x3const *, struct matrix3x3const *, struct matrix3x3*);
// union vector3d * matrix3x3_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *);
// union vector3d * matrix3x3_inverse_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *);
// bool linear_equation_solve_3x3(double const (*const)[3], double const *const, double *const);
// bool linear_equation_solve_4x4(double const (*const)[4], double const *const, double *const);
// void prefetch<struct real_matrix4x3>(struct real_matrix4x3const *);
// void XMVectorSinCos(struct __vector4*, struct __vector4*, struct __vector4);
// float magnitude4d(union vector4d const *);
// float magnitude_squared4d(union vector4d const *);

//void matrix4x3_identity(struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_identity@@YAXPAUreal_matrix4x3@@@Z");
//};

//void matrix4x3_transpose(struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_transpose@@YAXPAUreal_matrix4x3@@@Z");
//};

//void matrix4x3_inverse(struct real_matrix4x3const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_inverse@@YAXPBUreal_matrix4x3@@PAU1@@Z");
//};

//void matrix4x3_scale(struct real_matrix4x3*, float)
//{
//    mangled_ppc("?matrix4x3_scale@@YAXPAUreal_matrix4x3@@M@Z");
//};

//void matrix4x3_translation(struct real_matrix4x3*, union real_point3d const *)
//{
//    mangled_ppc("?matrix4x3_translation@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@@Z");
//};

//void matrix4x3_rotation_from_axis_and_angle(struct real_matrix4x3*, union vector3d const *, float, float)
//{
//    mangled_ppc("?matrix4x3_rotation_from_axis_and_angle@@YAXPAUreal_matrix4x3@@PBTvector3d@@MM@Z");
//};

//void matrix4x3_rotation_from_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_rotation_from_vectors@@YAXPAUreal_matrix4x3@@PBTvector3d@@1@Z");
//};

//void matrix4x3_rotation_from_nonaxial_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_rotation_from_nonaxial_vectors@@YAXPAUreal_matrix4x3@@PBTvector3d@@1@Z");
//};

//void matrix4x3_rotation_from_nonaxial_vectors_using_up(struct real_matrix4x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_rotation_from_nonaxial_vectors_using_up@@YAXPAUreal_matrix4x3@@PBTvector3d@@1@Z");
//};

//void matrix4x3_rotation_from_nonaxial_forward_and_left(struct real_matrix4x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_rotation_from_nonaxial_forward_and_left@@YAXPAUreal_matrix4x3@@PBTvector3d@@1@Z");
//};

//void matrix4x3_rotation_between_vectors(struct real_matrix4x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_rotation_between_vectors@@YAXPAUreal_matrix4x3@@PBTvector3d@@1@Z");
//};

//void matrix4x3_rotation_from_angles(struct real_matrix4x3*, float, float, float)
//{
//    mangled_ppc("?matrix4x3_rotation_from_angles@@YAXPAUreal_matrix4x3@@MMM@Z");
//};

//void matrix4x3_rotation_to_angles(struct real_matrix4x3const *, union euler_angles3d *)
//{
//    mangled_ppc("?matrix4x3_rotation_to_angles@@YAXPBUreal_matrix4x3@@PATeuler_angles3d@@@Z");
//};

//struct matrix3x3* matrix3x3_rotation_from_quaternion(unsigned int *, struct matrix3x3&, unsigned int *, struct real32_quaternion &volatile)
//{
//    mangled_ppc("?matrix3x3_rotation_from_quaternion@@YAPAUmatrix3x3@@PIAU1@PIBUreal32_quaternion@@@Z");
//};

//void matrix4x3_rotation_from_quaternion(struct real_matrix4x3*, struct real32_quaternion const *)
//{
//    mangled_ppc("?matrix4x3_rotation_from_quaternion@@YAXPAUreal_matrix4x3@@PBUreal32_quaternion@@@Z");
//};

//struct real32_quaternion * matrix3x3_rotation_to_quaternion(unsigned int *, struct matrix3x3&volatile, unsigned int *, struct real32_quaternion &)
//{
//    mangled_ppc("?matrix3x3_rotation_to_quaternion@@YAPAUreal32_quaternion@@PIBUmatrix3x3@@PIAU1@@Z");
//};

//bool matrix3x3_normalize(struct matrix3x3*)
//{
//    mangled_ppc("?matrix3x3_normalize@@YA_NPAUmatrix3x3@@@Z");
//};

//void matrix4x3_rotation_to_quaternion(struct real_matrix4x3const *, struct real32_quaternion *)
//{
//    mangled_ppc("?matrix4x3_rotation_to_quaternion@@YAXPBUreal_matrix4x3@@PAUreal32_quaternion@@@Z");
//};

//void matrix4x3_from_point_and_vectors(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_from_point_and_vectors@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void matrix4x3_from_point_and_nonaxial_vectors(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_from_point_and_nonaxial_vectors@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void matrix4x3_from_point_and_nonaxial_vectors_using_up(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_from_point_and_nonaxial_vectors_using_up@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void matrix4x3_from_point_and_nonaxial_forward_and_left(struct real_matrix4x3*, union real_point3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix4x3_from_point_and_nonaxial_forward_and_left@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@PBTvector3d@@2@Z");
//};

//void matrix4x3_from_point_and_quaternion(struct real_matrix4x3*, union real_point3d const *, struct real32_quaternion const *)
//{
//    mangled_ppc("?matrix4x3_from_point_and_quaternion@@YAXPAUreal_matrix4x3@@PBTreal_point3d@@PBUreal32_quaternion@@@Z");
//};

//void matrix4x3_from_orientation(unsigned int *, struct real_matrix4x3&, unsigned int *, struct real_orientation &volatile)
//{
//    mangled_ppc("?matrix4x3_from_orientation@@YAXPIAUreal_matrix4x3@@PIBUreal_orientation@@@Z");
//};

//void matrix4x3_to_orientation(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &)
//{
//    mangled_ppc("?matrix4x3_to_orientation@@YAXPIBUreal_matrix4x3@@PIAUreal_orientation@@@Z");
//};

//void matrix4x3_apply_orientation(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&)
//{
//    mangled_ppc("?matrix4x3_apply_orientation@@YAXPIBUreal_matrix4x3@@PIBUreal_orientation@@PIAU1@@Z");
//};

//void matrix4x3_apply_orientation_vmx(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, struct real_orientation &volatile, unsigned int *, struct real_matrix4x3&)
//{
//    mangled_ppc("?matrix4x3_apply_orientation_vmx@@YAXPIBUreal_matrix4x3@@PIBUreal_orientation@@PIAU1@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//void matrix4x3_from_plane(struct real_matrix4x3*, struct plane3d const *)
//{
//    mangled_ppc("?matrix4x3_from_plane@@YAXPAUreal_matrix4x3@@PBUplane3d@@@Z");
//};

//void matrix4x3_to_point_and_vectors(struct real_matrix4x3const *, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?matrix4x3_to_point_and_vectors@@YAXPBUreal_matrix4x3@@PATreal_point3d@@PATvector3d@@2@Z");
//};

//union vector3d * vector_from_matrices4x3(struct real_matrix4x3const *, struct real_matrix4x3const *, union vector3d *)
//{
//    mangled_ppc("?vector_from_matrices4x3@@YAPATvector3d@@PBUreal_matrix4x3@@0PAT1@@Z");
//};

//union real_point3d * matrix4x3_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?matrix4x3_transform_point@@YAPATreal_point3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix4x3_transform_vector(struct real_matrix4x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix4x3_transform_vector@@YAPATvector3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix4x3_transform_normal(struct real_matrix4x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix4x3_transform_normal@@YAPATvector3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//struct plane3d * matrix4x3_transform_plane(struct real_matrix4x3const *, struct plane3d const *, struct plane3d *)
//{
//    mangled_ppc("?matrix4x3_transform_plane@@YAPAUplane3d@@PBUreal_matrix4x3@@PBU1@PAU1@@Z");
//};

//union real_point3d * matrix4x3_inverse_transform_point(struct real_matrix4x3const *, union real_point3d const *, union real_point3d *)
//{
//    mangled_ppc("?matrix4x3_inverse_transform_point@@YAPATreal_point3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix4x3_inverse_transform_vector(struct real_matrix4x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix4x3_inverse_transform_vector@@YAPATvector3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix4x3_inverse_transform_normal(struct real_matrix4x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix4x3_inverse_transform_normal@@YAPATvector3d@@PBUreal_matrix4x3@@PBT1@PAT1@@Z");
//};

//struct plane3d * matrix4x3_inverse_transform_plane(struct real_matrix4x3const *, struct plane3d const *, struct plane3d *)
//{
//    mangled_ppc("?matrix4x3_inverse_transform_plane@@YAPAUplane3d@@PBUreal_matrix4x3@@PBU1@PAU1@@Z");
//};

//void matrix4x3_transform_points(struct real_matrix4x3const *, long, union real_point3d const *const, union real_point3d *const)
//{
//    mangled_ppc("?matrix4x3_transform_points@@YAXPBUreal_matrix4x3@@JQBTreal_point3d@@QAT2@@Z");
//};

//void matrix4x3_inverse_transform_points(struct real_matrix4x3const *, long, union real_point3d const *const, union real_point3d *const)
//{
//    mangled_ppc("?matrix4x3_inverse_transform_points@@YAXPBUreal_matrix4x3@@JQBTreal_point3d@@QAT2@@Z");
//};

//void matrix4x3_multiply(unsigned int *, struct real_matrix4x3&volatile, unsigned int *, unsigned int *, struct real_matrix4x3&)
//{
//    mangled_ppc("?matrix4x3_multiply@@YAXPIBUreal_matrix4x3@@0PIAU1@@Z");
//};

//void matrix4x3_multiply_vmx(struct real_matrix4x3const *, struct real_matrix4x3const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?matrix4x3_multiply_vmx@@YAXPBUreal_matrix4x3@@0PAU1@@Z");
//};

//float matrix3x3_determinant(struct matrix3x3const *)
//{
//    mangled_ppc("?matrix3x3_determinant@@YAMPBUmatrix3x3@@@Z");
//};

//struct matrix3x3* matrix3x3_transpose(struct matrix3x3const *, struct matrix3x3*)
//{
//    mangled_ppc("?matrix3x3_transpose@@YAPAUmatrix3x3@@PBU1@PAU1@@Z");
//};

//struct matrix3x3* matrix3x3_inverse(struct matrix3x3const *, float, struct matrix3x3*)
//{
//    mangled_ppc("?matrix3x3_inverse@@YAPAUmatrix3x3@@PBU1@MPAU1@@Z");
//};

//struct matrix3x3* matrix3x3_from_forward_and_up(struct matrix3x3*, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?matrix3x3_from_forward_and_up@@YAPAUmatrix3x3@@PAU1@PBTvector3d@@1@Z");
//};

//struct matrix3x3* matrix3x3_from_axis_and_angle(struct matrix3x3*, union vector3d const *, float, float)
//{
//    mangled_ppc("?matrix3x3_from_axis_and_angle@@YAPAUmatrix3x3@@PAU1@PBTvector3d@@MM@Z");
//};

//void matrix3x3_from_angles_cpp(struct matrix3x3*, float, float, float)
//{
//    mangled_ppc("?matrix3x3_from_angles_cpp@@YAXPAUmatrix3x3@@MMM@Z");
//};

//void matrix3x3_from_angles(struct matrix3x3*, float, float, float)
//{
//    mangled_ppc("?matrix3x3_from_angles@@YAXPAUmatrix3x3@@MMM@Z");
//};

//void matrix3x3_from_angles_vmx(struct matrix3x3*, float, float, float)
//{
//    mangled_ppc("?matrix3x3_from_angles_vmx@@YAXPAUmatrix3x3@@MMM@Z");
//};

//struct matrix3x3* matrix3x3_multiply(struct matrix3x3const *, struct matrix3x3const *, struct matrix3x3*)
//{
//    mangled_ppc("?matrix3x3_multiply@@YAPAUmatrix3x3@@PBU1@0PAU1@@Z");
//};

//union vector3d * matrix3x3_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix3x3_transform_vector@@YAPATvector3d@@PBUmatrix3x3@@PBT1@PAT1@@Z");
//};

//union vector3d * matrix3x3_inverse_transform_vector(struct matrix3x3const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?matrix3x3_inverse_transform_vector@@YAPATvector3d@@PBUmatrix3x3@@PBT1@PAT1@@Z");
//};

//bool linear_equation_solve_3x3(double const (*const)[3], double const *const, double *const)
//{
//    mangled_ppc("?linear_equation_solve_3x3@@YA_NQAY02$$CBNQBNQAN@Z");
//};

//bool linear_equation_solve_4x4(double const (*const)[4], double const *const, double *const)
//{
//    mangled_ppc("?linear_equation_solve_4x4@@YA_NQAY03$$CBNQBNQAN@Z");
//};

//void prefetch<struct real_matrix4x3>(struct real_matrix4x3const *)
//{
//    mangled_ppc("??$prefetch@Ureal_matrix4x3@@@@YAXPBUreal_matrix4x3@@@Z");
//};

//void XMVectorSinCos(struct __vector4*, struct __vector4*, struct __vector4)
//{
//    mangled_ppc("?XMVectorSinCos@@YAXPAU__vector4@@0U1@@Z");
//};
