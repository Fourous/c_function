#ifndef _CTYPE
#define _CTYPE
// _CTYPE code bits
#define _XA 0x200 /*extra alpthabetic*/
#define _XS 0x100/*extra space*/
#define _BB 0x80 /*BEL ,BS,etc */ 
#define _CN 0x40 /*CR ,FF ,HT,NL,VT*/
#define _DI 0x20 /*0---9*/
#define _LO 0x10 /*a--z*/
#define _PU 0x08 /*pnctuation*/
#define _SP 0x04 /*space*/
#define _UP 0x02 /*A----Z*/
#define _XD 0x01 /*0-9,A-F,a-f*/
// declarations
int isalnum(int),isalpha(int),iscntrl(int),isdigit(int);
int isgraph(int),islower(int),isprint(int),ispunct(int);
int isspace(int),isupper(int),isxdigit(int);
int tolower(int),toupper(int);
extern const short *_Ctype,*_Tolower,*_Toupper;

/*macro overrides*/
#define isalnum(c) (_Ctype[(int)(c)]&(_DI|_LO|_UP|_XA))
#define isalpha(c) (_Ctype[(int)(c)]&(_LO|_LO|_UP|_XA))
#define isalnum(c) (_Ctype[(int)(c)]&(_DI|_LO|_UP|_XA))
#define isalnum(c) (_Ctype[(int)(c)]&(_DI|_LO|_UP|_XA))
#define isalnum(c) (_Ctype[(int)(c)]&(_DI|_LO|_UP|_XA))