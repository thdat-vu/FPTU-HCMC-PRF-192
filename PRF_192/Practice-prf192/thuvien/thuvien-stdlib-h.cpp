int abs(int)                   long  labs(long)    //Get absolute value of integral number
int  rand(void),  int srand(unsigned int seed)//:  Get a random integer  in [0.. RAND_MAX]
In DevC++ (RAND_MAX=0x7FFF),  start up the soft random mechanism
Functions for dynamic memory allocating//: They are presented in the previous lecture
void  exit(int code):  //Force the program terminating
int  system ( const char* programName):// Request a program to execute
char* itoa (int num, char* result, int base)      char* ltoa (long num, char* result, int base)
//Convert integral number to ASCII string
int  atoi (const char*)               long atol (const char*)       double  atof (const char*)
//Convert an ASCII string to number
//xoa bo nho dem

void clear () { 
while ( getchar() != '\n' ); 
} 

