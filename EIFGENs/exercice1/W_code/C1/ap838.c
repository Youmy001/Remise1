/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F838_6531(EIF_REFERENCE);
extern void EIF_Minit838(void);

#ifdef __cplusplus
}
#endif

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {APPLICATION}.make */
void F838_6531 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {0, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {0, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {0, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {0, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {0, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {0, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {0, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uu4_1x = {0, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ui2_1x = {0, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc9);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_POINTER, &loc7);
	RTLU(SK_POINTER, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 837, Current, 11, 0, 11761);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(837, Current, 11761);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
	
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(836, 45, 836))(Current)).it_n4);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	uu4_1 = loc1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 32, 836))(Current, uu4_1x)).it_i4);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF80000C9, 0, 0); /* loc4 */
	
	loc4 = RTMS_EX_H("test.bmp",8,327368048);
	RTHOOK(4);
	RTDBGAL(Current, 5, 0xF800007B, 0, 0); /* loc5 */
	
	tr1 = RTLN(123);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(72, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 9, 0xF800007B, 0, 0); /* loc9 */
	
	tr1 = RTLN(123);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWPC(72, 0, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 7, 0x40000000, 1, 0); /* loc7 */
	
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(72, 19, "item", loc5))(loc5)).it_p);
	up1 = tp1;
	loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 33, 836))(Current, up1x)).it_p);
	RTHOOK(7);
	RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
	
	up1 = loc7;
	loc11 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 38, 836))(Current, up1x)).it_i4);
	RTHOOK(8);
	RTDBGAL(Current, 10, 0x10000000, 1, 0); /* loc10 */
	
	up1 = loc7;
	loc10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 39, 836))(Current, up1x)).it_i4);
	RTHOOK(9);
	RTDBGAL(Current, 3, 0x40000000, 1, 0); /* loc3 */
	
	ui4_1 = loc10;
	ui4_2 = loc11;
	ui4_3 = ((EIF_INTEGER_32) 32L);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(836, 48, 836))(Current)).it_n4);
	uu4_1 = tu4_1;
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 34, 836))(Current, ui4_1x, ui4_2x, ui4_3x, uu4_1x)).it_p);
	RTHOOK(10);
	RTDBGAL(Current, 8, 0x40000000, 1, 0); /* loc8 */
	
	tp1 = ((EIF_POINTER) 0);
	loc8 = (EIF_POINTER) tp1;
	RTHOOK(11);
	RTDBGAL(Current, 6, 0x40000000, 1, 0); /* loc6 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(836, 44, 836))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc6 = (EIF_POINTER) tp1;
	RTHOOK(12);
	up1 = loc6;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 40, 836))(Current, up1x, ui2_1x);
	RTHOOK(13);
	up1 = loc6;
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 41, 836))(Current, up1x, ui2_1x);
	RTHOOK(14);
	up1 = loc6;
	ui4_1 = loc10;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 43, 836))(Current, up1x, ui4_1x);
	RTHOOK(15);
	up1 = loc6;
	ui4_1 = loc11;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 42, 836))(Current, up1x, ui4_1x);
	RTHOOK(16);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	up1 = loc7;
	tp1 = ((EIF_POINTER) 0);
	up2 = tp1;
	up3 = loc3;
	up4 = loc6;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(836, 35, 836))(Current, up1x, up2x, up3x, up4x)).it_i4);
	RTHOOK(17);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	up1 = loc3;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 36, 836))(Current, up1x)).it_i4);
	RTHOOK(18);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2000L);
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(836, 37, 836))(Current, uu4_1x);
	RTHOOK(19);
	free(loc6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uu4_1
#undef ui2_1
}

void EIF_Minit838 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
