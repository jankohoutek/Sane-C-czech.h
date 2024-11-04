/*
   ▀█▄▄█▀
    ▄▄▄▄
  ██▀▀▀▀█
 ██▀
 ██
 ██▄
  ██▄▄▄▄█
    ▀▀▀▀
*/
// typy
// clč - celé číslo 
#define SOUBOR FILE
#define desetinné float
#define realné double
#define celočíselné integer
#define clč int
#define znak char
#define dlouhý long
#define krátký short
#define znaménkový signed
#define bezznaménkový unsigned
#define nic void
#define pravdivost bool

// pokročilé celočíselné typy
// nz = neznaménkové
#define velikost_t size_t
#define clč8_t int8_t
#define clč16_t int16_t
#define clč32_t int32_t
#define clč64_t int64_t
#define nzclč8_t uint8_t
#define nzclč16_t uint16_t
#define nzclč32_t uint32_t
#define nzclč64_t uint64_t

// logické konstrukce
#define když if
#define dokud while
#define pro for
#define proveď do
#define přepínač switch
#define případ case
#define výchozí default
#define přeruš break
#define pokračuj continue

// ostatní klíčová slova
#define navrať return
#define stálý static
#define konst const
#define jdina goto
#define velikost(x) sizeof(x)

#define hlavní main

// operátory
#define je ==
#define není !=


// režimy otevření souboru
#define č "r"
#define z "w"
#define p "a"
#define čd "rb"
#define zd "wb"
#define pd "wa"

// standardní I/O streamy
#define stdvstup stdin
#define stdvvýstup stdout
#define stdchyba stderr

// konstanty
#define pravda 1
#define pravda true
#define nepravda 0
#define nepravda false
#define KS -1 //Konec Souboru
#define NULA NULL

// Knihovny

// <stdio.h> - <spnvv.h>
#define odstraň(x) remove(x)
#define přejmenuj(x, y) rename(x, y)
#define dčssoubor() tmpfile()
#define dčsjméno(x) tmpnam(x)
#define szavři(x) fclose(x)
#define sspláchni(x) fflush(x)
#define sotevři(x, y) fopen(x, y)
#define sznovuotevři(x, y, z) freopen(x, y, z)
#define nastavmísto(x, y) setbuf(x, y)
#define přenastavmísto(x, y, z, a) setvbuf(x, y, z, a)
#define stisknif(...) fprintf(__VA_ARGS__)
#define sčtif(...) fscanf(__VA_ARGS__)
#define tisknif(...) printf(__VA_ARGS__)
#define čtif(...) scanf(__VA_ARGS__)

// <stdlib.h> - <spnkni.h>
#define přidělp(x) malloc(x) // přiděl paměť 
#define přidělč(x, y) calloc(x, y) // přiděl čistou paměť 
#define uvolni(x) free(x)

#define řnac(x) atoi(x) // řetězec na celé číslo
#define řnavc(x) atol(x) // řetězec na velké celé čílo
#define řnavvc(x) atoll(x) // řetězec na velmi velké celé číslo
#define řnad(x) atof(x) // řetězec na destinné číslo

#define řetnavc(x, y, z) strtol(x, y, z) // řetězec na velké celé číslo
#define řetnavvc(x, y, z) strtoll(x, y, z) // řetězec na velmi velké celé číslo

#define řetnanvc(x, y, z) strtoul(x, y, z) // řetězec na neznaménkové velké celé číslo
#define řetnanvvc(x, y, z) strtoull(x, y, z) // řetězec na neznaménkové velmi velké celé číslo

#define náhod() rand()

