#define M_E		2.7182818284590452354
#define M_LOG2E		1.4426950408889634074
#define M_LOG10E	                  0.43429448190325182765
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2		1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440

double fabs(double)				//Absolute
float  fabsf(float)

double floor ( double ); 		//floor(16.3) -> 16.0
float floorf ( float );

double ceil ( double ); 		//ceil(16.3) -> 17.0
float ceilf ( float ); 


double round ( double ); 		//round(16.3) -> 16.0
float roundf ( float ); 		//round(-16.5) -> -17.0

double trunc ( double ); 		//truncate
float truncf ( float );			//trunc(16.7) -> 16.0
long double truncl ( long double ); 

double sqrt ( double ); 		//Square root
float sqrtf ( float );
long double sqrtl ( long double );


double pow ( double base, double exponent ); 				//ham` mu~
float powf ( float base, float exponent );
long double powl ( long double base, long double exponent );   

double log ( double );						//log e
float logf ( float ); 
long double logl ( long double);

double exp ( double x); 					//e^x
float expf ( float ); 
long double expl ( long double );


Trigonometric functions: 					//sin, cos, tan, asin, acos, atan 