// místo délka tisk formát
#define mdtisknif(...) snprintf(__VA_ARGS__)
#define mtisknif(...) sprintf(__VA_ARGS__)
#define mčtif(...) sscanf(__VA_ARGS__)
// proměnný souborový tisk formátovaný
#define pstisknif(...) vfprintf(__VA_ARGS__)
#define psčtif(...) vfscanf(__VA_ARGS__)
#define ptisknif(...) vprintf(__VA_ARGS__)
#define pčtif(...) vscanf(__VA_ARGS__)
#define pmdtisknif(...) vsnprintf(__VA_ARGS__)
#define pmtisknif(...) vsprintf(__VA_ARGS__)
#define pmčtif(...) vsscanf(__VA_ARGS__)
#define szískejz(x) fgetc(x)
#define szískejř(x, y, z) fgets(x, y, z)
#define spoložz(x, y) fputc(x, y)
#define spoložř(x, y) fputs(x, y)
#define získejz(x) getc(x)
#define získejznak(x) getchar(x)
#define získejř(x) gets(x)
#define položz(x, y) putc(x, y)
#define položznak(x) putchar(x)
#define položř(x) puts(x)
#define odložz(x, y) ungetc(x, y)
#define spřečti(x, y, z, a) fread(x, y, z, a)
#define szapiš(x, y, z, a) fwrite(x, y, z, a)
#define szískejpoz(x, y) fgetpos(x, y)
#define snajdi(x, y, z) fseek(x, y, z)
#define snastavpoz(x, y) fsetpos(x, y)
#define sřekni(x) ftell(x)
#define převiň(x) rewind(x)
#define vyčistichyb(x) clearerr(x)
#define sks(x) feof(x)
#define schyba(x) ferror(x)
#define tchybu(x) perror(x)


// <string.h> - <retezec.h>
#define pamzkop(...) memccpy(__VA_ARGS__)
#define pamznk(...) memchr(__VA_ARGS__)
#define pampor(...) memcmp(__VA_ARGS__)
#define pamkop(...) memcpy(__VA_ARGS__)
#define pampřesuň(...) memmove(__VA_ARGS__)
#define pamnastav(...) memset(__VA_ARGS__)
// ŘEtězcový Ukazatel KOPíruj
#define řeukop(...) stpcpy(__VA_ARGS__)
#define řeučkop(...) stpncpy(__VA_ARGS__)
#define řetpoj(...) strcat(__VA_ARGS__)
#define řetznk(...) strchr(__VA_ARGS__)
#define řetpor(...) strcmp(__VA_ARGS__)
// strcoll znamená STRing COLLate
#define řetřaď(...) strcoll(__VA_ARGS__)
// _l znamená lokalizace
#define řetřaď_l(...) strcoll_l(__VA_ARGS__)
#define řetkop(...) strcpy(__VA_ARGS__)
// řetezcový Doplňkový RoZSaH (fonetický zápis řetězce)
// STRing Complemetary SPaN
#define řetdrzsh(...) strcspn(__VA_ARGS__)
#define řetzdv(...) strdup(__VA_ARGS__)
#define řetchyba(...) strerror(__VA_ARGS__)
#define řetchyba_l(...) strerror_l(__VA_ARGS__)
// Upřímně netuším, co to _r má být za slovo
#define řetchyba_r(...) strerror_r(__VA_ARGS__)
#define řetdél(...) strlen(__VA_ARGS__)
#define řetčpoj(...) strncat(__VA_ARGS__)
#define řetčpor(...) strncmp(__VA_ARGS__)
#define řetčkop(...) strncpy(__VA_ARGS__)
#define řetčzdv(...) strndup(__VA_ARGS__)
#define řetčdél(...) strnlen(__VA_ARGS__)
//STRing Pointer BReaK - řetezcový Ukazatel ZLoM
#define řetuzlm(...) strpbrk(__VA_ARGS__)
//string reverse char - řetězcový zpětný znal
#define řetzznk(...) strrchr(__VA_ARGS__)
#define řetznamení(...) strsignal(__VA_ARGS__)
#define řetrzsh(...) strspn(__VA_ARGS__)
#define řetřet(...) strstr(__VA_ARGS__)
#define řetžet(...) strtok(__VA_ARGS__)
// _r -> reentrant -> znovuvstupující
#define řetžet_z(...) strtok_r(__VA_ARGS__)
// xfrm je zřejmě divná zkratka z transform
#define řetzměň(...) strxfrm(__VA_ARGS__)
#define řetzměň_l(...) strcfrm_l(__VA_ARGS__)

// <float.h> - <desetinne.h>
#define DST_SOUSTAVA FLT_RADIX
#define DST_UDRŽ_ČÍS FLT_MANT_DIG
#define REL_UDRŽ_ČÍS DBL_MANT_DIG
#define VREL_UDRŽ_ČÍS LDBL_MANT_DIG
#define DESÍTKOVÝCH_ČÍS DECIMAL_DIG
#define DST_ČÍS FLT_DIG
#define REL_ČÍS DBL_DIG
#define VREL_ČÍS LDBL_DIG
#define DST_MIN_MOC FLT_MIN_EXP
#define REL_MIN_MOC DBL_MIN_EXP
#define VREL_MIN_MOC LDBL_MIN_EXP
#define DST_MIN_10_MOC FLT_MIN_10_EXP
#define REL_MIN_10_MOC DBL_MIN_10_EXP
#define VREL_MIN_10_MOC LDBL_MIN_10_EXP
#define DST_MAX_MOC FLT_MAX_EXP
#define REL_MAX_MOC DBL_MAX_EXP
#define VREL_MAX_MOC LDBL_MAX_EXP
#define DST_MAX_10_MOC FLT_MAX_10_EXP
#define REL_MAX_10_MOC DBL_MAX_10_EXP
#define VREL_MAX_10_MOC LDBL_MAX_10_EXP
#define DST_MAX FLT_MAX
#define REL_MAX DBL_MAX
#define VREL_MAX LDBL_MAX
#define DST_EPSILON FLT_EPSILON
#define REL_EPSILON DBL_EPSILON
#define VREL_EPSILON LDBL_EPSILON
#define DST_MIN FLT_MIN
#define REL_MIN DBL_MIN
#define VREL_MIN LDBL_MIN


// <math.h> - <matika.h>
#define desetinná_t float_t
#define realná_t double_t
#define DST_HODN_ZPŮSOB FLT_EVAL_METHOD
#define dčroztřiď(x) fpclassify(x)
#define jekonečné(x) isfinite(x)
#define jevětší(x, y) isgreater(x, y)
#define jevětšírovno(x, y) isgreaterequal(x, y)
#define jenekonečné(x) isinf(x)
#define jemenší(x, y) isless(x, y)
#define jemenšírovno(x, y) islessequal(x, y)
#define jemenšívětší(x, y) islessgreater(x, y)
#define jenečíselné(x) isnan(x)
#define jenormální(x) isnormal(x)
#define jeneporovnatelné(x, y) isunordered(x, y)
#define znaménkovýbit(x) signbit(x)
#define znamýnkovýbit(x) signbit(x)
#define M_2_2ODMPI M_2_SQRTPI
#define M_2ODM2 M_SQRT2
#define M_2ODM1_2 M_SQRT1_2
#define MAXDESETINNÉ MAXFLOAT
#define OBŘÍ_HOD HUGE_VAL
#define OBŘÍ_HODP HUGE_VALF
#define OBŘÍ_HODD HUGE_VALL
#define NEKONEČNO INFINITY
#define NEČÍSELNÉ NAN
#define DT_NEKONEČNÉ FP_INFINITE
#define DT_NEČÍSELNÉ FP_NAN
#define DT_NORMÁLNÍ FP_NORMAL
#define DT_PODNORMÁLNÍ FP_SUBNORMAL
#define DT_NULA FP_ZERO
#define DT_RYCHLÁ_PRS FP_FAST_FMA
#define DT_RYCHLÁ_PRSP FP_FAST_FMAF
#define DT_RYCHLÁ_PRSD FP_FAST_FMAL
#define DT_ČLOGD0 FP_ILOGB0
#define DT_ČLOGDNEČÍSLO FP_ILOGBNAN
#define MAT_CHYBČSL MATH_ERRNO
#define MAT_CHYBVYJM MATH_ERREXCEPT
#define mat_chybzpracování math_errhandling
#define acosp(x) acosf(x)
#define acoshp(x) acoshf(x)
#define acoshd(x) acoshl(x)
#define acosd(x) acosl(x)
#define asinp(x) asinf(x)
#define asinhp(x) asinhf(x)
#define asinhd(x) asinhl(x)
#define asind(x) asinl(x)
#define atan2p(x, y) atan2f(x, y)
#define atan2d(x, y) atan2l(x, y)
#define atanp(x) atanf(x)
#define atanhp(x) atanhf(x)
#define atanhd(x) atanhl(x)
#define atand(x) atanl(x)
#define třod(x) cbrt(x)
#define třodp(x) cbrtf(x)
#define třodd(x) cbrtl(x)
#define strop(x) ceil(x)
#define stropp(x) ceilf(x)
#define stropd(x) ceill(x)
#define zaokrouhlinahoru(x) ceil(x)
#define zaokrouhlinahorup(x) ceilf(x)
#define zaokrouhlinahorud(x) ceill(x)
#define kopírujznaménko(x, y) copysign(x, y)
#define kopírujznaménkop(x, y) copysignf(x, y)
#define kopírujznaménkod(x, y) copysignl(x, y)
#define cosp(x) cosf(x)
#define coshp(x) coshf(x)
#define coshd(x) coshl(x)
#define cosd(x) cosl(x)
#define chf(x) erf(x)
#define chfp(x) erff(x)
// TODO: We can not map multiple tokens to the same one so this needs to be redefined
// #define chfd(x) erfl(x)
// #define chfd(x) erfc(x)
#define chfdp(x) erfcf(x)
#define chfdd(x) erfcl(x)
#define moc(x) exp(x)
#define mocp(x) expf(x)
#define mocd(x) expl(x)
#define moc2(x) exp2(x)
#define moc2p(x) exp2f(x)
#define moc2d(x) exp2l(x)
#define mocm1(x) expm1(x)
#define mocm1p(x) expm1f(x)
#define mocm1d(x) expm1l(x)
#define dabs(x) fabs(x)
#define dabsp(x) fabsf(x)
#define dabsd(x) fabsl(x)
#define drom(x) fdim(x)
#define dromp(x) fdimf(x)
#define dromd(x) fdiml(x)
#define zaokrouhlidolů(x) floor(x)
#define zaokrouhlidolůp(x) floorf(x)
#define zaokrouhlidolůd(x) floorl(x)
#define drs(...) fma(__VA_ARGS__)
#define drsp(...) fmaf(__VA_ARGS__)
#define drsd(...) fmal(__VA_ARGS__)
#define dmax(x, y) fmax(x, y)
#define dmaxp(x, y) fmaxf(x, y)
#define dmaxd(x, y) fmaxl(x, y)
#define dmin(x, y) fmin(x, y)
#define dminp(x, y) fminf(x, y)
#define dmind(x, y) fminl(x, y)
#define dzby(x, y) fmod(x, y)
#define dzbyp(x, y) fmodf(x, y)
#define dzbyd(x, y) fmodl(x, y)

/*
   ▀█▄▄█▀
    ▄▄▄▄
  ██▀▀▀▀█
 ██▀          ██        ██
 ██        ▄▄▄██▄▄▄  ▄▄▄██▄▄▄
 ██▄       ▀▀▀██▀▀▀  ▀▀▀██▀▀▀
  ██▄▄▄▄█     ██        ██
    ▀▀▀▀
*/
// c -> character -> znak -> z
#define zvýstup cout
#define zvstup cin
#define zchyb cerr

#define používá using
#define obor namespace

#define směr vector
#define vytlač push_back

#define mapa map
#define pár pair
