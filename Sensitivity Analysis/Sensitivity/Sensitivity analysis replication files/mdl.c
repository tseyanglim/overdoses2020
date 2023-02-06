/*(Wed Jan 18 09:32:26 2023) From SOURCE_FENT_COVID.mdl - C equations for the model */

#define _VDFX
#define VDFX

#include "simext.c"
static COMPREAL temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8
,temp9,temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17,temp18
,temp19,temp20,temp21,temp22,temp23,temp24,temp25,temp26,temp27,temp28
,temp29,temp30,temp31,temp32,temp33,temp34,temp35,temp36,temp37,temp38
,temp39,temp40,temp41,temp42,temp43,temp44,temp45,temp46,temp47,temp48
,temp49,temp50,temp51,temp52,temp53,temp54,temp55,temp56,temp57,temp58
,temp59,temp60,temp61,temp62,temp63,temp64,temp65,temp66,temp67,temp68
,temp69,temp70,temp71,temp72,temp73,temp74,temp75,temp76,temp77,temp78
,temp79,temp80,temp81,temp82,temp83,temp84,temp85,temp86,temp87,temp88
,temp89,temp90,temp91,temp92,temp93,temp94,temp95,temp96,temp97,temp98
,temp99,temp100,temp101,temp102,temp103,temp104,temp105,temp106,temp107
,temp108,temp109,temp110,temp111,temp112,temp113,temp114,temp115,temp116
,temp117,temp118,temp119,temp120,temp121,temp122,temp123,temp124,temp125
,temp126,temp127,temp128,temp129,temp130,temp131 ;
static int sumind0,forind0 ; 
static int sumind1,forind1 ; 
static int sumind2,forind2 ; 
static int sumind3,forind3 ; 
static int sumind4,forind4 ; 
static int sumind5,forind5 ; 
static int sumind6,forind6 ; 
static int sumind7,forind7 ; 
static int simultid ;
static int sub0[]  /* Elm */ = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,
15,16,17,18,19,20,21,22,23,24,25,26,-1} ;
static int sub1[]  /* FlElm */ = {8,9,10,11,12,13,14,15,16,17,-1} ;
static int sub2[]  /* Initials */ = {0,1,2,3,4,5,6,7,8,9,10,11,12,
13,14,15,16,17,18,19,-1} ;
static int sub3[]  /* ODElm */ = {14,15,16,17,18,19,21,22,-1} ;
static int sub4[]  /* PET */ = {0,1,2,3,4,-1} ;
static int sub5[]  /* PrElm */ = {18,19,20,21,22,23,24,25,26,-1} ;
static int sub6[]  /* Proj */ = {0,1,2,3,4,5,6,7,8,9,10,-1} ;
static int sub7[]  /* StElm */ = {0,1,2,3,4,5,6,7,-1} ;
static int sub8[]  /* TSElm */ = {8,9,10,11,12,13,14,15,16,17,0,1,
2,3,4,5,6,7,-1} ;
static int sub9[]  /* TxT */ = {0,1,2,-1} ;
static int sub10[]  /* Year */ = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,
14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1} ;
#ifndef LINKEXTERN
#endif
unsigned char *mdl_desc()
{
return("(Wed Jan 18 09:32:26 2023) From SOURCE_FENT_COVID.mdl") ;
}

/* compute the model rates */
void mdl_func0()
{
double temp[10];
VGV->RATE[0] = 1.0 ;/* this is time */
/* #Perceived risk heroin use current>SMOOTHI# */
 {
  VGV->lastpos = 1 ;
  VGV->RATE[1] = (VGV->LEVEL[746]-VGV->LEVEL[1])/(IF_THEN_ELSE(VGV->LEVEL[745
]<VGV->LEVEL[746],VGV->LEVEL[749],VGV->LEVEL[744])) ;
} /* #Perceived risk heroin use current>SMOOTHI# */

/* #Perceived risk Rx use current>SMOOTHI# */
 {
  VGV->lastpos = 2 ;
  VGV->RATE[2] = (VGV->LEVEL[751]-VGV->LEVEL[2])/(IF_THEN_ELSE(VGV->LEVEL[750
]<VGV->LEVEL[751],VGV->LEVEL[749],VGV->LEVEL[744])) ;
} /* #Perceived risk Rx use current>SMOOTHI# */

/* #Tx intake capacity>DELAY1>LV1# */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 3+sub9[forind0]*1 ;
  VGV->RATE[3+sub9[forind0]*1] = VGV->LEVEL[2304+sub9[forind0]*1]-
VGV->LEVEL[35+sub9[forind0]*1] ;
} /* #Tx intake capacity>DELAY1>LV1# */

/* Cumulative nonfatal overdoses */
 {
  VGV->lastpos = 7 ;
  VGV->RATE[7] = VGV->LEVEL[2182] ;
} /* Cumulative nonfatal overdoses */

/* Cumulative Nx utilization deaths averted */
 {
  VGV->lastpos = 8 ;
  VGV->RATE[8] = VGV->LEVEL[658]+VGV->LEVEL[659] ;
} /* Cumulative Nx utilization deaths averted */

/* Cumulative overdose deaths */
 {
  VGV->lastpos = 9 ;
  VGV->RATE[9] = VGV->LEVEL[2186] ;
} /* Cumulative overdose deaths */

/* Cumulative overdose deaths synth excess */
 {
  VGV->lastpos = 10 ;
  VGV->RATE[10] = VGV->LEVEL[2200] ;
} /* Cumulative overdose deaths synth excess */

/* Cumulative UD person years */
 {
  VGV->lastpos = 11 ;
  VGV->RATE[11] = VGV->LEVEL[2222] ;
} /* Cumulative UD person years */

/* HUD by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 12+sub9[forind0]*1 ;
  VGV->RATE[12+sub9[forind0]*1] = VGV->LEVEL[2262+sub9[forind0]*1]
-VGV->LEVEL[2283+sub9[forind0]*1]-VGV->LEVEL[2307+sub9[forind0]*1]
-VGV->LEVEL[588+sub9[forind0]*1]-VGV->LEVEL[685+sub9[forind0]*1] ;
} /* HUD by MOUD */

/* HUD in remission */
 {
  VGV->lastpos = 15 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2283+sub9[sumind0]*1] ;
  VGV->RATE[15] = temp0-VGV->LEVEL[591]-VGV->LEVEL[950]+VGV->LEVEL[967
]-VGV->LEVEL[2086] ;
} /* HUD in remission */

/* HUD in stable remission */
 {
  VGV->lastpos = 16 ;
  VGV->RATE[16] = VGV->LEVEL[2086]-VGV->LEVEL[592] ;
} /* HUD in stable remission */

/* HUD no MOUD */
 {
  VGV->lastpos = 17 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2307+sub9[sumind0]*1]-VGV->LEVEL[2262+sub9[sumind0]
*1] ;
  VGV->RATE[17] = VGV->LEVEL[322]+VGV->LEVEL[329]-VGV->LEVEL[967]-
VGV->LEVEL[587]-VGV->LEVEL[684]+VGV->LEVEL[950]+temp0 ;
} /* HUD no MOUD */

/* Nondisordered heroin use */
 {
  VGV->lastpos = 18 ;
  VGV->RATE[18] = VGV->LEVEL[473]+VGV->LEVEL[478]-VGV->LEVEL[322]-
VGV->LEVEL[565]-VGV->LEVEL[567]-VGV->LEVEL[597]-VGV->LEVEL[692] ;
} /* Nondisordered heroin use */

/* Projected cumulative overdose deaths */
 {
  VGV->lastpos = 19 ;
  VGV->RATE[19] = VGV->LEVEL[843] ;
} /* Projected cumulative overdose deaths */

/* Projected cumulative UD person years */
 {
  VGV->lastpos = 20 ;
  VGV->RATE[20] = VGV->LEVEL[844] ;
} /* Projected cumulative UD person years */

/* Rx misuse no PY heroin */
 {
  VGV->lastpos = 21 ;
  VGV->RATE[21] = VGV->LEVEL[484]+VGV->LEVEL[488]-VGV->LEVEL[330]-
VGV->LEVEL[478]-VGV->LEVEL[568]+VGV->LEVEL[565]-VGV->LEVEL[596]-VGV->LEVEL[707
] ;
} /* Rx misuse no PY heroin */

/* Rx OUD no heroin by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 22+sub9[forind0]*1 ;
  VGV->RATE[22+sub9[forind0]*1] = VGV->LEVEL[2274+sub9[forind0]*1]
-VGV->LEVEL[2295+sub9[forind0]*1]-VGV->LEVEL[2319+sub9[forind0]*1]
-VGV->LEVEL[608+sub9[forind0]*1]-VGV->LEVEL[709+sub9[forind0]*1] ;
} /* Rx OUD no heroin by MOUD */

/* Rx OUD no heroin in remission */
 {
  VGV->lastpos = 25 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2295+sub9[sumind0]*1] ;
  VGV->RATE[25] = temp0-VGV->LEVEL[606]-VGV->LEVEL[952]+VGV->LEVEL[968
]-VGV->LEVEL[2087] ;
} /* Rx OUD no heroin in remission */

/* Rx OUD no heroin in stable remission */
 {
  VGV->lastpos = 26 ;
  VGV->RATE[26] = VGV->LEVEL[2087]-VGV->LEVEL[607] ;
} /* Rx OUD no heroin in stable remission */

/* Rx OUD no PY heroin no MOUD */
 {
  VGV->lastpos = 27 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2319+sub9[sumind0]*1]-VGV->LEVEL[2274+sub9[sumind0]
*1] ;
  VGV->RATE[27] = VGV->LEVEL[330]+VGV->LEVEL[566]-VGV->LEVEL[481]-
VGV->LEVEL[968]-VGV->LEVEL[605]-VGV->LEVEL[708]+VGV->LEVEL[952]+temp0
 ;
} /* Rx OUD no PY heroin no MOUD */

/* Rx OUD with heroin by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 28+sub9[forind0]*1 ;
  VGV->RATE[28+sub9[forind0]*1] = VGV->LEVEL[2277+sub9[forind0]*1]
-VGV->LEVEL[2298+sub9[forind0]*1]-VGV->LEVEL[2322+sub9[forind0]*1]
-VGV->LEVEL[614+sub9[forind0]*1]-VGV->LEVEL[713+sub9[forind0]*1] ;
} /* Rx OUD with heroin by MOUD */

/* Rx OUD with heroin in remission */
 {
  VGV->lastpos = 31 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2298+sub9[sumind0]*1] ;
  VGV->RATE[31] = temp0-VGV->LEVEL[612]-VGV->LEVEL[954]+VGV->LEVEL[969
]-VGV->LEVEL[2088] ;
} /* Rx OUD with heroin in remission */

/* Rx OUD with heroin in stable remission */
 {
  VGV->lastpos = 32 ;
  VGV->RATE[32] = VGV->LEVEL[2088]-VGV->LEVEL[613] ;
} /* Rx OUD with heroin in stable remission */

/* Rx OUD with PY heroin no MOUD */
 {
  VGV->lastpos = 33 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2322+sub9[sumind0]*1]-VGV->LEVEL[2277+sub9[sumind0]
*1] ;
  VGV->RATE[33] = VGV->LEVEL[481]-VGV->LEVEL[329]-VGV->LEVEL[566]-
VGV->LEVEL[969]-VGV->LEVEL[611]-VGV->LEVEL[712]+VGV->LEVEL[954]+temp0
 ;
} /* Rx OUD with PY heroin no MOUD */

/* Rx street supply disruption */
 {
  VGV->lastpos = 34 ;
  VGV->RATE[34] = VGV->LEVEL[1985]-VGV->LEVEL[1984] ;
} /* Rx street supply disruption */

} /* comp_rate */

/* compute the delays */
void mdl_func1()
{
double temp[10];
/* Bup effective capacity rampup fraction */
 {
  VGV->lastpos = 6 ;
  VGV->RATE[6] = DELAY_N_a(0,STEP(1.000000,VGV->LEVEL[210]),VGV->LEVEL[205
]) ;
} /* Bup effective capacity rampup fraction */

} /* comp_delay */

/* initialize time */
void mdl_func2()
{
double temp[10];
vec_arglist_init();
VGV->LEVEL[0] = VGV->LEVEL[469] ;
} /* init_time */

/* initialize time step */
void mdl_func3()
{
double temp[10];
/* a constant no need to do anything */
} /* init_tstep */

/* State variable initial value computation*/
void mdl_func4()
{
double temp[10];
/* Time */
 {
  VGV->lastpos = 0 ;
  VGV->LEVEL[0] = VGV->LEVEL[469] ;
}
/* NSDUH misuse redefinition effect */
 {
  VGV->lastpos = 644 ;
  VGV->LEVEL[644] = 1.000000-RAMP(VGV->LEVEL[645]/(1.000000+VGV->LEVEL[645
])/VGV->LEVEL[683],VGV->LEVEL[646],(VGV->LEVEL[646]+VGV->LEVEL[683
])) ;
}
/* Rx misuse no PY heroin NSDUH redef corrected */
 {
  VGV->lastpos = 1960 ;
  VGV->LEVEL[1960] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[644
]*VGV->LEVEL[1959],NA) ;
}
/* Tx average duration */
 {
  VGV->lastpos = 2226+0*1 ;
  VGV->LEVEL[2226+0*1] = VGV->LEVEL[2229] ;
}
 {
  VGV->lastpos = 2226+1*1 ;
  VGV->LEVEL[2226+1*1] = VGV->LEVEL[2230] ;
}
 {
  VGV->lastpos = 2226+2*1 ;
  VGV->LEVEL[2226+2*1] = VGV->LEVEL[2234] ;
}
/* Tx average duration net */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2231+sub9[forind0]*1 ;
  VGV->LEVEL[2231+sub9[forind0]*1] = VGV->LEVEL[2226+sub9[forind0]
*1]*(1.000000+RAMP(VGV->LEVEL[793]/VGV->LEVEL[801],VGV->LEVEL[768]
,VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Tx success fraction */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2368+sub9[forind0]*1 ;
  VGV->LEVEL[2368+sub9[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[2231+sub9[forind0]
*1]<=VGV->LEVEL[2371],ZIDZ(0,POWER(VGV->LEVEL[2372],2.000000),1.000000
+POWER(VGV->LEVEL[2372],2.000000))*EXP((VGV->LEVEL[2373]/VGV->LEVEL[2372
])*(VGV->LEVEL[2231+sub9[forind0]*1]-VGV->LEVEL[2371])),1.000000-ZIDZ(
0,1.000000,1.000000+POWER(VGV->LEVEL[2372],2.000000))*EXP((-VGV->LEVEL[2373
])*VGV->LEVEL[2372]*(VGV->LEVEL[2231+sub9[forind0]*1]-VGV->LEVEL[2371
])))*VGV->LEVEL[2374] ;
}
/* Remission fraction in Tx MMT */
 {
  VGV->lastpos = 960 ;
  VGV->LEVEL[960] = VGV->LEVEL[2368+1*1] ;
}
/* Initial stock base values */
 {
  VGV->lastpos = 429+0*1 ;
  VGV->LEVEL[429+0*1] = VGV->LEVEL[1960] ;
}
 {
  VGV->lastpos = 429+1*1 ;
  VGV->LEVEL[429+1*1] = VGV->LEVEL[570] ;
}
 {
  VGV->lastpos = 429+3*1 ;
  VGV->LEVEL[429+3*1] = VGV->LEVEL[2337]*(1.000000-VGV->LEVEL[409]
-VGV->LEVEL[410]) ;
}
 {
  VGV->lastpos = 429+5*1 ;
  VGV->LEVEL[429+5*1] = VGV->LEVEL[1975] ;
}
 {
  VGV->lastpos = 429+6*1 ;
  VGV->LEVEL[429+6*1] = VGV->LEVEL[413]*(1.000000-VGV->LEVEL[399])
*(1.000000-VGV->LEVEL[960]) ;
}
 {
  VGV->lastpos = 429+9*1 ;
  VGV->LEVEL[429+9*1] = VGV->LEVEL[2337]*VGV->LEVEL[410] ;
}
 {
  VGV->lastpos = 429+11*1 ;
  VGV->LEVEL[429+11*1] = VGV->LEVEL[1977] ;
}
 {
  VGV->lastpos = 429+12*1 ;
  VGV->LEVEL[429+12*1] = VGV->LEVEL[413]*VGV->LEVEL[399]*(1.000000
-VGV->LEVEL[960]) ;
}
 {
  VGV->lastpos = 429+15*1 ;
  VGV->LEVEL[429+15*1] = VGV->LEVEL[2337]*VGV->LEVEL[409] ;
}
 {
  VGV->lastpos = 429+17*1 ;
  VGV->LEVEL[429+17*1] = VGV->LEVEL[386] ;
}
 {
  VGV->lastpos = 429+18*1 ;
  VGV->LEVEL[429+18*1] = VGV->LEVEL[405]*(1.000000-VGV->LEVEL[960]
) ;
}
 {
  VGV->lastpos = 429+7*1 ;
  VGV->LEVEL[429+7*1] = VGV->LEVEL[414]*(1.000000-VGV->LEVEL[399])
 ;
}
 {
  VGV->lastpos = 429+13*1 ;
  VGV->LEVEL[429+13*1] = VGV->LEVEL[414]*VGV->LEVEL[399] ;
}
 {
  VGV->lastpos = 429+19*1 ;
  VGV->LEVEL[429+19*1] = VGV->LEVEL[407] ;
}
/* Initial NDHU */
 {
  VGV->lastpos = 411 ;
  VGV->LEVEL[411] = VGV->LEVEL[429+1*1]*VGV->LEVEL[449+1*1] ;
}
/* Nondisordered heroin use */
 {
  VGV->lastpos = 18 ;
  VGV->LEVEL[18] = VGV->LEVEL[411] ;
}
/* Overdose rate base NDHU */
 {
  VGV->lastpos = 717 ;
  VGV->LEVEL[717] = VGV->LEVEL[716]*VGV->LEVEL[720] ;
}
/* Projection last data time */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 900+sub6[forind0]*1 ;
  VGV->LEVEL[900+sub6[forind0]*1] = GET_DATA_LAST_TIME(vecarg_assign(0,&
VGV->LEVEL[889+sub6[forind0]*1])) ;
}
/* Projection start time */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 933+sub6[forind0]*1 ;
  VGV->LEVEL[933+sub6[forind0]*1] = MIN(VGV->LEVEL[900+sub6[forind0]
*1],VGV->LEVEL[547+sub6[forind0]*1]) ;
}
/* Projection last data value */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 911+sub6[forind0]*1 ;
  VGV->LEVEL[911+sub6[forind0]*1] = GET_DATA_AT_TIME(vecarg_assign(1,&
VGV->LEVEL[889+sub6[forind0]*1]),VGV->LEVEL[933+sub6[forind0]*1]) ;
}
/* Projection curve end value */
 {
  VGV->lastpos = 867+0*1 ;
  VGV->LEVEL[867+0*1] = VGV->LEVEL[882] ;
}
 {
  VGV->lastpos = 867+2*1 ;
  VGV->LEVEL[867+2*1] = VGV->LEVEL[883] ;
}
 {
  VGV->lastpos = 867+9*1 ;
  VGV->LEVEL[867+9*1] = VGV->LEVEL[879] ;
}
 {
  VGV->lastpos = 867+3*1 ;
  VGV->LEVEL[867+3*1] = VGV->LEVEL[880] ;
}
 {
  VGV->lastpos = 867+4*1 ;
  VGV->LEVEL[867+4*1] = VGV->LEVEL[884] ;
}
 {
  VGV->lastpos = 867+5*1 ;
  VGV->LEVEL[867+5*1] = VGV->LEVEL[888] ;
}
 {
  VGV->lastpos = 867+6*1 ;
  VGV->LEVEL[867+6*1] = VGV->LEVEL[886] ;
}
 {
  VGV->lastpos = 867+1*1 ;
  VGV->LEVEL[867+1*1] = VGV->LEVEL[885] ;
}
 {
  VGV->lastpos = 867+10*1 ;
  VGV->LEVEL[867+10*1] = VGV->LEVEL[878] ;
}
 {
  VGV->lastpos = 867+7*1 ;
  VGV->LEVEL[867+7*1] = VGV->LEVEL[887] ;
}
 {
  VGV->lastpos = 867+8*1 ;
  VGV->LEVEL[867+8*1] = VGV->LEVEL[881] ;
}
/* Projection curve end time */
 {
  VGV->lastpos = 845+0*1 ;
  VGV->LEVEL[845+0*1] = VGV->LEVEL[860] ;
}
 {
  VGV->lastpos = 845+2*1 ;
  VGV->LEVEL[845+2*1] = VGV->LEVEL[861] ;
}
 {
  VGV->lastpos = 845+9*1 ;
  VGV->LEVEL[845+9*1] = VGV->LEVEL[857] ;
}
 {
  VGV->lastpos = 845+3*1 ;
  VGV->LEVEL[845+3*1] = VGV->LEVEL[858] ;
}
 {
  VGV->lastpos = 845+4*1 ;
  VGV->LEVEL[845+4*1] = VGV->LEVEL[862] ;
}
 {
  VGV->lastpos = 845+5*1 ;
  VGV->LEVEL[845+5*1] = VGV->LEVEL[866] ;
}
 {
  VGV->lastpos = 845+6*1 ;
  VGV->LEVEL[845+6*1] = VGV->LEVEL[864] ;
}
 {
  VGV->lastpos = 845+1*1 ;
  VGV->LEVEL[845+1*1] = VGV->LEVEL[863] ;
}
 {
  VGV->lastpos = 845+10*1 ;
  VGV->LEVEL[845+10*1] = VGV->LEVEL[856] ;
}
 {
  VGV->lastpos = 845+7*1 ;
  VGV->LEVEL[845+7*1] = VGV->LEVEL[865] ;
}
 {
  VGV->lastpos = 845+8*1 ;
  VGV->LEVEL[845+8*1] = VGV->LEVEL[859] ;
}
/* Logistic growth curve */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 534+sub6[forind0]*1 ;
  VGV->LEVEL[534+sub6[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[867+sub6[forind0]
*1]>VGV->LEVEL[911+sub6[forind0]*1],MIN(VGV->LEVEL[867+sub6[forind0]
*1],((VGV->LEVEL[867+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]
*1])/0.500000)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845+sub6[forind0]
*1]-VGV->LEVEL[933+sub6[forind0]*1]))*(VGV->LEVEL[0]-VGV->LEVEL[933
+sub6[forind0]*1])))+(VGV->LEVEL[867+sub6[forind0]*1]-(VGV->LEVEL[867
+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]*1])/0.500000)),MAX(
VGV->LEVEL[867+sub6[forind0]*1],((VGV->LEVEL[867+sub6[forind0]*1]-
VGV->LEVEL[911+sub6[forind0]*1])/0.500000)/(1.000000+EXP(((-5.000000)
/(VGV->LEVEL[845+sub6[forind0]*1]-VGV->LEVEL[933+sub6[forind0]*1])
)*(VGV->LEVEL[0]-VGV->LEVEL[933+sub6[forind0]*1])))+(VGV->LEVEL[867
+sub6[forind0]*1]-(VGV->LEVEL[867+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]
*1])/0.500000))) ;
}
/* Projection output data */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 922+sub6[forind0]*1 ;
  VGV->LEVEL[922+sub6[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[933
+sub6[forind0]*1],VGV->LEVEL[889+sub6[forind0]*1],VGV->LEVEL[2117+sub6[forind0]
*1]*VGV->LEVEL[911+sub6[forind0]*1]+(1.000000-VGV->LEVEL[2117+sub6[forind0]
*1])*VGV->LEVEL[534+sub6[forind0]*1]) ;
}
/* Fentanyl penetration curve */
 {
  VGV->lastpos = 353 ;
  VGV->LEVEL[353] = VGV->LEVEL[922+0*1]*(1.000000-VGV->LEVEL[2130]
) ;
}
/* Fentanyl effect on OD rate H max net */
 {
  VGV->lastpos = 350 ;
  VGV->LEVEL[350] = ((1.000000-VGV->LEVEL[2128])*VGV->LEVEL[349]+VGV->LEVEL[2128
]*VGV->LEVEL[351])*(1.000000+RAMP(VGV->LEVEL[774]/VGV->LEVEL[801],
VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Overdose rate net NDHU */
 {
  VGV->lastpos = 722 ;
  VGV->LEVEL[722] = VGV->LEVEL[717]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Base survival probability H OD */
 {
  VGV->lastpos = 58 ;
  VGV->LEVEL[58] = VGV->LEVEL[59]*VGV->LEVEL[61] ;
}
/* Base survival probability fentanyl OD */
 {
  VGV->lastpos = 57 ;
  VGV->LEVEL[57] = VGV->LEVEL[58]*VGV->LEVEL[348] ;
}
/* Base survival probability net H OD */
 {
  VGV->lastpos = 60 ;
  VGV->LEVEL[60] = MAX(0,VGV->LEVEL[58]+(VGV->LEVEL[57]-VGV->LEVEL[58
])*VGV->LEVEL[353]) ;
}
/* Probability OD witnessed net */
 {
  VGV->lastpos = 840 ;
  VGV->LEVEL[840] = VGV->LEVEL[839]+RAMP(IF_THEN_ELSE(VGV->LEVEL[786
]>=0,VGV->LEVEL[786]*(1.000000-VGV->LEVEL[839]),VGV->LEVEL[786]*VGV->LEVEL[839
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Nx kit distribution efficiency net */
 {
  VGV->lastpos = 648 ;
  VGV->LEVEL[648] = VGV->LEVEL[647]*(1.000000+RAMP(VGV->LEVEL[782]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Nx kits distributed net */
 {
  VGV->lastpos = 653 ;
  VGV->LEVEL[653] = VGV->LEVEL[922+1*1]*(1.000000+RAMP(VGV->LEVEL[783
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Nx kits distributed H user */
 {
  VGV->lastpos = 651 ;
  VGV->LEVEL[651] = VGV->LEVEL[653]*VGV->LEVEL[359] ;
}
/* Nx kits per 100k population H user */
 {
  VGV->lastpos = 655 ;
  VGV->LEVEL[655] = VGV->LEVEL[651]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander heroin */
 {
  VGV->lastpos = 834 ;
  VGV->LEVEL[834] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[655
]) ;
}
/* Probability of calling emergency services net */
 {
  VGV->lastpos = 842 ;
  VGV->LEVEL[842] = VGV->LEVEL[841]+RAMP(IF_THEN_ELSE(VGV->LEVEL[787
]>=0,VGV->LEVEL[787]*(1.000000-VGV->LEVEL[841]),VGV->LEVEL[787]*VGV->LEVEL[841
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Probability OD death not averted heroin user */
 {
  VGV->lastpos = 837 ;
  VGV->LEVEL[837] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[834
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate NDHU */
 {
  VGV->lastpos = 700 ;
  VGV->LEVEL[700] = VGV->LEVEL[722]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death NDHU */
 {
  VGV->lastpos = 692 ;
  VGV->LEVEL[692] = VGV->LEVEL[18]*VGV->LEVEL[700] ;
}
/* Initial HUD total */
 {
  VGV->lastpos = 408 ;
  VGV->LEVEL[408] = VGV->LEVEL[429+17*1]*VGV->LEVEL[449+17*1] ;
}
/* Remission fraction in Tx Bup */
 {
  VGV->lastpos = 959 ;
  VGV->LEVEL[959] = VGV->LEVEL[2368+0*1] ;
}
/* Remission fraction in Tx Viv */
 {
  VGV->lastpos = 961 ;
  VGV->LEVEL[961] = VGV->LEVEL[2368+2*1] ;
}
/* Remission fraction in Tx */
 {
  VGV->lastpos = 956+0*1 ;
  VGV->LEVEL[956+0*1] = VGV->LEVEL[959] ;
}
 {
  VGV->lastpos = 956+1*1 ;
  VGV->LEVEL[956+1*1] = VGV->LEVEL[960] ;
}
}
void mdl_func5(void) ;
void mdl_func5(){
double temp[10];
 {
  VGV->lastpos = 956+2*1 ;
  VGV->LEVEL[956+2*1] = VGV->LEVEL[961] ;
}
/* Initial HUD in MOUD Tx */
 {
  VGV->lastpos = 401+0*1 ;
  VGV->LEVEL[401+0*1] = VGV->LEVEL[429+14*1]*VGV->LEVEL[449+14*1] ;
}
 {
  VGV->lastpos = 401+1*1 ;
  VGV->LEVEL[401+1*1] = VGV->LEVEL[429+15*1]*VGV->LEVEL[449+15*1] ;
}
 {
  VGV->lastpos = 401+2*1 ;
  VGV->LEVEL[401+2*1] = VGV->LEVEL[429+16*1]*VGV->LEVEL[449+16*1] ;
}
/* Initial HUD */
 {
  VGV->lastpos = 400 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[401
+sub9[sumind0]*1] ;
  VGV->LEVEL[400] = VGV->LEVEL[408]-temp0 ;
}
/* HUD no MOUD */
 {
  VGV->lastpos = 17 ;
  VGV->LEVEL[17] = VGV->LEVEL[400] ;
}
/* Overdose rate net HUD */
 {
  VGV->lastpos = 721 ;
  VGV->LEVEL[721] = VGV->LEVEL[716]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Overdose death rate HUD */
 {
  VGV->lastpos = 698 ;
  VGV->LEVEL[698] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death HUD */
 {
  VGV->lastpos = 684 ;
  VGV->LEVEL[684] = VGV->LEVEL[17]*VGV->LEVEL[698] ;
}
/* HUD by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 12+sub9[forind0]*1 ;
  VGV->LEVEL[12+sub9[forind0]*1] = VGV->LEVEL[401+sub9[forind0]*1]
 ;
}
/* OD death rate HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 671+sub9[forind0]*1 ;
  VGV->LEVEL[671+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[698]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 685+sub9[forind0]*1 ;
  VGV->LEVEL[685+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[671+sub9[forind0]*1] ;
}
/* Total overdose deaths HUD */
 {
  VGV->lastpos = 2193 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[685+sub9[sumind0]*1] ;
  VGV->LEVEL[2193] = VGV->LEVEL[684]+temp0 ;
}
/* Total overdose deaths heroin */
 {
  VGV->lastpos = 2191 ;
  VGV->LEVEL[2191] = VGV->LEVEL[692]+VGV->LEVEL[2193] ;
}
/* Nonfatal OD ratio HUD */
 {
  VGV->lastpos = 574 ;
  VGV->LEVEL[574] = VGV->LEVEL[721]/VGV->LEVEL[698]-1.000000 ;
}
/* Nonfatal ODs HUD */
 {
  VGV->lastpos = 582 ;
  VGV->LEVEL[582] = VGV->LEVEL[2193]*VGV->LEVEL[574] ;
}
/* Nonfatal OD ratio NDHU */
 {
  VGV->lastpos = 575 ;
  VGV->LEVEL[575] = VGV->LEVEL[722]/VGV->LEVEL[700]-1.000000 ;
}
/* Nonfatal ODs NDHU */
 {
  VGV->lastpos = 583 ;
  VGV->LEVEL[583] = VGV->LEVEL[692]*VGV->LEVEL[575] ;
}
/* Total nonfatal overdoses heroin */
 {
  VGV->lastpos = 2183 ;
  VGV->LEVEL[2183] = VGV->LEVEL[582]+VGV->LEVEL[583] ;
}
/* Perceived risk heroin use indicated */
 {
  VGV->lastpos = 746 ;
  VGV->LEVEL[746] = VGV->LEVEL[2191]+VGV->LEVEL[2183]*VGV->LEVEL[762
] ;
}
/* Perceived risk heroin use reference */
 {
  VGV->lastpos = 747 ;
  VGV->LEVEL[747] = VGV->LEVEL[746] ;
}
/* #Perceived risk heroin use current>SMOOTHI# */
 {
  VGV->lastpos = 1 ;
  VGV->LEVEL[1] = VGV->LEVEL[747] ;
}
/* Patients receiving opioid prescription annual */
 {
  VGV->lastpos = 729 ;
  VGV->LEVEL[729] = VGV->LEVEL[922+6*1]*(1.000000+RAMP(VGV->LEVEL[784
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average days per prescription */
 {
  VGV->lastpos = 46 ;
  VGV->LEVEL[46] = VGV->LEVEL[922+8*1]*(1.000000+RAMP(VGV->LEVEL[773
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Prescriptions per person */
 {
  VGV->lastpos = 803 ;
  VGV->LEVEL[803] = VGV->LEVEL[922+7*1]*(1.000000+RAMP(VGV->LEVEL[785
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average duration of medical opioid use */
 {
  VGV->lastpos = 50 ;
  VGV->LEVEL[50] = VGV->LEVEL[46]*VGV->LEVEL[803]*VGV->LEVEL[682] ;
}
/* Patients with current month opioid Rx */
 {
  VGV->lastpos = 733 ;
  VGV->LEVEL[733] = VGV->LEVEL[729]*VGV->LEVEL[50] ;
}
/* Overdose death MU */
 {
  VGV->lastpos = 691 ;
  VGV->LEVEL[691] = VGV->LEVEL[733]*VGV->LEVEL[695] ;
}
/* Initial Rx misuse no H */
 {
  VGV->lastpos = 412 ;
  VGV->LEVEL[412] = VGV->LEVEL[429+0*1]*VGV->LEVEL[449+0*1] ;
}
/* Rx misuse no PY heroin */
 {
  VGV->lastpos = 21 ;
  VGV->LEVEL[21] = VGV->LEVEL[412] ;
}
/* Nx kits distributed Rx user */
 {
  VGV->lastpos = 654 ;
  VGV->LEVEL[654] = VGV->LEVEL[653]*(1.000000-VGV->LEVEL[359]) ;
}
/* Nx kits per 100k population Rx user */
 {
  VGV->lastpos = 656 ;
  VGV->LEVEL[656] = VGV->LEVEL[654]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander Rx */
 {
  VGV->lastpos = 836 ;
  VGV->LEVEL[836] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[656
]) ;
}
/* Probability OD death not averted Rx user */
 {
  VGV->lastpos = 838 ;
  VGV->LEVEL[838] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[836
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate Rx misuse */
 {
  VGV->lastpos = 701 ;
  VGV->LEVEL[701] = VGV->LEVEL[718]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death Rx misuse */
 {
  VGV->lastpos = 707 ;
  VGV->LEVEL[707] = VGV->LEVEL[21]*VGV->LEVEL[701] ;
}
/* Initial Rx OUD no H total */
 {
  VGV->lastpos = 421 ;
  VGV->LEVEL[421] = VGV->LEVEL[429+5*1]*VGV->LEVEL[449+5*1] ;
}
/* Initial Rx OUD no H in Tx */
 {
  VGV->lastpos = 418+0*1 ;
  VGV->LEVEL[418+0*1] = VGV->LEVEL[429+2*1]*VGV->LEVEL[449+2*1] ;
}
 {
  VGV->lastpos = 418+1*1 ;
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  VGV->lastpos = 418+2*1 ;
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* Initial Rx OUD no H */
 {
  VGV->lastpos = 415 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[418
+sub9[sumind0]*1] ;
  VGV->LEVEL[415] = VGV->LEVEL[421]-temp0 ;
}
/* Rx OUD no PY heroin no MOUD */
 {
  VGV->lastpos = 27 ;
  VGV->LEVEL[27] = VGV->LEVEL[415] ;
}
/* Overdose death rate base Rx OUD */
 {
  VGV->lastpos = 697 ;
  VGV->LEVEL[697] = VGV->LEVEL[719]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death rate synth baseline */
 {
  VGV->lastpos = 704 ;
  VGV->LEVEL[704] = VGV->LEVEL[723]*(1.000000-VGV->LEVEL[57])*VGV->LEVEL[838
] ;
}
/* Overdose death rate Rx OUD no H */
 {
  VGV->lastpos = 702 ;
  VGV->LEVEL[702] = VGV->LEVEL[697]+VGV->LEVEL[704] ;
}
/* Overdose death Rx OUD no H */
 {
  VGV->lastpos = 708 ;
  VGV->LEVEL[708] = VGV->LEVEL[27]*VGV->LEVEL[702] ;
}
/* Rx OUD no heroin by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 22+sub9[forind0]*1 ;
  VGV->LEVEL[22+sub9[forind0]*1] = VGV->LEVEL[418+sub9[forind0]*1]
 ;
}
/* OD death rate Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 674+sub9[forind0]*1 ;
  VGV->LEVEL[674+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[702]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 709+sub9[forind0]*1 ;
  VGV->LEVEL[709+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1]
*VGV->LEVEL[674+sub9[forind0]*1] ;
}
/* Total overdose deaths Rx OUD no H */
 {
  VGV->lastpos = 2196 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[709+sub9[sumind0]*1] ;
  VGV->LEVEL[2196] = VGV->LEVEL[708]+temp0 ;
}
/* Initial Rx OUD with H total */
 {
  VGV->lastpos = 428 ;
  VGV->LEVEL[428] = VGV->LEVEL[429+11*1]*VGV->LEVEL[449+11*1] ;
}
/* Initial Rx OUD with H in Tx */
 {
  VGV->lastpos = 425+0*1 ;
  VGV->LEVEL[425+0*1] = VGV->LEVEL[429+8*1]*VGV->LEVEL[449+8*1] ;
}
 {
  VGV->lastpos = 425+1*1 ;
  VGV->LEVEL[425+1*1] = VGV->LEVEL[429+9*1]*VGV->LEVEL[449+9*1] ;
}
 {
  VGV->lastpos = 425+2*1 ;
  VGV->LEVEL[425+2*1] = VGV->LEVEL[429+10*1]*VGV->LEVEL[449+10*1] ;
}
/* Initial Rx OUD with H */
 {
  VGV->lastpos = 422 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[425
+sub9[sumind0]*1] ;
  VGV->LEVEL[422] = VGV->LEVEL[428]-temp0 ;
}
/* Rx OUD with PY heroin no MOUD */
 {
  VGV->lastpos = 33 ;
  VGV->LEVEL[33] = VGV->LEVEL[422] ;
}
/* Overdose death rate Rx OUD with H */
 {
  VGV->lastpos = 703 ;
  VGV->LEVEL[703] = VGV->LEVEL[697] ;
}
/* Overdose death Rx OUD with H */
 {
  VGV->lastpos = 712 ;
  VGV->LEVEL[712] = VGV->LEVEL[33]*VGV->LEVEL[703] ;
}
/* Rx OUD with heroin by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 28+sub9[forind0]*1 ;
  VGV->LEVEL[28+sub9[forind0]*1] = VGV->LEVEL[425+sub9[forind0]*1]
 ;
}
/* OD death rate Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 677+sub9[forind0]*1 ;
  VGV->LEVEL[677+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[703]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 713+sub9[forind0]*1 ;
  VGV->LEVEL[713+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1]
*VGV->LEVEL[677+sub9[forind0]*1] ;
}
/* Total overdose deaths Rx OUD with H */
 {
  VGV->lastpos = 2197 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[713+sub9[sumind0]*1] ;
  VGV->LEVEL[2197] = VGV->LEVEL[712]+temp0 ;
}
/* Total overdose deaths Rx */
 {
  VGV->lastpos = 2195 ;
  VGV->LEVEL[2195] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]+VGV->LEVEL[2197] ;
}
/* Overdose rate total Rx OUD no H */
 {
  VGV->lastpos = 724 ;
  VGV->LEVEL[724] = VGV->LEVEL[719]+VGV->LEVEL[723] ;
}
/* Nonfatal OD ratio Rx OUD no H */
 {
  VGV->lastpos = 578 ;
  VGV->LEVEL[578] = VGV->LEVEL[724]/VGV->LEVEL[702]-1.000000 ;
}
/* Nonfatal ODs Rx OUD no H */
 {
  VGV->lastpos = 585 ;
  VGV->LEVEL[585] = VGV->LEVEL[2196]*VGV->LEVEL[578] ;
}
/* Nonfatal OD ratio Rx misuse */
 {
  VGV->lastpos = 577 ;
  VGV->LEVEL[577] = VGV->LEVEL[718]/VGV->LEVEL[701]-1.000000 ;
}
/* Nonfatal ODs Rx misuse */
 {
  VGV->lastpos = 584 ;
  VGV->LEVEL[584] = VGV->LEVEL[707]*VGV->LEVEL[577] ;
}
/* Nonfatal OD ratio Rx OUD with H */
 {
  VGV->lastpos = 579 ;
  VGV->LEVEL[579] = VGV->LEVEL[719]/VGV->LEVEL[703]-1.000000 ;
}
/* Nonfatal ODs Rx OUD with H */
 {
  VGV->lastpos = 586 ;
  VGV->LEVEL[586] = VGV->LEVEL[2197]*VGV->LEVEL[579] ;
}
/* Total nonfatal overdoses Rx */
 {
  VGV->lastpos = 2184 ;
  VGV->LEVEL[2184] = VGV->LEVEL[585]+VGV->LEVEL[584]+VGV->LEVEL[586
] ;
}
/* Perceived risk Rx use indicated */
 {
  VGV->lastpos = 751 ;
  VGV->LEVEL[751] = VGV->LEVEL[2195]+VGV->LEVEL[762]*VGV->LEVEL[2184
] ;
}
/* Perceived risk Rx use reference */
 {
  VGV->lastpos = 752 ;
  VGV->LEVEL[752] = VGV->LEVEL[751] ;
}
/* #Perceived risk Rx use current>SMOOTHI# */
 {
  VGV->lastpos = 2 ;
  VGV->LEVEL[2] = VGV->LEVEL[752] ;
}
/* Tx exit in remission rate HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2286+sub9[forind0]*1 ;
  VGV->LEVEL[2286+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2283+sub9[forind0]*1 ;
  VGV->LEVEL[2283+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1
]*VGV->LEVEL[2286+sub9[forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2289+sub9[forind0]*1 ;
  VGV->LEVEL[2289+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2295+sub9[forind0]*1 ;
  VGV->LEVEL[2295+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1
]*VGV->LEVEL[2289+sub9[forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2292+sub9[forind0]*1 ;
  VGV->LEVEL[2292+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2298+sub9[forind0]*1 ;
  VGV->LEVEL[2298+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[2292+sub9[forind0]*1] ;
}
/* Tx exit in remission total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2301+sub9[forind0]*1 ;
  VGV->LEVEL[2301+sub9[forind0]*1] = VGV->LEVEL[2283+sub9[forind0]
*1]+VGV->LEVEL[2295+sub9[forind0]*1]+VGV->LEVEL[2298+sub9[forind0]
*1] ;
}
/* Tx exit with UD rate HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2310+sub9[forind0]*1 ;
  VGV->LEVEL[2310+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2307+sub9[forind0]*1 ;
  VGV->LEVEL[2307+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1
]*VGV->LEVEL[2310+sub9[forind0]*1] ;
}
/* Tx exit with UD rate Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2313+sub9[forind0]*1 ;
  VGV->LEVEL[2313+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2319+sub9[forind0]*1 ;
  VGV->LEVEL[2319+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1
]*VGV->LEVEL[2313+sub9[forind0]*1] ;
}
/* Tx exit with UD rate Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2316+sub9[forind0]*1 ;
  VGV->LEVEL[2316+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2322+sub9[forind0]*1 ;
  VGV->LEVEL[2322+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[2316+sub9[forind0]*1] ;
}
/* Tx exit with UD total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2325+sub9[forind0]*1 ;
  VGV->LEVEL[2325+sub9[forind0]*1] = VGV->LEVEL[2307+sub9[forind0]
*1]+VGV->LEVEL[2319+sub9[forind0]*1]+VGV->LEVEL[2322+sub9[forind0]
*1] ;
}
/* NonOD death rate HUD or OUD in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 599+sub9[forind0]*1 ;
  VGV->LEVEL[599+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[598]*VGV->LEVEL[334+sub9[forind0]*1]+VGV->LEVEL[956
+sub9[forind0]*1]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 588+sub9[forind0]*1 ;
  VGV->LEVEL[588+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 608+sub9[forind0]*1 ;
  VGV->LEVEL[608+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 614+sub9[forind0]*1 ;
  VGV->LEVEL[614+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death in Tx total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 593+sub9[forind0]*1 ;
  VGV->LEVEL[593+sub9[forind0]*1] = VGV->LEVEL[588+sub9[forind0]*1
]+VGV->LEVEL[608+sub9[forind0]*1]+VGV->LEVEL[614+sub9[forind0]*1] ;
}
/* Overdose death in Tx total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 688+sub9[forind0]*1 ;
  VGV->LEVEL[688+sub9[forind0]*1] = VGV->LEVEL[685+sub9[forind0]*1
]+VGV->LEVEL[709+sub9[forind0]*1]+VGV->LEVEL[713+sub9[forind0]*1] ;
}
/* Tx exit total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2304+sub9[forind0]*1 ;
  VGV->LEVEL[2304+sub9[forind0]*1] = VGV->LEVEL[2301+sub9[forind0]
*1]+VGV->LEVEL[2325+sub9[forind0]*1]+VGV->LEVEL[593+sub9[forind0]*1
]+VGV->LEVEL[688+sub9[forind0]*1] ;
}
/* Tx intake delay net */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2332+sub9[forind0]*1 ;
  VGV->LEVEL[2332+sub9[forind0]*1] = VGV->LEVEL[2331]*(1.000000+RAMP(
VGV->LEVEL[794+sub9[forind0]*1]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768
]+VGV->LEVEL[801])) ;
}
/* #Tx intake capacity>DELAY1>LV1# */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 3+sub9[forind0]*1 ;
  VGV->LEVEL[3+sub9[forind0]*1] = VGV->LEVEL[2304+sub9[forind0]*1]
*VGV->LEVEL[2332+sub9[forind0]*1] ;
}
/* Average days per prescription reference */
 {
  VGV->lastpos = 48 ;
  VGV->LEVEL[48] = VGV->LEVEL[46] ;
}
/* Average MME per day */
 {
  VGV->lastpos = 52 ;
  VGV->LEVEL[52] = VGV->LEVEL[922+9*1]*(1.000000+RAMP(VGV->LEVEL[770
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average MME per day reference */
 {
  VGV->lastpos = 54 ;
  VGV->LEVEL[54] = VGV->LEVEL[52] ;
}
/* Bup effective capacity rampup fraction */
 {
  VGV->lastpos = 6 ;
  VGV->LEVEL[6] = DELAY_N_i(135,6,0,0,VGV->LEVEL[204]) ;
}
}
void mdl_func6(void) ;
void mdl_func6(){
double temp[10];
/* Cumulative nonfatal overdoses */
 {
  VGV->lastpos = 7 ;
  VGV->LEVEL[7] = 0 ;
}
/* Cumulative Nx utilization deaths averted */
 {
  VGV->lastpos = 8 ;
  VGV->LEVEL[8] = 0 ;
}
/* Cumulative overdose deaths */
 {
  VGV->lastpos = 9 ;
  VGV->LEVEL[9] = 0 ;
}
/* Cumulative overdose deaths synth excess */
 {
  VGV->lastpos = 10 ;
  VGV->LEVEL[10] = 0 ;
}
/* Cumulative UD person years */
 {
  VGV->lastpos = 11 ;
  VGV->LEVEL[11] = 0 ;
}
/* Initial HUD in remission */
 {
  VGV->lastpos = 404 ;
  VGV->LEVEL[404] = VGV->LEVEL[429+18*1]*VGV->LEVEL[449+18*1] ;
}
/* HUD in remission */
 {
  VGV->lastpos = 15 ;
  VGV->LEVEL[15] = VGV->LEVEL[404] ;
}
/* Initial HUD in stable remission */
 {
  VGV->lastpos = 406 ;
  VGV->LEVEL[406] = VGV->LEVEL[429+19*1]*VGV->LEVEL[449+19*1] ;
}
/* HUD in stable remission */
 {
  VGV->lastpos = 16 ;
  VGV->LEVEL[16] = VGV->LEVEL[406] ;
}
/* Initial Rx OUD no H in remission */
 {
  VGV->lastpos = 416 ;
  VGV->LEVEL[416] = VGV->LEVEL[429+6*1]*VGV->LEVEL[449+6*1] ;
}
/* Initial Rx OUD no H in stable remission */
 {
  VGV->lastpos = 417 ;
  VGV->LEVEL[417] = VGV->LEVEL[429+7*1]*VGV->LEVEL[449+7*1] ;
}
/* Initial Rx OUD with H in remission */
 {
  VGV->lastpos = 423 ;
  VGV->LEVEL[423] = VGV->LEVEL[429+12*1]*VGV->LEVEL[449+12*1] ;
}
/* Initial Rx OUD with H in stable remission */
 {
  VGV->lastpos = 424 ;
  VGV->LEVEL[424] = VGV->LEVEL[429+13*1]*VGV->LEVEL[449+13*1] ;
}
/* Initial total in Tx by type */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 470+sub9[forind0]*1 ;
  VGV->LEVEL[470+sub9[forind0]*1] = VGV->LEVEL[401+sub9[forind0]*1
]+VGV->LEVEL[418+sub9[forind0]*1]+VGV->LEVEL[425+sub9[forind0]*1] ;
}
/* Initiation rate heroin with Rx OUD */
 {
  VGV->lastpos = 494 ;
  VGV->LEVEL[494] = VGV->LEVEL[491]*VGV->LEVEL[496] ;
}
/* Patients receiving opioid prescription annual reference */
 {
  VGV->lastpos = 731 ;
  VGV->LEVEL[731] = VGV->LEVEL[729] ;
}
/* Prescriptions per person reference */
 {
  VGV->lastpos = 805 ;
  VGV->LEVEL[805] = VGV->LEVEL[803] ;
}
/* Projected cumulative overdose deaths */
 {
  VGV->lastpos = 19 ;
  VGV->LEVEL[19] = 0 ;
}
/* Projected cumulative UD person years */
 {
  VGV->lastpos = 20 ;
  VGV->LEVEL[20] = 0 ;
}
/* Remission rate Rx OUD no H no MOUD Tx */
 {
  VGV->lastpos = 963 ;
  VGV->LEVEL[963] = VGV->LEVEL[962]*VGV->LEVEL[964] ;
}
/* Remission rate Rx OUD with H no MOUD Tx */
 {
  VGV->lastpos = 965 ;
  VGV->LEVEL[965] = VGV->LEVEL[962]*VGV->LEVEL[964] ;
}
/* Fraction of NDHU with Rx avg */
 {
  VGV->lastpos = 373 ;
  VGV->LEVEL[373] = GET_DATA_ATTRIBUTE(165,vecarg_assign(2,&VGV->LEVEL[372
]),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Fraction of HUD with Rx OUD or misuse avg */
 {
  VGV->lastpos = 371 ;
  VGV->LEVEL[371] = GET_DATA_ATTRIBUTE(165,vecarg_assign(3,&VGV->LEVEL[370
]),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Rx demand for misuse */
 {
  VGV->lastpos = 1951 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (VGV->LEVEL[22+sub9[sumind0]*1]*VGV->LEVEL[1957]*VGV->LEVEL[340
+sub9[sumind0]*1])+(VGV->LEVEL[28+sub9[sumind0]*1]*VGV->LEVEL[1958
]*VGV->LEVEL[340+sub9[sumind0]*1])+(VGV->LEVEL[12+sub9[sumind0]*1]
*VGV->LEVEL[371]*VGV->LEVEL[1954]*VGV->LEVEL[340+sub9[sumind0]*1])
 ;
  VGV->LEVEL[1951] = (VGV->LEVEL[21]*VGV->LEVEL[1956])+(VGV->LEVEL[18
]*VGV->LEVEL[373]*VGV->LEVEL[1955])+(VGV->LEVEL[27]*VGV->LEVEL[1957
])+(VGV->LEVEL[33]*VGV->LEVEL[1958])+(VGV->LEVEL[17]*VGV->LEVEL[371
]*VGV->LEVEL[1954])+temp0 ;
}
/* Rx demand for misuse reference */
 {
  VGV->lastpos = 1952 ;
  VGV->LEVEL[1952] = VGV->LEVEL[1951] ;
}
/* Rx OUD no heroin in remission */
 {
  VGV->lastpos = 25 ;
  VGV->LEVEL[25] = VGV->LEVEL[416] ;
}
/* Rx OUD no heroin in stable remission */
 {
  VGV->lastpos = 26 ;
  VGV->LEVEL[26] = VGV->LEVEL[417] ;
}
/* Rx OUD with heroin in remission */
 {
  VGV->lastpos = 31 ;
  VGV->LEVEL[31] = VGV->LEVEL[423] ;
}
/* Rx OUD with heroin in stable remission */
 {
  VGV->lastpos = 32 ;
  VGV->LEVEL[32] = VGV->LEVEL[424] ;
}
/* Rx street supply disruption */
 {
  VGV->lastpos = 34 ;
  VGV->LEVEL[34] = 0 ;
}
/* HUD total */
 {
  VGV->lastpos = 397 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[12
+sub9[sumind0]*1] ;
  VGV->LEVEL[397] = VGV->LEVEL[17]+temp0 ;
}
/* Effective SI users HUD development */
 {
  VGV->lastpos = 344 ;
  VGV->LEVEL[344] = VGV->LEVEL[397] ;
}
/* SI on developing HUD current */
 {
  VGV->lastpos = 2000 ;
  VGV->LEVEL[2000] = VGV->LEVEL[344]/VGV->LEVEL[802] ;
}
/* SI on developing HUD reference */
 {
  VGV->lastpos = 2001 ;
  VGV->LEVEL[2001] = VGV->LEVEL[2000] ;
}
/* Rx OUD no PY heroin total */
 {
  VGV->lastpos = 1976 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[22
+sub9[sumind0]*1] ;
  VGV->LEVEL[1976] = VGV->LEVEL[27]+temp0 ;
}
/* Rx OUD with PY heroin total */
 {
  VGV->lastpos = 1982 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[28
+sub9[sumind0]*1] ;
  VGV->LEVEL[1982] = VGV->LEVEL[33]+temp0 ;
}
/* Effective SI users Rx OUD development */
 {
  VGV->lastpos = 346 ;
  VGV->LEVEL[346] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* SI on developing Rx OUD current */
 {
  VGV->lastpos = 2003 ;
  VGV->LEVEL[2003] = VGV->LEVEL[346]/VGV->LEVEL[802] ;
}
/* SI on developing Rx OUD reference */
 {
  VGV->lastpos = 2004 ;
  VGV->LEVEL[2004] = VGV->LEVEL[2003] ;
}
/* Effective SI users heroin initiation */
 {
  VGV->lastpos = 343 ;
  VGV->LEVEL[343] = VGV->LEVEL[397]+VGV->LEVEL[18]+VGV->LEVEL[1982
] ;
}
/* SI on initiating heroin current */
 {
  VGV->lastpos = 2006 ;
  VGV->LEVEL[2006] = VGV->LEVEL[343]/VGV->LEVEL[802] ;
}
/* SI on initiating heroin reference */
 {
  VGV->lastpos = 2007 ;
  VGV->LEVEL[2007] = VGV->LEVEL[2006] ;
}
/* Effective SI users Rx misuse initiation */
 {
  VGV->lastpos = 345 ;
  VGV->LEVEL[345] = VGV->LEVEL[21]+VGV->LEVEL[1976]+VGV->LEVEL[1982
]+VGV->LEVEL[18]*VGV->LEVEL[373] ;
}
/* SI on initiating Rx misuse current */
 {
  VGV->lastpos = 2009 ;
  VGV->LEVEL[2009] = VGV->LEVEL[345]/VGV->LEVEL[802] ;
}
/* SI on initiating Rx misuse reference */
 {
  VGV->lastpos = 2010 ;
  VGV->LEVEL[2010] = VGV->LEVEL[2009] ;
}
/* Total HUD in remission not in Tx */
 {
  VGV->lastpos = 2173 ;
  VGV->LEVEL[2173] = VGV->LEVEL[15]+VGV->LEVEL[16] ;
}
/* HUD in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 388+sub9[forind0]*1 ;
  VGV->LEVEL[388+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[956+sub9[forind0]*1] ;
}
/* Total HUD in remission */
 {
  VGV->lastpos = 2172 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[388+sub9[sumind0]*1] ;
  VGV->LEVEL[2172] = VGV->LEVEL[2173]+temp0 ;
}
/* Rx OUD no PY heroin in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 1972+sub9[forind0]*1 ;
  VGV->LEVEL[1972+sub9[forind0]*1] = VGV->LEVEL[956+sub9[forind0]*1
]*VGV->LEVEL[22+sub9[forind0]*1] ;
}
/* Rx OUD with PY heroin in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 1978+sub9[forind0]*1 ;
  VGV->LEVEL[1978+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[956+sub9[forind0]*1] ;
}
/* Total Rx OUD in Remission not in Tx */
 {
  VGV->lastpos = 2214 ;
  VGV->LEVEL[2214] = VGV->LEVEL[25]+VGV->LEVEL[31]+VGV->LEVEL[26]+
VGV->LEVEL[32] ;
}
/* Total in Rx OUD Remission */
 {
  VGV->lastpos = 2179 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[1972+sub9[sumind0]*1] ;
    temp1 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp1 += VGV->LEVEL[1978+sub9[sumind0]*1] ;
  VGV->LEVEL[2179] = temp0+temp1+VGV->LEVEL[2214] ;
}
/* Total in Remission */
 {
  VGV->lastpos = 2174 ;
  VGV->LEVEL[2174] = VGV->LEVEL[2172]+VGV->LEVEL[2179] ;
}
/* SI on remission current */
 {
  VGV->lastpos = 2012 ;
  VGV->LEVEL[2012] = VGV->LEVEL[2174]/VGV->LEVEL[802] ;
}
/* SI on remission reference */
 {
  VGV->lastpos = 2013 ;
  VGV->LEVEL[2013] = VGV->LEVEL[2012] ;
}
/* Total overdose data last time */
 {
  VGV->lastpos = 2185 ;
  VGV->LEVEL[2185] = GET_DATA_LAST_TIME(vecarg_assign(4,&VGV->LEVEL[2202
])) ;
}
/* Tx seeking fraction MMT HUD */
 {
  VGV->lastpos = 2350 ;
  VGV->LEVEL[2350] = (1.000000-VGV->LEVEL[2342])*VGV->LEVEL[2351] ;
}
/* Tx seeking fraction by med HUD */
 {
  VGV->lastpos = 2344+0*1 ;
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
 {
  VGV->lastpos = 2344+1*1 ;
  VGV->LEVEL[2344+1*1] = VGV->LEVEL[2350] ;
}
 {
  VGV->lastpos = 2344+2*1 ;
  VGV->LEVEL[2344+2*1] = 1.000000-VGV->LEVEL[2342]-VGV->LEVEL[2350
] ;
}
/* Tx seeking fraction MMT Rx OUD */
 {
  VGV->lastpos = 2352 ;
  VGV->LEVEL[2352] = (1.000000-VGV->LEVEL[2343])*VGV->LEVEL[2353] ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  VGV->lastpos = 2347+0*1 ;
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
 {
  VGV->lastpos = 2347+1*1 ;
  VGV->LEVEL[2347+1*1] = VGV->LEVEL[2352] ;
}
 {
  VGV->lastpos = 2347+2*1 ;
  VGV->LEVEL[2347+2*1] = (1.000000-VGV->LEVEL[2343]-VGV->LEVEL[2352
]) ;
}
/* Weights */
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 2432+0*27+sub0[forind1]*1 ;
  VGV->LEVEL[2432+0*27+sub0[forind1]*1] = 1.000000/VGV->LEVEL[2089
+sub0[forind1]*1]*VGV->LEVEL[2405+sub0[forind1]*1] ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 2432+2*27+sub0[forind1]*1 ;
  VGV->LEVEL[2432+2*27+sub0[forind1]*1] = VGV->LEVEL[2089+sub0[forind1]
*1]*VGV->LEVEL[2378+sub0[forind1]*1]/VGV->LEVEL[2405+sub0[forind1]
*1] ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 2432+1*27+sub0[forind1]*1 ;
  VGV->LEVEL[2432+1*27+sub0[forind1]*1] = 1.000000*VGV->LEVEL[2405
+sub0[forind1]*1] ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 2432+3*27+sub0[forind1]*1 ;
  VGV->LEVEL[2432+3*27+sub0[forind1]*1] = VGV->LEVEL[2405+sub0[forind1]
*1]*VGV->LEVEL[2378+sub0[forind1]*1] ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 2432+4*27+sub0[forind1]*1 ;
  VGV->LEVEL[2432+4*27+sub0[forind1]*1] = VGV->LEVEL[2089+sub0[forind1]
*1]*VGV->LEVEL[2378+sub0[forind1]*1]/VGV->LEVEL[2405+sub0[forind1]
*1] ;
}
} /* comp_init */

/* State variable re-initial value computation*/
void mdl_func7()
{
double temp[10];
/* Initial Rx OUD no H in Tx */
 {
  VGV->lastpos = 418+1*1 ;
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  VGV->lastpos = 418+2*1 ;
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* Tx seeking fraction by med HUD */
 {
  VGV->lastpos = 2344+0*1 ;
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  VGV->lastpos = 2347+0*1 ;
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
} /* comp_reinit */

/*  Active Time Step Equation */
void mdl_func8()
{
double temp[10];
} /* comp_tstep */
/*  Auxiliary variable equations*/
void mdl_func9()
{
double temp[10];
/* Tx intake delay net */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2332+sub9[forind0]*1 ;
  VGV->LEVEL[2332+sub9[forind0]*1] = VGV->LEVEL[2331]*(1.000000+RAMP(
VGV->LEVEL[794+sub9[forind0]*1]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768
]+VGV->LEVEL[801])) ;
}
/* #Tx intake capacity>DELAY1# */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 35+sub9[forind0]*1 ;
  VGV->LEVEL[35+sub9[forind0]*1] = VGV->LEVEL[3+sub9[forind0]*1]/VGV->LEVEL[2332
+sub9[forind0]*1] ;
}
/* Logistic growth curve */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 534+sub6[forind0]*1 ;
  VGV->LEVEL[534+sub6[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[867+sub6[forind0]
*1]>VGV->LEVEL[911+sub6[forind0]*1],MIN(VGV->LEVEL[867+sub6[forind0]
*1],((VGV->LEVEL[867+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]
*1])/0.500000)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845+sub6[forind0]
*1]-VGV->LEVEL[933+sub6[forind0]*1]))*(VGV->LEVEL[0]-VGV->LEVEL[933
+sub6[forind0]*1])))+(VGV->LEVEL[867+sub6[forind0]*1]-(VGV->LEVEL[867
+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]*1])/0.500000)),MAX(
VGV->LEVEL[867+sub6[forind0]*1],((VGV->LEVEL[867+sub6[forind0]*1]-
VGV->LEVEL[911+sub6[forind0]*1])/0.500000)/(1.000000+EXP(((-5.000000)
/(VGV->LEVEL[845+sub6[forind0]*1]-VGV->LEVEL[933+sub6[forind0]*1])
)*(VGV->LEVEL[0]-VGV->LEVEL[933+sub6[forind0]*1])))+(VGV->LEVEL[867
+sub6[forind0]*1]-(VGV->LEVEL[867+sub6[forind0]*1]-VGV->LEVEL[911+sub6[forind0]
*1])/0.500000))) ;
}
/* Projection output data */
for(forind0=0;forind0<11;forind0++)
 {
  VGV->lastpos = 922+sub6[forind0]*1 ;
  VGV->LEVEL[922+sub6[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[933
+sub6[forind0]*1],VGV->LEVEL[889+sub6[forind0]*1],VGV->LEVEL[2117+sub6[forind0]
*1]*VGV->LEVEL[911+sub6[forind0]*1]+(1.000000-VGV->LEVEL[2117+sub6[forind0]
*1])*VGV->LEVEL[534+sub6[forind0]*1]) ;
}
/* ADF fraction of prescribed Rx opioids */
 {
  VGV->lastpos = 40 ;
  VGV->LEVEL[40] = VGV->LEVEL[922+10*1]+RAMP(IF_THEN_ELSE(VGV->LEVEL[769
]>=0,VGV->LEVEL[769]*(1.000000-VGV->LEVEL[922+10*1]),VGV->LEVEL[769
]*VGV->LEVEL[922+10*1])/(VGV->LEVEL[801]),VGV->LEVEL[768],VGV->LEVEL[768
]+(VGV->LEVEL[801])) ;
}
/* ADF fraction of Rx street supply base */
 {
  VGV->lastpos = 42 ;
  VGV->LEVEL[42] = POWER(VGV->LEVEL[40],VGV->LEVEL[45]) ;
}
/* ADF fraction of Rx street supply net */
 {
  VGV->lastpos = 43 ;
  VGV->LEVEL[43] = (1.000000-VGV->LEVEL[211])*VGV->LEVEL[42] ;
}
/* ADF effect coeff initiating heroin with Rx OUD */
 {
  VGV->lastpos = 38 ;
  VGV->LEVEL[38] = EXP(VGV->LEVEL[43]*((-VGV->LEVEL[39]))) ;
}
/* Average days per prescription */
 {
  VGV->lastpos = 46 ;
  VGV->LEVEL[46] = VGV->LEVEL[922+8*1]*(1.000000+RAMP(VGV->LEVEL[773
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average days per prescription relative */
 {
  VGV->lastpos = 49 ;
  VGV->LEVEL[49] = ZIDZ(0,VGV->LEVEL[46],VGV->LEVEL[48]) ;
}
/* Prescriptions per person */
 {
  VGV->lastpos = 803 ;
  VGV->LEVEL[803] = VGV->LEVEL[922+7*1]*(1.000000+RAMP(VGV->LEVEL[785
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average duration of medical opioid use */
 {
  VGV->lastpos = 50 ;
  VGV->LEVEL[50] = VGV->LEVEL[46]*VGV->LEVEL[803]*VGV->LEVEL[682] ;
}
/* Average MME per day */
 {
  VGV->lastpos = 52 ;
  VGV->LEVEL[52] = VGV->LEVEL[922+9*1]*(1.000000+RAMP(VGV->LEVEL[770
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average MME per day relative */
 {
  VGV->lastpos = 55 ;
  VGV->LEVEL[55] = VGV->LEVEL[52]/VGV->LEVEL[54] ;
}
/* Fentanyl penetration curve */
 {
  VGV->lastpos = 353 ;
  VGV->LEVEL[353] = VGV->LEVEL[922+0*1]*(1.000000-VGV->LEVEL[2130]
) ;
}
/* Base survival probability net H OD */
 {
  VGV->lastpos = 60 ;
  VGV->LEVEL[60] = MAX(0,VGV->LEVEL[58]+(VGV->LEVEL[57]-VGV->LEVEL[58
])*VGV->LEVEL[353]) ;
}
/* NSDUH misuse redefinition effect */
 {
  VGV->lastpos = 644 ;
  VGV->LEVEL[644] = 1.000000-RAMP(VGV->LEVEL[645]/(1.000000+VGV->LEVEL[645
])/VGV->LEVEL[683],VGV->LEVEL[646],(VGV->LEVEL[646]+VGV->LEVEL[683
])) ;
}
/* Rx misuse no PY heroin NSDUH redef corrected */
 {
  VGV->lastpos = 1960 ;
  VGV->LEVEL[1960] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[644
]*VGV->LEVEL[1959],NA) ;
}
/* Probability OD witnessed net */
 {
  VGV->lastpos = 840 ;
  VGV->LEVEL[840] = VGV->LEVEL[839]+RAMP(IF_THEN_ELSE(VGV->LEVEL[786
]>=0,VGV->LEVEL[786]*(1.000000-VGV->LEVEL[839]),VGV->LEVEL[786]*VGV->LEVEL[839
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Nx kit distribution efficiency net */
 {
  VGV->lastpos = 648 ;
  VGV->LEVEL[648] = VGV->LEVEL[647]*(1.000000+RAMP(VGV->LEVEL[782]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Nx kits distributed net */
 {
  VGV->lastpos = 653 ;
  VGV->LEVEL[653] = VGV->LEVEL[922+1*1]*(1.000000+RAMP(VGV->LEVEL[783
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Nx kits distributed Rx user */
 {
  VGV->lastpos = 654 ;
  VGV->LEVEL[654] = VGV->LEVEL[653]*(1.000000-VGV->LEVEL[359]) ;
}
/* Nx kits per 100k population Rx user */
 {
  VGV->lastpos = 656 ;
  VGV->LEVEL[656] = VGV->LEVEL[654]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander Rx */
 {
  VGV->lastpos = 836 ;
  VGV->LEVEL[836] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[656
]) ;
}
/* Probability of calling emergency services net */
 {
  VGV->lastpos = 842 ;
  VGV->LEVEL[842] = VGV->LEVEL[841]+RAMP(IF_THEN_ELSE(VGV->LEVEL[787
]>=0,VGV->LEVEL[787]*(1.000000-VGV->LEVEL[841]),VGV->LEVEL[787]*VGV->LEVEL[841
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Probability OD death not averted Rx user */
 {
  VGV->lastpos = 838 ;
  VGV->LEVEL[838] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[836
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate base Rx OUD */
 {
  VGV->lastpos = 697 ;
  VGV->LEVEL[697] = VGV->LEVEL[719]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death rate synth baseline */
 {
  VGV->lastpos = 704 ;
  VGV->LEVEL[704] = VGV->LEVEL[723]*(1.000000-VGV->LEVEL[57])*VGV->LEVEL[838
] ;
}
}
void mdl_func10(void) ;
void mdl_func10(){
double temp[10];
/* Overdose death rate Rx OUD no H */
 {
  VGV->lastpos = 702 ;
  VGV->LEVEL[702] = VGV->LEVEL[697]+VGV->LEVEL[704] ;
}
/* Overdose death Rx OUD no H */
 {
  VGV->lastpos = 708 ;
  VGV->LEVEL[708] = VGV->LEVEL[27]*VGV->LEVEL[702] ;
}
/* Tx average duration net */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2231+sub9[forind0]*1 ;
  VGV->LEVEL[2231+sub9[forind0]*1] = VGV->LEVEL[2226+sub9[forind0]
*1]*(1.000000+RAMP(VGV->LEVEL[793]/VGV->LEVEL[801],VGV->LEVEL[768]
,VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Tx success fraction */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2368+sub9[forind0]*1 ;
  VGV->LEVEL[2368+sub9[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[2231+sub9[forind0]
*1]<=VGV->LEVEL[2371],ZIDZ(0,POWER(VGV->LEVEL[2372],2.000000),1.000000
+POWER(VGV->LEVEL[2372],2.000000))*EXP((VGV->LEVEL[2373]/VGV->LEVEL[2372
])*(VGV->LEVEL[2231+sub9[forind0]*1]-VGV->LEVEL[2371])),1.000000-ZIDZ(
0,1.000000,1.000000+POWER(VGV->LEVEL[2372],2.000000))*EXP((-VGV->LEVEL[2373
])*VGV->LEVEL[2372]*(VGV->LEVEL[2231+sub9[forind0]*1]-VGV->LEVEL[2371
])))*VGV->LEVEL[2374] ;
}
/* Remission fraction in Tx Bup */
 {
  VGV->lastpos = 959 ;
  VGV->LEVEL[959] = VGV->LEVEL[2368+0*1] ;
}
/* Remission fraction in Tx MMT */
 {
  VGV->lastpos = 960 ;
  VGV->LEVEL[960] = VGV->LEVEL[2368+1*1] ;
}
/* Remission fraction in Tx Viv */
 {
  VGV->lastpos = 961 ;
  VGV->LEVEL[961] = VGV->LEVEL[2368+2*1] ;
}
/* Remission fraction in Tx */
 {
  VGV->lastpos = 956+0*1 ;
  VGV->LEVEL[956+0*1] = VGV->LEVEL[959] ;
}
 {
  VGV->lastpos = 956+1*1 ;
  VGV->LEVEL[956+1*1] = VGV->LEVEL[960] ;
}
 {
  VGV->lastpos = 956+2*1 ;
  VGV->LEVEL[956+2*1] = VGV->LEVEL[961] ;
}
/* OD death rate Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 674+sub9[forind0]*1 ;
  VGV->LEVEL[674+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[702]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 709+sub9[forind0]*1 ;
  VGV->LEVEL[709+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1]
*VGV->LEVEL[674+sub9[forind0]*1] ;
}
/* Total overdose deaths Rx OUD no H */
 {
  VGV->lastpos = 2196 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[709+sub9[sumind0]*1] ;
  VGV->LEVEL[2196] = VGV->LEVEL[708]+temp0 ;
}
/* OD death fraction synth baseline Rx OUD no H */
 {
  VGV->lastpos = 668 ;
  VGV->LEVEL[668] = VGV->LEVEL[704]/VGV->LEVEL[702] ;
}
/* Total overdose deaths synth base */
 {
  VGV->lastpos = 2199 ;
  VGV->LEVEL[2199] = VGV->LEVEL[2196]*VGV->LEVEL[668] ;
}
/* OD deaths synth excess estimated */
 {
  VGV->lastpos = 681 ;
  VGV->LEVEL[681] = MAX(0,VGV->LEVEL[2201]+IF_THEN_ELSE(VGV->LEVEL[0
]<VGV->LEVEL[352],NA,IF_THEN_ELSE(VGV->LEVEL[0]>VGV->LEVEL[2185],NA
,VGV->LEVEL[2202]-VGV->LEVEL[2199]))) ;
}
/* Total overdose deaths heroin and excess estimated */
 {
  VGV->lastpos = 2192 ;
  VGV->LEVEL[2192] = IF_THEN_ELSE(VGV->LEVEL[0]>VGV->LEVEL[2185],NA
,VGV->LEVEL[2188]+VGV->LEVEL[681]) ;
}
/* OD deaths synth baseline estimated */
 {
  VGV->lastpos = 680 ;
  VGV->LEVEL[680] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[352],VGV->LEVEL[2202
],NA) ;
}
/* Total Rx misuse initiation SAMHSA redef corrected */
 {
  VGV->lastpos = 2211 ;
  VGV->LEVEL[2211] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[2210
]*VGV->LEVEL[644],NA) ;
}
/* Initiating Rx misuse own Rx RDAS SAMHSA redef correction */
 {
  VGV->lastpos = 490 ;
  VGV->LEVEL[490] = IF_THEN_ELSE(VGV->LEVEL[487]==NA,NA,VGV->LEVEL[2211
]-VGV->LEVEL[487]) ;
}
/* DataVarBase */
 {
  VGV->lastpos = 295+0*1 ;
  VGV->LEVEL[295+0*1] = VGV->LEVEL[1960] ;
}
 {
  VGV->lastpos = 295+15*1 ;
  VGV->LEVEL[295+15*1] = VGV->LEVEL[2192] ;
}
 {
  VGV->lastpos = 295+16*1 ;
  VGV->LEVEL[295+16*1] = VGV->LEVEL[680] ;
}
 {
  VGV->lastpos = 295+8*1 ;
  VGV->LEVEL[295+8*1] = VGV->LEVEL[490] ;
}
/* DataVar */
for(forind0=0;forind0<27;forind0++)
 {
  VGV->lastpos = 268+sub0[forind0]*1 ;
  VGV->LEVEL[268+sub0[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546
],VGV->LEVEL[295+sub0[forind0]*1],NA) ;
}
/* Rx OUD no PY heroin total */
 {
  VGV->lastpos = 1976 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[22
+sub9[sumind0]*1] ;
  VGV->LEVEL[1976] = VGV->LEVEL[27]+temp0 ;
}
/* Rx OUD with PY heroin total */
 {
  VGV->lastpos = 1982 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[28
+sub9[sumind0]*1] ;
  VGV->LEVEL[1982] = VGV->LEVEL[33]+temp0 ;
}
/* HUD total */
 {
  VGV->lastpos = 397 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (1.000000-VGV->LEVEL[956+sub9[sumind0]*1])*VGV->LEVEL[12
+sub9[sumind0]*1] ;
  VGV->LEVEL[397] = VGV->LEVEL[17]+temp0 ;
}
/* HUD in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 388+sub9[forind0]*1 ;
  VGV->LEVEL[388+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[956+sub9[forind0]*1] ;
}
/* Rx OUD no PY heroin in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 1972+sub9[forind0]*1 ;
  VGV->LEVEL[1972+sub9[forind0]*1] = VGV->LEVEL[956+sub9[forind0]*1
]*VGV->LEVEL[22+sub9[forind0]*1] ;
}
/* Rx OUD with PY heroin in remission in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 1978+sub9[forind0]*1 ;
  VGV->LEVEL[1978+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[956+sub9[forind0]*1] ;
}
/* Total by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2164+sub9[forind0]*1 ;
  VGV->LEVEL[2164+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1
]+VGV->LEVEL[22+sub9[forind0]*1]+VGV->LEVEL[28+sub9[forind0]*1]+VGV->LEVEL[388
+sub9[forind0]*1]+VGV->LEVEL[1972+sub9[forind0]*1]+VGV->LEVEL[1978
+sub9[forind0]*1] ;
}
/* Patients receiving opioid prescription annual */
 {
  VGV->lastpos = 729 ;
  VGV->LEVEL[729] = VGV->LEVEL[922+6*1]*(1.000000+RAMP(VGV->LEVEL[784
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Patients with current month opioid Rx */
 {
  VGV->lastpos = 733 ;
  VGV->LEVEL[733] = VGV->LEVEL[729]*VGV->LEVEL[50] ;
}
/* Overdose death MU */
 {
  VGV->lastpos = 691 ;
  VGV->LEVEL[691] = VGV->LEVEL[733]*VGV->LEVEL[695] ;
}
/* Overdose death rate Rx misuse */
 {
  VGV->lastpos = 701 ;
  VGV->LEVEL[701] = VGV->LEVEL[718]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death Rx misuse */
 {
  VGV->lastpos = 707 ;
  VGV->LEVEL[707] = VGV->LEVEL[21]*VGV->LEVEL[701] ;
}
/* OD death fraction base Rx OUD no H */
 {
  VGV->lastpos = 667 ;
  VGV->LEVEL[667] = VGV->LEVEL[697]/VGV->LEVEL[702] ;
}
/* Overdose death rate Rx OUD with H */
 {
  VGV->lastpos = 703 ;
  VGV->LEVEL[703] = VGV->LEVEL[697] ;
}
/* Overdose death Rx OUD with H */
 {
  VGV->lastpos = 712 ;
  VGV->LEVEL[712] = VGV->LEVEL[33]*VGV->LEVEL[703] ;
}
/* OD death rate Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 677+sub9[forind0]*1 ;
  VGV->LEVEL[677+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[703]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 713+sub9[forind0]*1 ;
  VGV->LEVEL[713+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1]
*VGV->LEVEL[677+sub9[forind0]*1] ;
}
/* Total overdose deaths Rx OUD with H */
 {
  VGV->lastpos = 2197 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[713+sub9[sumind0]*1] ;
  VGV->LEVEL[2197] = VGV->LEVEL[712]+temp0 ;
}
/* Total overdose deaths base Rx */
 {
  VGV->lastpos = 2189 ;
  VGV->LEVEL[2189] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]*VGV->LEVEL[667]+VGV->LEVEL[2197] ;
}
/* Fentanyl effect on OD rate H max net */
 {
  VGV->lastpos = 350 ;
  VGV->LEVEL[350] = ((1.000000-VGV->LEVEL[2128])*VGV->LEVEL[349]+VGV->LEVEL[2128
]*VGV->LEVEL[351])*(1.000000+RAMP(VGV->LEVEL[774]/VGV->LEVEL[801],
VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Overdose rate net NDHU */
 {
  VGV->lastpos = 722 ;
  VGV->LEVEL[722] = VGV->LEVEL[717]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Nx kits distributed H user */
 {
  VGV->lastpos = 651 ;
  VGV->LEVEL[651] = VGV->LEVEL[653]*VGV->LEVEL[359] ;
}
/* Nx kits per 100k population H user */
 {
  VGV->lastpos = 655 ;
  VGV->LEVEL[655] = VGV->LEVEL[651]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander heroin */
 {
  VGV->lastpos = 834 ;
  VGV->LEVEL[834] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[655
]) ;
}
/* Probability OD death not averted heroin user */
 {
  VGV->lastpos = 837 ;
  VGV->LEVEL[837] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[834
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate NDHU */
 {
  VGV->lastpos = 700 ;
  VGV->LEVEL[700] = VGV->LEVEL[722]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death NDHU */
 {
  VGV->lastpos = 692 ;
  VGV->LEVEL[692] = VGV->LEVEL[18]*VGV->LEVEL[700] ;
}
/* Overdose rate net HUD */
 {
  VGV->lastpos = 721 ;
  VGV->LEVEL[721] = VGV->LEVEL[716]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Overdose death rate HUD */
 {
  VGV->lastpos = 698 ;
  VGV->LEVEL[698] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death HUD */
 {
  VGV->lastpos = 684 ;
  VGV->LEVEL[684] = VGV->LEVEL[17]*VGV->LEVEL[698] ;
}
/* OD death rate HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 671+sub9[forind0]*1 ;
  VGV->LEVEL[671+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[698]*VGV->LEVEL[337+sub9[forind0]*1] ;
}
/* Overdose death HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 685+sub9[forind0]*1 ;
  VGV->LEVEL[685+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[671+sub9[forind0]*1] ;
}
/* Total overdose deaths HUD */
 {
  VGV->lastpos = 2193 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[685+sub9[sumind0]*1] ;
  VGV->LEVEL[2193] = VGV->LEVEL[684]+temp0 ;
}
/* Total overdose deaths heroin */
 {
  VGV->lastpos = 2191 ;
  VGV->LEVEL[2191] = VGV->LEVEL[692]+VGV->LEVEL[2193] ;
}
/* Initiation rate Rx misuse own Rx net */
 {
  VGV->lastpos = 499 ;
  VGV->LEVEL[499] = VGV->LEVEL[497]*(1.000000+RAMP(VGV->LEVEL[780]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Perceived risk Rx use current */
 {
  VGV->lastpos = 750 ;
  VGV->LEVEL[750] = VGV->LEVEL[2] ;
}
/* Perceived risk Rx use relative */
 {
  VGV->lastpos = 753 ;
  VGV->LEVEL[753] = XIDZ(0,VGV->LEVEL[750],VGV->LEVEL[752],1.000000
) ;
}
/* Perceived risk coeff initiating Rx misuse own Rx */
 {
  VGV->lastpos = 739 ;
  VGV->LEVEL[739] = POWER(VGV->LEVEL[753],(-VGV->LEVEL[757])) ;
}
/* Initiation rate Rx misuse own Rx effective */
 {
  VGV->lastpos = 498 ;
  VGV->LEVEL[498] = VGV->LEVEL[499]*VGV->LEVEL[739] ;
}
/* Initiating Rx misuse own Rx */
 {
  VGV->lastpos = 488 ;
  VGV->LEVEL[488] = VGV->LEVEL[733]*VGV->LEVEL[498] ;
}
/* Initiating Rx misuse diverted net */
 {
  VGV->lastpos = 486 ;
  VGV->LEVEL[486] = VGV->LEVEL[485]*(1.000000+RAMP(VGV->LEVEL[778]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Perceived risk coeff initiating Rx misuse diverted */
 {
  VGV->lastpos = 738 ;
  VGV->LEVEL[738] = POWER(VGV->LEVEL[753],(-VGV->LEVEL[756])) ;
}
/* Patients receiving opioid prescription annual relative */
 {
  VGV->lastpos = 732 ;
  VGV->LEVEL[732] = VGV->LEVEL[729]/VGV->LEVEL[731] ;
}
/* Prescriptions per person relative */
 {
  VGV->lastpos = 806 ;
  VGV->LEVEL[806] = VGV->LEVEL[803]/VGV->LEVEL[805] ;
}
/* Rx supply relative */
 {
  VGV->lastpos = 1986 ;
  VGV->LEVEL[1986] = POWER(VGV->LEVEL[55],(4.000000*VGV->LEVEL[1997
]/(VGV->LEVEL[1997]+VGV->LEVEL[1998]+VGV->LEVEL[1999]+VGV->LEVEL[1996
])))*POWER(VGV->LEVEL[732],(4.000000*VGV->LEVEL[1998]/(VGV->LEVEL[1997
]+VGV->LEVEL[1998]+VGV->LEVEL[1999]+VGV->LEVEL[1997])))*POWER(VGV->LEVEL[806
],(4.000000*VGV->LEVEL[1999]/(VGV->LEVEL[1997]+VGV->LEVEL[1998]+VGV->LEVEL[1999
]+VGV->LEVEL[1996])))*POWER(VGV->LEVEL[49],(4.000000*VGV->LEVEL[1997
]/(VGV->LEVEL[1997]+VGV->LEVEL[1998]+VGV->LEVEL[1999]+VGV->LEVEL[1996
]))) ;
}
/* Rx supply relative net */
 {
  VGV->lastpos = 1987 ;
  VGV->LEVEL[1987] = VGV->LEVEL[1986]*(1.000000+RAMP(VGV->LEVEL[791
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Counterfeit supply relative */
 {
  VGV->lastpos = 212 ;
  VGV->LEVEL[212] = VGV->LEVEL[211]/(1.000000-VGV->LEVEL[211])*VGV->LEVEL[1987
] ;
}
/* Fraction of NDHU with Rx avg */
 {
  VGV->lastpos = 373 ;
  VGV->LEVEL[373] = GET_DATA_ATTRIBUTE(165,vecarg_assign(5,&VGV->LEVEL[372
]),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Fraction of HUD with Rx OUD or misuse avg */
 {
  VGV->lastpos = 371 ;
  VGV->LEVEL[371] = GET_DATA_ATTRIBUTE(165,vecarg_assign(6,&VGV->LEVEL[370
]),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Rx demand for misuse */
 {
  VGV->lastpos = 1951 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += (VGV->LEVEL[22+sub9[sumind0]*1]*VGV->LEVEL[1957]*VGV->LEVEL[340
+sub9[sumind0]*1])+(VGV->LEVEL[28+sub9[sumind0]*1]*VGV->LEVEL[1958
]*VGV->LEVEL[340+sub9[sumind0]*1])+(VGV->LEVEL[12+sub9[sumind0]*1]
*VGV->LEVEL[371]*VGV->LEVEL[1954]*VGV->LEVEL[340+sub9[sumind0]*1])
 ;
  VGV->LEVEL[1951] = (VGV->LEVEL[21]*VGV->LEVEL[1956])+(VGV->LEVEL[18
]*VGV->LEVEL[373]*VGV->LEVEL[1955])+(VGV->LEVEL[27]*VGV->LEVEL[1957
])+(VGV->LEVEL[33]*VGV->LEVEL[1958])+(VGV->LEVEL[17]*VGV->LEVEL[371
]*VGV->LEVEL[1954])+temp0 ;
}
/* Rx demand for misuse relative */
 {
  VGV->lastpos = 1953 ;
  VGV->LEVEL[1953] = VGV->LEVEL[1951]/VGV->LEVEL[1952] ;
}
/* Rx availability for misuse relative */
 {
  VGV->lastpos = 1945 ;
  VGV->LEVEL[1945] = (VGV->LEVEL[1987]+VGV->LEVEL[212]*VGV->LEVEL[213
])/VGV->LEVEL[1953] ;
}
/* Rx availability coeff initiating Rx misuse */
 {
  VGV->lastpos = 1943 ;
  VGV->LEVEL[1943] = POWER(VGV->LEVEL[1945],VGV->LEVEL[1949]) ;
}
/* Effective SI users Rx misuse initiation */
 {
  VGV->lastpos = 345 ;
  VGV->LEVEL[345] = VGV->LEVEL[21]+VGV->LEVEL[1976]+VGV->LEVEL[1982
]+VGV->LEVEL[18]*VGV->LEVEL[373] ;
}
/* SI on initiating Rx misuse current */
 {
  VGV->lastpos = 2009 ;
  VGV->LEVEL[2009] = VGV->LEVEL[345]/VGV->LEVEL[802] ;
}
/* SI on initiating Rx misuse relative */
 {
  VGV->lastpos = 2011 ;
  VGV->LEVEL[2011] = VGV->LEVEL[2009]/VGV->LEVEL[2010] ;
}
/* Social influence coeff initiating Rx misuse */
 {
  VGV->lastpos = 2074 ;
  VGV->LEVEL[2074] = POWER(VGV->LEVEL[2011],VGV->LEVEL[2082]) ;
}
/* Initiating Rx misuse diverted */
 {
  VGV->lastpos = 484 ;
  VGV->LEVEL[484] = VGV->LEVEL[486]*VGV->LEVEL[738]*VGV->LEVEL[1943
]*VGV->LEVEL[2074] ;
}
/* Initiating heroin no Rx net */
 {
  VGV->lastpos = 476 ;
  VGV->LEVEL[476] = VGV->LEVEL[474]*(1.000000+RAMP(VGV->LEVEL[777]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Heroin price index */
 {
  VGV->lastpos = 384 ;
  VGV->LEVEL[384] = VGV->LEVEL[922+2*1] ;
}
/* Heroin availability index */
 {
  VGV->lastpos = 380 ;
  VGV->LEVEL[380] = 1.000000/VGV->LEVEL[384] ;
}
/* Heroin availability coeff initiating NDHU no Rx */
 {
  VGV->lastpos = 378 ;
  VGV->LEVEL[378] = POWER(VGV->LEVEL[380],VGV->LEVEL[382]) ;
}
/* Perceived risk heroin use current */
 {
  VGV->lastpos = 745 ;
  VGV->LEVEL[745] = VGV->LEVEL[1] ;
}
/* Perceived risk heroin use relative */
 {
  VGV->lastpos = 748 ;
  VGV->LEVEL[748] = VGV->LEVEL[745]/VGV->LEVEL[747] ;
}
/* Perceived risk coeff initiating NDHU no Rx */
 {
  VGV->lastpos = 736 ;
  VGV->LEVEL[736] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[755])) ;
}
/* Effective SI users heroin initiation */
 {
  VGV->lastpos = 343 ;
  VGV->LEVEL[343] = VGV->LEVEL[397]+VGV->LEVEL[18]+VGV->LEVEL[1982
] ;
}
/* SI on initiating heroin current */
 {
  VGV->lastpos = 2006 ;
  VGV->LEVEL[2006] = VGV->LEVEL[343]/VGV->LEVEL[802] ;
}
/* SI on initiating heroin relative */
 {
  VGV->lastpos = 2008 ;
  VGV->LEVEL[2008] = VGV->LEVEL[2006]/VGV->LEVEL[2007] ;
}
/* Social influence coeff initiating NDHU no Rx */
 {
  VGV->lastpos = 2072 ;
  VGV->LEVEL[2072] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2080]) ;
}
/* Initiating heroin no Rx */
 {
  VGV->lastpos = 473 ;
  VGV->LEVEL[473] = VGV->LEVEL[476]*VGV->LEVEL[378]*VGV->LEVEL[736
]*VGV->LEVEL[2072] ;
}
/* Initiation rate heroin with Rx misuse net */
 {
  VGV->lastpos = 493 ;
  VGV->LEVEL[493] = VGV->LEVEL[491]*(1.000000+RAMP(VGV->LEVEL[779]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx availability for UD relative */
 {
  VGV->lastpos = 1947 ;
  VGV->LEVEL[1947] = VGV->LEVEL[1945]*MAX((1.000000-VGV->LEVEL[34]
),0.010000) ;
}
/* Rx availability for UD endogenous */
 {
  VGV->lastpos = 1946 ;
  VGV->LEVEL[1946] = VGV->LEVEL[1947]*((1.000000-VGV->LEVEL[43])+VGV->LEVEL[43
]*VGV->LEVEL[44]) ;
}
/* Rx vs heroin availability index */
 {
  VGV->lastpos = 1994 ;
  VGV->LEVEL[1994] = XIDZ(0,VGV->LEVEL[1946],VGV->LEVEL[380],1.000000
) ;
}
/* Rx vs H availability coeff initiating NDHU with Rx */
 {
  VGV->lastpos = 1990 ;
  VGV->LEVEL[1990] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1993])))
 ;
}
/* Perceived risk coeff initiating NDHU with Rx */
 {
  VGV->lastpos = 737 ;
  VGV->LEVEL[737] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[754])) ;
}
}
void mdl_func11(void) ;
void mdl_func11(){
double temp[10];
/* Social influence coeff initiating NDHU with Rx */
 {
  VGV->lastpos = 2073 ;
  VGV->LEVEL[2073] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2081]) ;
}
/* Initiation rate heroin with Rx misuse effective */
 {
  VGV->lastpos = 492 ;
  VGV->LEVEL[492] = VGV->LEVEL[493]*VGV->LEVEL[1990]*VGV->LEVEL[737
]*VGV->LEVEL[2073] ;
}
/* Initiating heroin with Rx misuse */
 {
  VGV->lastpos = 478 ;
  VGV->LEVEL[478] = VGV->LEVEL[21]*VGV->LEVEL[492] ;
}
/* Rx vs H availability coeff initiating heroin with Rx OUD */
 {
  VGV->lastpos = 1989 ;
  VGV->LEVEL[1989] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1992])))
 ;
}
/* Perceived risk coeff initiating heroin with Rx OUD */
 {
  VGV->lastpos = 735 ;
  VGV->LEVEL[735] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[754])) ;
}
/* Social influence coeff initiating heroin with Rx OUD */
 {
  VGV->lastpos = 2071 ;
  VGV->LEVEL[2071] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2079]) ;
}
/* Initiation rate heroin with Rx OUD effective */
 {
  VGV->lastpos = 495 ;
  VGV->LEVEL[495] = VGV->LEVEL[494]*VGV->LEVEL[1989]*VGV->LEVEL[735
]*VGV->LEVEL[2071]*VGV->LEVEL[38] ;
}
/* Initiating heroin with Rx OUD */
 {
  VGV->lastpos = 481 ;
  VGV->LEVEL[481] = VGV->LEVEL[27]*VGV->LEVEL[495] ;
}
/* Total heroin initiation */
 {
  VGV->lastpos = 2167 ;
  VGV->LEVEL[2167] = VGV->LEVEL[473]+VGV->LEVEL[478]+VGV->LEVEL[481
] ;
}
/* Total overdose deaths */
 {
  VGV->lastpos = 2186 ;
  VGV->LEVEL[2186] = VGV->LEVEL[707]+VGV->LEVEL[692]+VGV->LEVEL[691
]+VGV->LEVEL[2196]+VGV->LEVEL[2197]+VGV->LEVEL[2193] ;
}
/* SimVar */
 {
  VGV->lastpos = 2042+0*1 ;
  VGV->LEVEL[2042+0*1] = VGV->LEVEL[21] ;
}
 {
  VGV->lastpos = 2042+1*1 ;
  VGV->LEVEL[2042+1*1] = VGV->LEVEL[1976] ;
}
 {
  VGV->lastpos = 2042+2*1 ;
  VGV->LEVEL[2042+2*1] = VGV->LEVEL[1982] ;
}
 {
  VGV->lastpos = 2042+3*1 ;
  VGV->LEVEL[2042+3*1] = VGV->LEVEL[18] ;
}
 {
  VGV->lastpos = 2042+4*1 ;
  VGV->LEVEL[2042+4*1] = VGV->LEVEL[397] ;
}
 {
  VGV->lastpos = 2042+5*1 ;
  VGV->LEVEL[2042+5*1] = VGV->LEVEL[2164+0*1] ;
}
 {
  VGV->lastpos = 2042+6*1 ;
  VGV->LEVEL[2042+6*1] = VGV->LEVEL[2164+1*1] ;
}
 {
  VGV->lastpos = 2042+7*1 ;
  VGV->LEVEL[2042+7*1] = VGV->LEVEL[2164+2*1] ;
}
 {
  VGV->lastpos = 2042+14*1 ;
  VGV->LEVEL[2042+14*1] = VGV->LEVEL[2189] ;
}
 {
  VGV->lastpos = 2042+15*1 ;
  VGV->LEVEL[2042+15*1] = VGV->LEVEL[2191] ;
}
 {
  VGV->lastpos = 2042+16*1 ;
  VGV->LEVEL[2042+16*1] = VGV->LEVEL[2199] ;
}
 {
  VGV->lastpos = 2042+8*1 ;
  VGV->LEVEL[2042+8*1] = VGV->LEVEL[488] ;
}
 {
  VGV->lastpos = 2042+9*1 ;
  VGV->LEVEL[2042+9*1] = VGV->LEVEL[484] ;
}
 {
  VGV->lastpos = 2042+10*1 ;
  VGV->LEVEL[2042+10*1] = VGV->LEVEL[2167] ;
}
 {
  VGV->lastpos = 2042+11*1 ;
  VGV->LEVEL[2042+11*1] = VGV->LEVEL[473] ;
}
 {
  VGV->lastpos = 2042+12*1 ;
  VGV->LEVEL[2042+12*1] = VGV->LEVEL[478] ;
}
 {
  VGV->lastpos = 2042+13*1 ;
  VGV->LEVEL[2042+13*1] = VGV->LEVEL[481] ;
}
 {
  VGV->lastpos = 2042+17*1 ;
  VGV->LEVEL[2042+17*1] = VGV->LEVEL[2186] ;
}
/* BaseErr */
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 62+0*27+sub0[forind1]*1 ;
  VGV->LEVEL[62+0*27+sub0[forind1]*1] = VGV->LEVEL[763+0*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[forind1]*1]==NA,0,(-POWER(((VGV->LEVEL[2042+sub0[forind1]
*1]-VGV->LEVEL[268+sub0[forind1]*1])*VGV->LEVEL[2432+0*27+sub0[forind1]
*1]),2.000000))) ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 62+1*27+sub0[forind1]*1 ;
  VGV->LEVEL[62+1*27+sub0[forind1]*1] = VGV->LEVEL[763+1*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[forind1]*1]==NA,0,(-ABS(ZIDZ(0,(VGV->LEVEL[2042
+sub0[forind1]*1]-VGV->LEVEL[268+sub0[forind1]*1]),VGV->LEVEL[268+sub0[forind1]
*1])))*100.000000) ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 62+2*27+sub0[forind1]*1 ;
  VGV->LEVEL[62+2*27+sub0[forind1]*1] = VGV->LEVEL[763+2*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[forind1]*1]==NA,0,(-POWER((VGV->LEVEL[2042+sub0[forind1]
*1]-VGV->LEVEL[268+sub0[forind1]*1]),2.000000))/POWER(VGV->LEVEL[2432
+2*27+sub0[forind1]*1],2.000000)/2.000000-LN(VGV->LEVEL[2432+2*27+sub0[forind1]
*1])) ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 62+3*27+sub0[forind1]*1 ;
  VGV->LEVEL[62+3*27+sub0[forind1]*1] = VGV->LEVEL[763+3*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[forind1]*1]==NA,0,IF_THEN_ELSE(VGV->LEVEL[268+sub0[forind1]
*1]==0,(-LN(1.000000+VGV->LEVEL[2432+3*27+sub0[forind1]*1]*MAX(VGV->LEVEL[347
],VGV->LEVEL[2042+sub0[forind1]*1])))/VGV->LEVEL[2432+3*27+sub0[forind1]
*1],GAMMA_LN(VGV->LEVEL[268+sub0[forind1]*1]+1.000000/VGV->LEVEL[2432
+3*27+sub0[forind1]*1])-GAMMA_LN(1.000000/VGV->LEVEL[2432+3*27+sub0[forind1]
*1])-GAMMA_LN(VGV->LEVEL[268+sub0[forind1]*1]+1.000000)-(VGV->LEVEL[268
+sub0[forind1]*1]+1.000000/VGV->LEVEL[2432+3*27+sub0[forind1]*1])*
LN(1.000000+VGV->LEVEL[2432+3*27+sub0[forind1]*1]*MAX(VGV->LEVEL[347
],VGV->LEVEL[2042+sub0[forind1]*1]))+VGV->LEVEL[268+sub0[forind1]*1
]*(LN(VGV->LEVEL[2432+3*27+sub0[forind1]*1])+LN(MAX(VGV->LEVEL[347
],VGV->LEVEL[2042+sub0[forind1]*1]))))) ;
}
for(forind1=0;forind1<27;forind1++)
 {
  VGV->lastpos = 62+4*27+sub0[forind1]*1 ;
  VGV->LEVEL[62+4*27+sub0[forind1]*1] = VGV->LEVEL[763+4*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[forind1]*1]==NA,0,(-POWER((LN(VGV->LEVEL[2042+sub0[forind1]
*1]+VGV->LEVEL[347])-LN(VGV->LEVEL[268+sub0[forind1]*1]+VGV->LEVEL[347
])),2.000000))/POWER(VGV->LEVEL[2432+2*27+sub0[forind1]*1],2.000000
)/2.000000-LN(VGV->LEVEL[2432+2*27+sub0[forind1]*1])) ;
}
/* Bup providers */
 {
  VGV->lastpos = 208 ;
  VGV->LEVEL[208] = VGV->LEVEL[922+3*1]*(1.000000+RAMP(VGV->LEVEL[772
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Bup effective capacity decay constant net */
 {
  VGV->lastpos = 200 ;
  VGV->LEVEL[200] = VGV->LEVEL[199]*(1.000000+RAMP(VGV->LEVEL[771]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Bup effective capacity per provider indicated */
 {
  VGV->lastpos = 202 ;
  VGV->LEVEL[202] = ZIDZ(0,(ZIDZ(1,VGV->LEVEL[201]*EXP((-VGV->LEVEL[200
])*VGV->LEVEL[208]),(-VGV->LEVEL[200]))+ZIDZ(1,VGV->LEVEL[201],VGV->LEVEL[200
])),VGV->LEVEL[208]) ;
}
/* Bup effective capacity per provider net */
 {
  VGV->lastpos = 203 ;
  VGV->LEVEL[203] = VGV->LEVEL[202]*VGV->LEVEL[6] ;
}
/* Bup capacity effective */
 {
  VGV->lastpos = 197 ;
  VGV->LEVEL[197] = VGV->LEVEL[208]*VGV->LEVEL[203] ;
}
/* Bup demand fulfilment ratio prior */
 {
  VGV->lastpos = 198 ;
  VGV->LEVEL[198] = IF_THEN_ELSE(VGV->LEVEL[0]==2018.000000,0.587000
,NA) ;
}
/* Bup patients per provider */
 {
  VGV->lastpos = 206 ;
  VGV->LEVEL[206] = ZIDZ(0,VGV->LEVEL[2164+0*1],VGV->LEVEL[208]) ;
}
/* Bup patients per provider DATA */
 {
  VGV->lastpos = 207 ;
  VGV->LEVEL[207] = ZIDZ(0,VGV->LEVEL[2336],VGV->LEVEL[208]) ;
}
/* Nonfatal OD ratio Rx prior */
 {
  VGV->lastpos = 580 ;
  VGV->LEVEL[580] = IF_THEN_ELSE((VGV->LEVEL[0]<VGV->LEVEL[352]&&MODULO(
VGV->LEVEL[0],1.000000)==0),35.000000,NA) ;
}
/* Nonfatal OD ratio heroin prior */
 {
  VGV->lastpos = 573 ;
  VGV->LEVEL[573] = IF_THEN_ELSE((VGV->LEVEL[0]<VGV->LEVEL[352]&&MODULO(
VGV->LEVEL[0],1.000000)==0),30.000000,NA) ;
}
/* Nx utilization events H user fraction prior */
 {
  VGV->lastpos = 662 ;
  VGV->LEVEL[662] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,0.860000
,NA) ;
}
/* Rx OUD in remission total prior */
 {
  VGV->lastpos = 1967 ;
  VGV->LEVEL[1967] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[1968
],NA) ;
}
/* HUD in remission total prior */
 {
  VGV->lastpos = 391 ;
  VGV->LEVEL[391] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[392
],NA) ;
}
/* Probability Nx bystander heroin prior */
 {
  VGV->lastpos = 835 ;
  VGV->LEVEL[835] = IF_THEN_ELSE(VGV->LEVEL[0]==2019.000000,0.200000
,NA) ;
}
/* Rx OUD in stable remission total prior */
 {
  VGV->lastpos = 1970 ;
  VGV->LEVEL[1970] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[1971
],NA) ;
}
/* HUD in stable remission total prior */
 {
  VGV->lastpos = 393 ;
  VGV->LEVEL[393] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[394
],NA) ;
}
/* DataPriorBase */
 {
  VGV->lastpos = 241+18*1 ;
  VGV->LEVEL[241+18*1] = VGV->LEVEL[580] ;
}
 {
  VGV->lastpos = 241+19*1 ;
  VGV->LEVEL[241+19*1] = VGV->LEVEL[573] ;
}
 {
  VGV->lastpos = 241+20*1 ;
  VGV->LEVEL[241+20*1] = VGV->LEVEL[198] ;
}
 {
  VGV->lastpos = 241+22*1 ;
  VGV->LEVEL[241+22*1] = VGV->LEVEL[662] ;
}
 {
  VGV->lastpos = 241+23*1 ;
  VGV->LEVEL[241+23*1] = VGV->LEVEL[1967] ;
}
 {
  VGV->lastpos = 241+24*1 ;
  VGV->LEVEL[241+24*1] = VGV->LEVEL[391] ;
}
 {
  VGV->lastpos = 241+21*1 ;
  VGV->LEVEL[241+21*1] = VGV->LEVEL[835] ;
}
 {
  VGV->lastpos = 241+25*1 ;
  VGV->LEVEL[241+25*1] = VGV->LEVEL[1970] ;
}
 {
  VGV->lastpos = 241+26*1 ;
  VGV->LEVEL[241+26*1] = VGV->LEVEL[393] ;
}
/* DataPrior */
for(forind0=0;forind0<27;forind0++)
 {
  VGV->lastpos = 214+sub0[forind0]*1 ;
  VGV->LEVEL[214+sub0[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546
],VGV->LEVEL[241+sub0[forind0]*1],NA) ;
}
/* Developing HUD rate no Rx OUD net */
 {
  VGV->lastpos = 325 ;
  VGV->LEVEL[325] = VGV->LEVEL[323]*(1.000000+RAMP(VGV->LEVEL[775]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Heroin availability coeff developing HUD */
 {
  VGV->lastpos = 377 ;
  VGV->LEVEL[377] = POWER(VGV->LEVEL[380],VGV->LEVEL[381]) ;
}
/* Effective SI users HUD development */
 {
  VGV->lastpos = 344 ;
  VGV->LEVEL[344] = VGV->LEVEL[397] ;
}
/* SI on developing HUD current */
 {
  VGV->lastpos = 2000 ;
  VGV->LEVEL[2000] = VGV->LEVEL[344]/VGV->LEVEL[802] ;
}
/* SI on developing HUD relative */
 {
  VGV->lastpos = 2002 ;
  VGV->LEVEL[2002] = VGV->LEVEL[2000]/VGV->LEVEL[2001] ;
}
/* Social influence coeff developing HUD */
 {
  VGV->lastpos = 2069 ;
  VGV->LEVEL[2069] = POWER(VGV->LEVEL[2002],VGV->LEVEL[2077]) ;
}
/* Developing HUD rate no Rx OUD effective */
 {
  VGV->lastpos = 324 ;
  VGV->LEVEL[324] = VGV->LEVEL[325]*VGV->LEVEL[377]*VGV->LEVEL[2069
] ;
}
/* Developing HUD no Rx OUD */
 {
  VGV->lastpos = 322 ;
  VGV->LEVEL[322] = VGV->LEVEL[18]*VGV->LEVEL[324] ;
}
/* Developing HUD rate with Rx OUD net */
 {
  VGV->lastpos = 328 ;
  VGV->LEVEL[328] = VGV->LEVEL[326]*(1.000000+RAMP(VGV->LEVEL[776]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx vs H availability coeff developing HUD with Rx OUD */
 {
  VGV->lastpos = 1988 ;
  VGV->LEVEL[1988] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1991])))
 ;
}
/* Developing HUD rate with Rx OUD effective */
 {
  VGV->lastpos = 327 ;
  VGV->LEVEL[327] = VGV->LEVEL[328]*VGV->LEVEL[2069]*VGV->LEVEL[1988
] ;
}
/* Developing HUD with Rx OUD */
 {
  VGV->lastpos = 329 ;
  VGV->LEVEL[329] = VGV->LEVEL[33]*VGV->LEVEL[327] ;
}
/* Developing Rx OUD rate net */
 {
  VGV->lastpos = 333 ;
  VGV->LEVEL[333] = VGV->LEVEL[331]*(1.000000+RAMP(VGV->LEVEL[789]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx availability coeff developing Rx OUD */
 {
  VGV->lastpos = 1942 ;
  VGV->LEVEL[1942] = POWER(VGV->LEVEL[1945],VGV->LEVEL[1948]) ;
}
/* Effective SI users Rx OUD development */
 {
  VGV->lastpos = 346 ;
  VGV->LEVEL[346] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* SI on developing Rx OUD current */
 {
  VGV->lastpos = 2003 ;
  VGV->LEVEL[2003] = VGV->LEVEL[346]/VGV->LEVEL[802] ;
}
/* SI on developing Rx OUD relative */
 {
  VGV->lastpos = 2005 ;
  VGV->LEVEL[2005] = XIDZ(0,VGV->LEVEL[2003],VGV->LEVEL[2004],1.000000
) ;
}
/* Social influence coeff developing Rx OUD */
 {
  VGV->lastpos = 2070 ;
  VGV->LEVEL[2070] = POWER(VGV->LEVEL[2005],VGV->LEVEL[2078]) ;
}
/* Developing Rx OUD rate effective */
 {
  VGV->lastpos = 332 ;
  VGV->LEVEL[332] = VGV->LEVEL[333]*VGV->LEVEL[1942]*VGV->LEVEL[2070
] ;
}
/* Developing Rx OUD */
 {
  VGV->lastpos = 330 ;
  VGV->LEVEL[330] = VGV->LEVEL[21]*VGV->LEVEL[332] ;
}
/* Fraction HUD by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 356+sub9[forind0]*1 ;
  VGV->LEVEL[356+sub9[forind0]*1] = ZIDZ(0,(VGV->LEVEL[12+sub9[forind0]
*1]+VGV->LEVEL[388+sub9[forind0]*1]),VGV->LEVEL[2164+sub9[forind0]
*1]) ;
}
/* Total heroin users */
 {
  VGV->lastpos = 2170 ;
  VGV->LEVEL[2170] = VGV->LEVEL[18]+VGV->LEVEL[1982]+VGV->LEVEL[397
] ;
}
/* Fraction of all heroin users with HUD */
 {
  VGV->lastpos = 360 ;
  VGV->LEVEL[360] = VGV->LEVEL[397]/VGV->LEVEL[2170] ;
}
/* Total Rx use excl heroin */
 {
  VGV->lastpos = 2215 ;
  VGV->LEVEL[2215] = VGV->LEVEL[21]+VGV->LEVEL[1976] ;
}
/* Fraction of all Rx users excl heroin with OUD */
 {
  VGV->lastpos = 362 ;
  VGV->LEVEL[362] = VGV->LEVEL[1976]/VGV->LEVEL[2215] ;
}
/* Total Rx users excl heroin DATA */
 {
  VGV->lastpos = 2218 ;
  VGV->LEVEL[2218] = VGV->LEVEL[1960]+VGV->LEVEL[1975] ;
}
/* Fraction of all Rx users excl heroin with OUD DATA */
 {
  VGV->lastpos = 363 ;
  VGV->LEVEL[363] = IF_THEN_ELSE(VGV->LEVEL[0]<2019.000000,VGV->LEVEL[1975
]/VGV->LEVEL[2218],NA) ;
}
/* Fraction of heroin initiation no Rx */
 {
  VGV->lastpos = 364 ;
  VGV->LEVEL[364] = VGV->LEVEL[473]/VGV->LEVEL[2167] ;
}
/* Fraction of heroin initiation with Rx misuse */
 {
  VGV->lastpos = 366 ;
  VGV->LEVEL[366] = VGV->LEVEL[478]/VGV->LEVEL[2167] ;
}
/* Fraction of heroin initiation with Rx OUD */
 {
  VGV->lastpos = 368 ;
  VGV->LEVEL[368] = VGV->LEVEL[481]/VGV->LEVEL[2167] ;
}
/* Rx OUD by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 1963+sub9[forind0]*1 ;
  VGV->LEVEL[1963+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1
]+VGV->LEVEL[28+sub9[forind0]*1] ;
}
/* Fraction Rx OUD by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 374+sub9[forind0]*1 ;
  VGV->LEVEL[374+sub9[forind0]*1] = ZIDZ(0,(VGV->LEVEL[1963+sub9[forind0]
*1]+VGV->LEVEL[1972+sub9[forind0]*1]+VGV->LEVEL[1978+sub9[forind0]
*1]),VGV->LEVEL[2164+sub9[forind0]*1]) ;
}
/* Heroin availability coeff net quit NDHU */
 {
  VGV->lastpos = 379 ;
  VGV->LEVEL[379] = POWER(VGV->LEVEL[380],(-VGV->LEVEL[383])) ;
}
/* HUD in early or Tx remission */
 {
  VGV->lastpos = 387 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[388+sub9[sumind0]*1] ;
  VGV->LEVEL[387] = VGV->LEVEL[15]+temp0 ;
}
/* Initial Rx OUD no H in Tx */
 {
  VGV->lastpos = 418+1*1 ;
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  VGV->lastpos = 418+2*1 ;
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* MMT capacity estimated */
 {
  VGV->lastpos = 558 ;
  VGV->LEVEL[558] = VGV->LEVEL[922+4*1]*(1.000000+RAMP(VGV->LEVEL[781
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Perceived risk coeff net quit NDHU with Rx */
 {
  VGV->lastpos = 742 ;
  VGV->LEVEL[742] = POWER(VGV->LEVEL[748],VGV->LEVEL[760]) ;
}
/* Net quitting heroin with Rx misuse */
 {
  VGV->lastpos = 565 ;
  VGV->LEVEL[565] = VGV->LEVEL[18]*VGV->LEVEL[561]*VGV->LEVEL[742]
 ;
}
/* Perceived risk coeff net quit heroin with Rx OUD */
 {
  VGV->lastpos = 740 ;
  VGV->LEVEL[740] = POWER(VGV->LEVEL[748],VGV->LEVEL[758]) ;
}
/* Net quitting heroin with Rx OUD */
 {
  VGV->lastpos = 566 ;
  VGV->LEVEL[566] = VGV->LEVEL[33]*VGV->LEVEL[562]*VGV->LEVEL[740]
 ;
}
/* Perceived risk coeff net quit NDHU */
 {
  VGV->lastpos = 741 ;
  VGV->LEVEL[741] = POWER(VGV->LEVEL[748],VGV->LEVEL[759]) ;
}
}
void mdl_func12(void) ;
void mdl_func12(){
double temp[10];
/* Net quitting NDHU */
 {
  VGV->lastpos = 567 ;
  VGV->LEVEL[567] = VGV->LEVEL[18]*VGV->LEVEL[563]*VGV->LEVEL[741]
*VGV->LEVEL[379] ;
}
/* Perceived risk coeff net quit Rx misuse */
 {
  VGV->lastpos = 743 ;
  VGV->LEVEL[743] = POWER(VGV->LEVEL[753],VGV->LEVEL[761]) ;
}
/* Rx availability coeff net quit Rx misuse */
 {
  VGV->lastpos = 1944 ;
  VGV->LEVEL[1944] = POWER(VGV->LEVEL[1945],(-VGV->LEVEL[1950])) ;
}
/* Net quitting Rx misuse */
 {
  VGV->lastpos = 568 ;
  VGV->LEVEL[568] = VGV->LEVEL[21]*VGV->LEVEL[564]*VGV->LEVEL[743]
*VGV->LEVEL[1944] ;
}
/* Nonfatal OD ratio HUD */
 {
  VGV->lastpos = 574 ;
  VGV->LEVEL[574] = VGV->LEVEL[721]/VGV->LEVEL[698]-1.000000 ;
}
/* Nonfatal ODs HUD */
 {
  VGV->lastpos = 582 ;
  VGV->LEVEL[582] = VGV->LEVEL[2193]*VGV->LEVEL[574] ;
}
/* Nonfatal OD ratio NDHU */
 {
  VGV->lastpos = 575 ;
  VGV->LEVEL[575] = VGV->LEVEL[722]/VGV->LEVEL[700]-1.000000 ;
}
/* Nonfatal ODs NDHU */
 {
  VGV->lastpos = 583 ;
  VGV->LEVEL[583] = VGV->LEVEL[692]*VGV->LEVEL[575] ;
}
/* Total nonfatal overdoses heroin */
 {
  VGV->lastpos = 2183 ;
  VGV->LEVEL[2183] = VGV->LEVEL[582]+VGV->LEVEL[583] ;
}
/* Nonfatal OD ratio heroin */
 {
  VGV->lastpos = 572 ;
  VGV->LEVEL[572] = VGV->LEVEL[2183]/VGV->LEVEL[2191] ;
}
/* Overdose rate total Rx OUD no H */
 {
  VGV->lastpos = 724 ;
  VGV->LEVEL[724] = VGV->LEVEL[719]+VGV->LEVEL[723] ;
}
/* Nonfatal OD ratio Rx OUD no H */
 {
  VGV->lastpos = 578 ;
  VGV->LEVEL[578] = VGV->LEVEL[724]/VGV->LEVEL[702]-1.000000 ;
}
/* Nonfatal ODs Rx OUD no H */
 {
  VGV->lastpos = 585 ;
  VGV->LEVEL[585] = VGV->LEVEL[2196]*VGV->LEVEL[578] ;
}
/* Nonfatal OD ratio Rx misuse */
 {
  VGV->lastpos = 577 ;
  VGV->LEVEL[577] = VGV->LEVEL[718]/VGV->LEVEL[701]-1.000000 ;
}
/* Nonfatal ODs Rx misuse */
 {
  VGV->lastpos = 584 ;
  VGV->LEVEL[584] = VGV->LEVEL[707]*VGV->LEVEL[577] ;
}
/* Nonfatal OD ratio Rx OUD with H */
 {
  VGV->lastpos = 579 ;
  VGV->LEVEL[579] = VGV->LEVEL[719]/VGV->LEVEL[703]-1.000000 ;
}
/* Nonfatal ODs Rx OUD with H */
 {
  VGV->lastpos = 586 ;
  VGV->LEVEL[586] = VGV->LEVEL[2197]*VGV->LEVEL[579] ;
}
/* Total nonfatal overdoses Rx */
 {
  VGV->lastpos = 2184 ;
  VGV->LEVEL[2184] = VGV->LEVEL[585]+VGV->LEVEL[584]+VGV->LEVEL[586
] ;
}
/* Total overdose deaths Rx */
 {
  VGV->lastpos = 2195 ;
  VGV->LEVEL[2195] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]+VGV->LEVEL[2197] ;
}
/* Nonfatal OD ratio Rx */
 {
  VGV->lastpos = 576 ;
  VGV->LEVEL[576] = VGV->LEVEL[2184]/VGV->LEVEL[2195] ;
}
/* Total nonfatal overdoses */
 {
  VGV->lastpos = 2182 ;
  VGV->LEVEL[2182] = VGV->LEVEL[585]+VGV->LEVEL[582]+VGV->LEVEL[583
]+VGV->LEVEL[586]+VGV->LEVEL[584] ;
}
/* Nonfatal OD ratio total */
 {
  VGV->lastpos = 581 ;
  VGV->LEVEL[581] = XIDZ(0,VGV->LEVEL[2182],VGV->LEVEL[2186],1.000000
) ;
}
/* NonOD death HUD */
 {
  VGV->lastpos = 587 ;
  VGV->LEVEL[587] = VGV->LEVEL[17]*VGV->LEVEL[598] ;
}
/* NonOD death rate HUD or OUD in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 599+sub9[forind0]*1 ;
  VGV->LEVEL[599+sub9[forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[forind0]
*1])*VGV->LEVEL[598]*VGV->LEVEL[334+sub9[forind0]*1]+VGV->LEVEL[956
+sub9[forind0]*1]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in MOUD Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 588+sub9[forind0]*1 ;
  VGV->LEVEL[588+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death HUD in remission */
 {
  VGV->lastpos = 591 ;
  VGV->LEVEL[591] = VGV->LEVEL[15]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in stable remission */
 {
  VGV->lastpos = 592 ;
  VGV->LEVEL[592] = VGV->LEVEL[16]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD no H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 608+sub9[forind0]*1 ;
  VGV->LEVEL[608+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death Rx OUD with H in Tx */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 614+sub9[forind0]*1 ;
  VGV->LEVEL[614+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1]
*VGV->LEVEL[599+sub9[forind0]*1] ;
}
/* NonOD death in Tx total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 593+sub9[forind0]*1 ;
  VGV->LEVEL[593+sub9[forind0]*1] = VGV->LEVEL[588+sub9[forind0]*1
]+VGV->LEVEL[608+sub9[forind0]*1]+VGV->LEVEL[614+sub9[forind0]*1] ;
}
/* NonOD death rate misuse */
 {
  VGV->lastpos = 602 ;
  VGV->LEVEL[602] = (VGV->LEVEL[604]+(VGV->LEVEL[398]*VGV->LEVEL[604
]))/2.000000 ;
}
/* NonOD death misuse */
 {
  VGV->lastpos = 596 ;
  VGV->LEVEL[596] = VGV->LEVEL[21]*VGV->LEVEL[602] ;
}
/* NonOD death rate NDHU */
 {
  VGV->lastpos = 603 ;
  VGV->LEVEL[603] = (VGV->LEVEL[598]+VGV->LEVEL[602])/2.000000 ;
}
/* NonOD death NDHU */
 {
  VGV->lastpos = 597 ;
  VGV->LEVEL[597] = VGV->LEVEL[18]*VGV->LEVEL[603] ;
}
/* NonOD death Rx OUD no H */
 {
  VGV->lastpos = 605 ;
  VGV->LEVEL[605] = VGV->LEVEL[27]*VGV->LEVEL[598] ;
}
/* NonOD death Rx OUD no H in remission */
 {
  VGV->lastpos = 606 ;
  VGV->LEVEL[606] = VGV->LEVEL[25]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD no H in stable remission */
 {
  VGV->lastpos = 607 ;
  VGV->LEVEL[607] = VGV->LEVEL[26]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD with H */
 {
  VGV->lastpos = 611 ;
  VGV->LEVEL[611] = VGV->LEVEL[33]*VGV->LEVEL[598] ;
}
/* NonOD death Rx OUD with H in remission */
 {
  VGV->lastpos = 612 ;
  VGV->LEVEL[612] = VGV->LEVEL[31]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD with H in stable remission */
 {
  VGV->lastpos = 613 ;
  VGV->LEVEL[613] = VGV->LEVEL[32]*VGV->LEVEL[604] ;
}
/* NormErr */
for(forind0=0;forind0<18;forind0++)
 {
  VGV->lastpos = 617+sub8[forind0]*1 ;
  VGV->LEVEL[617+sub8[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[268+sub8[forind0]
*1]==NA,NA,ZIDZ(0,(VGV->LEVEL[268+sub8[forind0]*1]-VGV->LEVEL[2042
+sub8[forind0]*1]),VGV->LEVEL[2042+sub8[forind0]*1])) ;
}
/* Total overdoses heroin */
 {
  VGV->lastpos = 2203 ;
  VGV->LEVEL[2203] = VGV->LEVEL[2183]+VGV->LEVEL[2191] ;
}
/* Nx utilization events H user */
 {
  VGV->lastpos = 660 ;
  VGV->LEVEL[660] = VGV->LEVEL[2203]*VGV->LEVEL[840]*VGV->LEVEL[834
] ;
}
/* Nx kit utilization fraction H user */
 {
  VGV->lastpos = 649 ;
  VGV->LEVEL[649] = VGV->LEVEL[660]*VGV->LEVEL[657]/VGV->LEVEL[651
] ;
}
/* Total overdoses Rx */
 {
  VGV->lastpos = 2204 ;
  VGV->LEVEL[2204] = VGV->LEVEL[2184]+VGV->LEVEL[2195] ;
}
/* Nx utilization events Rx user */
 {
  VGV->lastpos = 663 ;
  VGV->LEVEL[663] = VGV->LEVEL[2204]*VGV->LEVEL[840]*VGV->LEVEL[836
] ;
}
/* Nx kit utilization fraction Rx user */
 {
  VGV->lastpos = 650 ;
  VGV->LEVEL[650] = VGV->LEVEL[663]*VGV->LEVEL[657]/VGV->LEVEL[654
] ;
}
/* Nx utilization deaths averted H user */
 {
  VGV->lastpos = 658 ;
  VGV->LEVEL[658] = VGV->LEVEL[660]*(1.000000-VGV->LEVEL[60])*(1.000000
-VGV->LEVEL[842]) ;
}
/* Total overdoses synth baseline */
 {
  VGV->lastpos = 2206 ;
  VGV->LEVEL[2206] = VGV->LEVEL[723]*VGV->LEVEL[27] ;
}
/* Total overdoses Rx synth baseline fraction */
 {
  VGV->lastpos = 2205 ;
  VGV->LEVEL[2205] = VGV->LEVEL[2206]/VGV->LEVEL[2204] ;
}
/* Nx utilization deaths averted Rx user */
 {
  VGV->lastpos = 659 ;
  VGV->LEVEL[659] = VGV->LEVEL[663]*(VGV->LEVEL[2205]*(1.000000-VGV->LEVEL[57
])+(1.000000-VGV->LEVEL[2205])*(1.000000-VGV->LEVEL[61]))*(1.000000
-VGV->LEVEL[842]) ;
}
/* Nx utilization events total */
 {
  VGV->lastpos = 664 ;
  VGV->LEVEL[664] = VGV->LEVEL[660]+VGV->LEVEL[663] ;
}
/* Nx utilization events H user fraction */
 {
  VGV->lastpos = 661 ;
  VGV->LEVEL[661] = ZIDZ(0,VGV->LEVEL[660],VGV->LEVEL[664]) ;
}
/* Overdose death rate base HUD */
 {
  VGV->lastpos = 693 ;
  VGV->LEVEL[693] = VGV->LEVEL[716]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
]*(1.000000-VGV->LEVEL[353]) ;
}
/* OD death fraction base HUD */
 {
  VGV->lastpos = 665 ;
  VGV->LEVEL[665] = VGV->LEVEL[693]/VGV->LEVEL[698] ;
}
/* Overdose death rate base NDHU */
 {
  VGV->lastpos = 696 ;
  VGV->LEVEL[696] = VGV->LEVEL[717]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
]*(1.000000-VGV->LEVEL[353]) ;
}
/* OD death fraction base NDHU */
 {
  VGV->lastpos = 666 ;
  VGV->LEVEL[666] = VGV->LEVEL[696]/VGV->LEVEL[700] ;
}
/* Overdose death rate synth HUD */
 {
  VGV->lastpos = 705 ;
  VGV->LEVEL[705] = MAX(0,VGV->LEVEL[698]-VGV->LEVEL[693]) ;
}
/* OD death fraction synth HUD */
 {
  VGV->lastpos = 669 ;
  VGV->LEVEL[669] = VGV->LEVEL[705]/VGV->LEVEL[698] ;
}
/* Overdose death rate synth NDHU */
 {
  VGV->lastpos = 706 ;
  VGV->LEVEL[706] = MAX(0,VGV->LEVEL[700]-VGV->LEVEL[696]) ;
}
/* OD death fraction synth NDHU */
 {
  VGV->lastpos = 670 ;
  VGV->LEVEL[670] = VGV->LEVEL[706]/VGV->LEVEL[700] ;
}
/* Overdose death in Tx total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 688+sub9[forind0]*1 ;
  VGV->LEVEL[688+sub9[forind0]*1] = VGV->LEVEL[685+sub9[forind0]*1
]+VGV->LEVEL[709+sub9[forind0]*1]+VGV->LEVEL[713+sub9[forind0]*1] ;
}
/* Overdose death rate base HUD no synth counterfactual */
 {
  VGV->lastpos = 694 ;
  VGV->LEVEL[694] = VGV->LEVEL[716]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
] ;
}
/* Overdose death rate HUD no Nx counterfactual */
 {
  VGV->lastpos = 699 ;
  VGV->LEVEL[699] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*(1.000000
-VGV->LEVEL[840]*VGV->LEVEL[842]) ;
}
/* OxyContin withdrawal supply impact */
 {
  VGV->lastpos = 727 ;
  VGV->LEVEL[727] = PULSE(VGV->LEVEL[728],VGV->LEVEL[725])*VGV->LEVEL[726
]/VGV->LEVEL[725] ;
}
/* Perceived risk heroin use indicated */
 {
  VGV->lastpos = 746 ;
  VGV->LEVEL[746] = VGV->LEVEL[2191]+VGV->LEVEL[2183]*VGV->LEVEL[762
] ;
}
/* Perceived risk Rx use indicated */
 {
  VGV->lastpos = 751 ;
  VGV->LEVEL[751] = VGV->LEVEL[2195]+VGV->LEVEL[762]*VGV->LEVEL[2184
] ;
}
/* Tx effective capacity fraction */
 {
  VGV->lastpos = 2259+1*1 ;
  VGV->LEVEL[2259+1*1] = VGV->LEVEL[560] ;
}
 {
  VGV->lastpos = 2259+2*1 ;
  VGV->LEVEL[2259+2*1] = VGV->LEVEL[2377] ;
}
/* Viv capacity estimated */
 {
  VGV->lastpos = 2375 ;
  VGV->LEVEL[2375] = VGV->LEVEL[922+5*1]*(1.000000+RAMP(VGV->LEVEL[800
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Tx capacity effective */
 {
  VGV->lastpos = 2235+0*1 ;
  VGV->LEVEL[2235+0*1] = VGV->LEVEL[197]*VGV->LEVEL[2259+0*1] ;
}
 {
  VGV->lastpos = 2235+1*1 ;
  VGV->LEVEL[2235+1*1] = VGV->LEVEL[558]*VGV->LEVEL[2259+1*1] ;
}
 {
  VGV->lastpos = 2235+2*1 ;
  VGV->LEVEL[2235+2*1] = VGV->LEVEL[2375]*VGV->LEVEL[2259+2*1] ;
}
/* Tx intake capacity */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2328+sub9[forind0]*1 ;
  VGV->LEVEL[2328+sub9[forind0]*1] = MAX(0,VGV->LEVEL[35+sub9[forind0]
*1]+(VGV->LEVEL[2235+sub9[forind0]*1]-VGV->LEVEL[2164+sub9[forind0]
*1])/VGV->LEVEL[2332+sub9[forind0]*1]) ;
}
/* Tx seeking rate Rx OUD no H total net */
 {
  VGV->lastpos = 2364 ;
  VGV->LEVEL[2364] = VGV->LEVEL[2363]*(1.000000+RAMP(VGV->LEVEL[799
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  VGV->lastpos = 2347+0*1 ;
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
/* Tx seeking rate Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2360+sub9[forind0]*1 ;
  VGV->LEVEL[2360+sub9[forind0]*1] = VGV->LEVEL[2364]*VGV->LEVEL[2347
+sub9[forind0]*1] ;
}
/* Tx seeking affordability loss fraction net */
 {
  VGV->lastpos = 2340 ;
  VGV->LEVEL[2340] = VGV->LEVEL[2339]+RAMP(IF_THEN_ELSE(VGV->LEVEL[797
]>=0,VGV->LEVEL[797]*(1.000000-VGV->LEVEL[2339]),VGV->LEVEL[797]*VGV->LEVEL[2339
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Tx seeking nonaffordability loss fraction net */
 {
  VGV->lastpos = 2355 ;
  VGV->LEVEL[2355] = VGV->LEVEL[2354]+RAMP(IF_THEN_ELSE(VGV->LEVEL[798
]>=0,VGV->LEVEL[798]*(1.000000-VGV->LEVEL[2354]),VGV->LEVEL[798]*VGV->LEVEL[2354
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Tx seeking barrier loss fraction */
 {
  VGV->lastpos = 2341 ;
  VGV->LEVEL[2341] = MIN(1.000000,VGV->LEVEL[2340]+VGV->LEVEL[2355
]) ;
}
/* Tx demand Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2250+sub9[forind0]*1 ;
  VGV->LEVEL[2250+sub9[forind0]*1] = VGV->LEVEL[27]*VGV->LEVEL[2360
+sub9[forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx seeking rate Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2365+sub9[forind0]*1 ;
  VGV->LEVEL[2365+sub9[forind0]*1] = VGV->LEVEL[2360+sub9[forind0]
*1] ;
}
/* Tx demand Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2253+sub9[forind0]*1 ;
  VGV->LEVEL[2253+sub9[forind0]*1] = VGV->LEVEL[33]*VGV->LEVEL[2365
+sub9[forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx seeking fraction by med HUD */
 {
  VGV->lastpos = 2344+0*1 ;
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
/* Tx seeking rate HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2356+sub9[forind0]*1 ;
  VGV->LEVEL[2356+sub9[forind0]*1] = VGV->LEVEL[2364]*VGV->LEVEL[2359
]*VGV->LEVEL[2344+sub9[forind0]*1] ;
}
/* Tx demand HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2247+sub9[forind0]*1 ;
  VGV->LEVEL[2247+sub9[forind0]*1] = VGV->LEVEL[17]*VGV->LEVEL[2356
+sub9[forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx capacity relative to demand */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2241+sub9[forind0]*1 ;
  VGV->LEVEL[2241+sub9[forind0]*1] = ZIDZ(0,VGV->LEVEL[2328+sub9[forind0]
*1],VGV->LEVEL[2250+sub9[forind0]*1]+VGV->LEVEL[2253+sub9[forind0]
*1]+VGV->LEVEL[2247+sub9[forind0]*1]) ;
}
/* Tx demand fulfilment ratio */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2244+sub9[forind0]*1 ;
  VGV->LEVEL[2244+sub9[forind0]*1] = MIN(VGV->LEVEL[2241+sub9[forind0]
*1],1.000000) ;
}
/* Rx OUD in early or Tx remission */
 {
  VGV->lastpos = 1966 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[1972+sub9[sumind0]*1]+VGV->LEVEL[1978+sub9[sumind0]
*1] ;
  VGV->LEVEL[1966] = VGV->LEVEL[25]+VGV->LEVEL[31]+temp0 ;
}
/* Rx OUD in stable remission total */
 {
  VGV->lastpos = 1969 ;
  VGV->LEVEL[1969] = VGV->LEVEL[26]+VGV->LEVEL[32] ;
}
/* SimPrior */
 {
  VGV->lastpos = 2015+18*1 ;
  VGV->LEVEL[2015+18*1] = VGV->LEVEL[576] ;
}
 {
  VGV->lastpos = 2015+19*1 ;
  VGV->LEVEL[2015+19*1] = VGV->LEVEL[572] ;
}
 {
  VGV->lastpos = 2015+20*1 ;
  VGV->LEVEL[2015+20*1] = VGV->LEVEL[2244+0*1] ;
}
 {
  VGV->lastpos = 2015+22*1 ;
  VGV->LEVEL[2015+22*1] = VGV->LEVEL[661] ;
}
 {
  VGV->lastpos = 2015+23*1 ;
  VGV->LEVEL[2015+23*1] = VGV->LEVEL[1966] ;
}
 {
  VGV->lastpos = 2015+24*1 ;
  VGV->LEVEL[2015+24*1] = VGV->LEVEL[387] ;
}
 {
  VGV->lastpos = 2015+21*1 ;
  VGV->LEVEL[2015+21*1] = VGV->LEVEL[834] ;
}
 {
  VGV->lastpos = 2015+25*1 ;
  VGV->LEVEL[2015+25*1] = VGV->LEVEL[1969] ;
}
 {
  VGV->lastpos = 2015+26*1 ;
  VGV->LEVEL[2015+26*1] = VGV->LEVEL[16] ;
}
/* PriorErr */
for(forind0=0;forind0<27;forind0++)
 {
  VGV->lastpos = 807+sub0[forind0]*1 ;
  VGV->LEVEL[807+sub0[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[214+sub0[forind0]
*1]==NA||VGV->LEVEL[2015+sub0[forind0]*1]==NA,0,(-POWER(((VGV->LEVEL[2015
+sub0[forind0]*1]-VGV->LEVEL[214+sub0[forind0]*1])*VGV->LEVEL[2432
+0*27+sub0[forind0]*1]),2.000000))/2.000000/VGV->LEVEL[2158]) ;
}
/* Projected total overdose deaths */
 {
  VGV->lastpos = 843 ;
  VGV->LEVEL[843] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[546],0,VGV->LEVEL[2186
]) ;
}
}
void mdl_func13(void) ;
void mdl_func13(){
double temp[10];
/* Rx OUD all total */
 {
  VGV->lastpos = 1961 ;
  VGV->LEVEL[1961] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* Total with UD */
 {
  VGV->lastpos = 2222 ;
  VGV->LEVEL[2222] = VGV->LEVEL[397]+VGV->LEVEL[1961] ;
}
/* Projected total with UD */
 {
  VGV->lastpos = 844 ;
  VGV->LEVEL[844] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[546],0,VGV->LEVEL[2222
]) ;
}
/* radio hud to rx oud data */
 {
  VGV->lastpos = 944 ;
  VGV->LEVEL[944] = VGV->LEVEL[386]/VGV->LEVEL[1962] ;
}
/* ratio hud to rx oud model */
 {
  VGV->lastpos = 945 ;
  VGV->LEVEL[945] = VGV->LEVEL[397]/VGV->LEVEL[1961] ;
}
/* Relapse rate HUD net */
 {
  VGV->lastpos = 947 ;
  VGV->LEVEL[947] = VGV->LEVEL[946]*(1.000000+RAMP(VGV->LEVEL[788]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Total HUD in remission not in Tx */
 {
  VGV->lastpos = 2173 ;
  VGV->LEVEL[2173] = VGV->LEVEL[15]+VGV->LEVEL[16] ;
}
/* Total HUD in remission */
 {
  VGV->lastpos = 2172 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[388+sub9[sumind0]*1] ;
  VGV->LEVEL[2172] = VGV->LEVEL[2173]+temp0 ;
}
/* Total Rx OUD in Remission not in Tx */
 {
  VGV->lastpos = 2214 ;
  VGV->LEVEL[2214] = VGV->LEVEL[25]+VGV->LEVEL[31]+VGV->LEVEL[26]+
VGV->LEVEL[32] ;
}
/* Total in Rx OUD Remission */
 {
  VGV->lastpos = 2179 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[1972+sub9[sumind0]*1] ;
    temp1 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp1 += VGV->LEVEL[1978+sub9[sumind0]*1] ;
  VGV->LEVEL[2179] = temp0+temp1+VGV->LEVEL[2214] ;
}
/* Total in Remission */
 {
  VGV->lastpos = 2174 ;
  VGV->LEVEL[2174] = VGV->LEVEL[2172]+VGV->LEVEL[2179] ;
}
/* SI on remission current */
 {
  VGV->lastpos = 2012 ;
  VGV->LEVEL[2012] = VGV->LEVEL[2174]/VGV->LEVEL[802] ;
}
/* SI on remission relative */
 {
  VGV->lastpos = 2014 ;
  VGV->LEVEL[2014] = VGV->LEVEL[2012]/VGV->LEVEL[2013] ;
}
/* Social influence strength relapse net */
 {
  VGV->lastpos = 2084 ;
  VGV->LEVEL[2084] = VGV->LEVEL[2083]+RAMP(VGV->LEVEL[792]/VGV->LEVEL[801
],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]) ;
}
/* Social influence coefficient relapse */
 {
  VGV->lastpos = 2075 ;
  VGV->LEVEL[2075] = POWER(VGV->LEVEL[2014],(-VGV->LEVEL[2084])) ;
}
/* Relapsing to Rx OUD no H */
 {
  VGV->lastpos = 952 ;
  VGV->LEVEL[952] = VGV->LEVEL[25]*VGV->LEVEL[947]*VGV->LEVEL[948]
*VGV->LEVEL[2075] ;
}
/* Relapsing to Rx OUD with H */
 {
  VGV->lastpos = 954 ;
  VGV->LEVEL[954] = VGV->LEVEL[31]*VGV->LEVEL[947]*VGV->LEVEL[948]
*VGV->LEVEL[2075] ;
}
/* Relapsing to HUD */
 {
  VGV->lastpos = 950 ;
  VGV->LEVEL[950] = VGV->LEVEL[15]*VGV->LEVEL[947]*VGV->LEVEL[2075
] ;
}
/* Relapsing from remission total */
 {
  VGV->lastpos = 949 ;
  VGV->LEVEL[949] = VGV->LEVEL[952]+VGV->LEVEL[954]+VGV->LEVEL[950
] ;
}
/* Tx exit with UD rate HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2310+sub9[forind0]*1 ;
  VGV->LEVEL[2310+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2307+sub9[forind0]*1 ;
  VGV->LEVEL[2307+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1
]*VGV->LEVEL[2310+sub9[forind0]*1] ;
}
/* Relapsing to HUD total */
 {
  VGV->lastpos = 951 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2307+sub9[sumind0]*1] ;
  VGV->LEVEL[951] = VGV->LEVEL[950]+temp0 ;
}
/* Tx exit with UD rate Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2313+sub9[forind0]*1 ;
  VGV->LEVEL[2313+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2319+sub9[forind0]*1 ;
  VGV->LEVEL[2319+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1
]*VGV->LEVEL[2313+sub9[forind0]*1] ;
}
/* Relapsing to Rx OUD no H total */
 {
  VGV->lastpos = 953 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2319+sub9[sumind0]*1] ;
  VGV->LEVEL[953] = VGV->LEVEL[952]+temp0 ;
}
/* Tx exit with UD rate Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2316+sub9[forind0]*1 ;
  VGV->LEVEL[2316+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*(1.000000-VGV->LEVEL[2368+sub9[forind0]*1]) ;
}
/* Tx exit with UD Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2322+sub9[forind0]*1 ;
  VGV->LEVEL[2322+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[2316+sub9[forind0]*1] ;
}
/* Relapsing to Rx OUD with H total */
 {
  VGV->lastpos = 955 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2322+sub9[sumind0]*1] ;
  VGV->LEVEL[955] = VGV->LEVEL[954]+temp0 ;
}
/* Remission relative to disorder */
 {
  VGV->lastpos = 966 ;
  VGV->LEVEL[966] = VGV->LEVEL[2174]/VGV->LEVEL[2222] ;
}
/* Remitting HUD no MOUD Tx */
 {
  VGV->lastpos = 967 ;
  VGV->LEVEL[967] = VGV->LEVEL[17]*VGV->LEVEL[962] ;
}
/* Remitting Rx OUD no H no MOUD Tx */
 {
  VGV->lastpos = 968 ;
  VGV->LEVEL[968] = VGV->LEVEL[27]*VGV->LEVEL[963] ;
}
/* Remitting Rx OUD with H no MOUD Tx */
 {
  VGV->lastpos = 969 ;
  VGV->LEVEL[969] = VGV->LEVEL[33]*VGV->LEVEL[965] ;
}
/* RepErr */
for(forind0=0;forind0<18;forind0++)
 {
  VGV->lastpos = 970+sub8[forind0]*1 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<34;sumind0++)
    temp0 += VGV->LEVEL[997+sub8[forind0]*34+sub10[sumind0]*1]*VGV->LEVEL[500
+sub10[sumind0]*1] ;
    temp1 = 0.0 ;
for(sumind0=0;sumind0<34;sumind0++)
    temp1 += VGV->LEVEL[997+sub8[forind0]*34+sub10[sumind0]*1]*VGV->LEVEL[500
+sub10[sumind0]*1] ;
  VGV->LEVEL[970+sub8[forind0]*1] = MAX((-0.999000),IF_THEN_ELSE(VGV->LEVEL[2129
]==1.000000,temp0,IF_THEN_ELSE(VGV->LEVEL[617+sub8[forind0]*1]==NA
,temp1,VGV->LEVEL[617+sub8[forind0]*1]))) ;
}
/* RepVar */
for(forind0=0;forind0<18;forind0++)
 {
  VGV->lastpos = 1915+sub8[forind0]*1 ;
  VGV->LEVEL[1915+sub8[forind0]*1] = VGV->LEVEL[2042+sub8[forind0]
*1]*(1.000000+RAMP(1.000000,VGV->LEVEL[569],VGV->LEVEL[569]+1.000000
)*VGV->LEVEL[970+sub8[forind0]*1]) ;
}
/* Rx street supply impact policy */
 {
  VGV->lastpos = 1983 ;
  VGV->LEVEL[1983] = PULSE(VGV->LEVEL[768],VGV->LEVEL[801])*VGV->LEVEL[790
] ;
}
/* Rx street supply readjustment */
 {
  VGV->lastpos = 1984 ;
  VGV->LEVEL[1984] = VGV->LEVEL[34]/VGV->LEVEL[2159] ;
}
/* Rx street supply shocks */
 {
  VGV->lastpos = 1985 ;
  VGV->LEVEL[1985] = VGV->LEVEL[727]+VGV->LEVEL[1983] ;
}
/* Social influence coefficient remission */
 {
  VGV->lastpos = 2076 ;
  VGV->LEVEL[2076] = POWER(VGV->LEVEL[2014],VGV->LEVEL[2085]) ;
}
/* Stabilizing remission HUD */
 {
  VGV->lastpos = 2086 ;
  VGV->LEVEL[2086] = VGV->LEVEL[15]/VGV->LEVEL[2160] ;
}
/* Stabilizing remission Rx OUD no H */
 {
  VGV->lastpos = 2087 ;
  VGV->LEVEL[2087] = VGV->LEVEL[25]/VGV->LEVEL[2160] ;
}
/* Stabilizing remission Rx OUD with H */
 {
  VGV->lastpos = 2088 ;
  VGV->LEVEL[2088] = VGV->LEVEL[31]/VGV->LEVEL[2160] ;
}
/* SynVar */
for(forind0=0;forind0<27;forind0++)
 {
  VGV->lastpos = 2131+sub0[forind0]*1 ;
  VGV->LEVEL[2131+sub0[forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[268+sub0[forind0]
*1]==NA,NA,VGV->LEVEL[1915+sub0[forind0]*1]) ;
}
/* Total annual Tx receipt by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2161+sub9[forind0]*1 ;
  VGV->LEVEL[2161+sub9[forind0]*1] = VGV->LEVEL[2164+sub9[forind0]
*1]/VGV->LEVEL[2231+sub9[forind0]*1] ;
}
/* Total in Remission by MOUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2175+sub9[forind0]*1 ;
  VGV->LEVEL[2175+sub9[forind0]*1] = VGV->LEVEL[388+sub9[forind0]*1
]+VGV->LEVEL[1972+sub9[forind0]*1]+VGV->LEVEL[1978+sub9[forind0]*1
] ;
}
/* Total in Remission in Treatment */
 {
  VGV->lastpos = 2178 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2175+sub9[sumind0]*1] ;
  VGV->LEVEL[2178] = temp0 ;
}
/* Total nondisordered heroin users */
 {
  VGV->lastpos = 2180 ;
  VGV->LEVEL[2180] = VGV->LEVEL[18]+VGV->LEVEL[1982] ;
}
/* Total overdose deaths base heroin */
 {
  VGV->lastpos = 2187 ;
  VGV->LEVEL[2187] = VGV->LEVEL[692]*VGV->LEVEL[666]+VGV->LEVEL[2193
]*VGV->LEVEL[665] ;
}
/* Total overdose deaths synth excess */
 {
  VGV->lastpos = 2200 ;
  VGV->LEVEL[2200] = VGV->LEVEL[692]*VGV->LEVEL[670]+VGV->LEVEL[2193
]*VGV->LEVEL[669] ;
}
/* Total overdose deaths synth */
 {
  VGV->lastpos = 2198 ;
  VGV->LEVEL[2198] = VGV->LEVEL[2199]+VGV->LEVEL[2200] ;
}
/* Total prescription opioid Rx */
 {
  VGV->lastpos = 2207 ;
  VGV->LEVEL[2207] = VGV->LEVEL[729]*VGV->LEVEL[803] ;
}
/* Total Rx misuse initiation */
 {
  VGV->lastpos = 2209 ;
  VGV->LEVEL[2209] = VGV->LEVEL[484]+VGV->LEVEL[488] ;
}
/* Total Rx MME prescribed */
 {
  VGV->lastpos = 2212 ;
  VGV->LEVEL[2212] = VGV->LEVEL[729]*VGV->LEVEL[803]*VGV->LEVEL[46
]*VGV->LEVEL[52] ;
}
/* Total Rx users */
 {
  VGV->lastpos = 2216 ;
  VGV->LEVEL[2216] = VGV->LEVEL[21]+VGV->LEVEL[1961]+VGV->LEVEL[397
]*VGV->LEVEL[370]+VGV->LEVEL[372]*VGV->LEVEL[18] ;
}
/* Total Rx Users corrected DATA */
 {
  VGV->lastpos = 2217 ;
  VGV->LEVEL[2217] = IF_THEN_ELSE(VGV->LEVEL[0]<2019.000000,VGV->LEVEL[1960
]+VGV->LEVEL[1962]+(VGV->LEVEL[386]*VGV->LEVEL[370])+(VGV->LEVEL[2181
]*VGV->LEVEL[372]),NA) ;
}
/* Tx engagement HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2262+sub9[forind0]*1 ;
  VGV->LEVEL[2262+sub9[forind0]*1] = VGV->LEVEL[2247+sub9[forind0]
*1]*VGV->LEVEL[2244+sub9[forind0]*1] ;
}
/* Tx engagement rate actual HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2265+sub9[forind0]*1 ;
  VGV->LEVEL[2265+sub9[forind0]*1] = VGV->LEVEL[2262+sub9[forind0]
*1]/VGV->LEVEL[397] ;
}
/* Total Tx engagement rate HUD */
 {
  VGV->lastpos = 2219 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2265+sub9[sumind0]*1] ;
  VGV->LEVEL[2219] = temp0 ;
}
/* Tx engagement Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2274+sub9[forind0]*1 ;
  VGV->LEVEL[2274+sub9[forind0]*1] = VGV->LEVEL[2250+sub9[forind0]
*1]*VGV->LEVEL[2244+sub9[forind0]*1] ;
}
/* Tx engagement rate actual Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2268+sub9[forind0]*1 ;
  VGV->LEVEL[2268+sub9[forind0]*1] = VGV->LEVEL[2274+sub9[forind0]
*1]/VGV->LEVEL[1976] ;
}
/* Total Tx engagement rate Rx OUD no H */
 {
  VGV->lastpos = 2220 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2268+sub9[sumind0]*1] ;
  VGV->LEVEL[2220] = temp0 ;
}
/* Tx engagement Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2277+sub9[forind0]*1 ;
  VGV->LEVEL[2277+sub9[forind0]*1] = VGV->LEVEL[2253+sub9[forind0]
*1]*VGV->LEVEL[2244+sub9[forind0]*1] ;
}
/* Tx engagement rate actual Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2271+sub9[forind0]*1 ;
  VGV->LEVEL[2271+sub9[forind0]*1] = VGV->LEVEL[2277+sub9[forind0]
*1]/VGV->LEVEL[1982] ;
}
/* Total Tx engagement rate Rx OUD with H */
 {
  VGV->lastpos = 2221 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2271+sub9[sumind0]*1] ;
  VGV->LEVEL[2221] = temp0 ;
}
/* Treatment gap HUD */
 {
  VGV->lastpos = 2224 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2262+sub9[sumind0]*1] ;
    temp1 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp1 += VGV->LEVEL[2356+sub9[sumind0]*1] ;
  VGV->LEVEL[2224] = (1.000000-ZIDZ(0,temp0,VGV->LEVEL[17]*temp1))
 ;
}
/* Treatment gap Rx OUD */
 {
  VGV->lastpos = 2225 ;
    temp0 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp0 += VGV->LEVEL[2274+sub9[sumind0]*1]+VGV->LEVEL[2277+sub9[sumind0]
*1] ;
    temp1 = 0.0 ;
for(sumind0=0;sumind0<3;sumind0++)
    temp1 += VGV->LEVEL[27]*VGV->LEVEL[2360+sub9[sumind0]*1]+VGV->LEVEL[33
]*VGV->LEVEL[2365+sub9[sumind0]*1] ;
  VGV->LEVEL[2225] = (1.000000-ZIDZ(0,temp0,temp1)) ;
}
/* Tx capacity effective utilization */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2238+sub9[forind0]*1 ;
  VGV->LEVEL[2238+sub9[forind0]*1] = ZIDZ(0,VGV->LEVEL[2164+sub9[forind0]
*1],VGV->LEVEL[2235+sub9[forind0]*1]) ;
}
/* Tx demand total by type */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2256+sub9[forind0]*1 ;
  VGV->LEVEL[2256+sub9[forind0]*1] = VGV->LEVEL[2247+sub9[forind0]
*1]+VGV->LEVEL[2250+sub9[forind0]*1]+VGV->LEVEL[2253+sub9[forind0]
*1] ;
}
/* Tx engagement total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2280+sub9[forind0]*1 ;
  VGV->LEVEL[2280+sub9[forind0]*1] = VGV->LEVEL[2262+sub9[forind0]
*1]+VGV->LEVEL[2274+sub9[forind0]*1]+VGV->LEVEL[2277+sub9[forind0]
*1] ;
}
/* Tx exit in remission rate HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2286+sub9[forind0]*1 ;
  VGV->LEVEL[2286+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission HUD */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2283+sub9[forind0]*1 ;
  VGV->LEVEL[2283+sub9[forind0]*1] = VGV->LEVEL[12+sub9[forind0]*1
]*VGV->LEVEL[2286+sub9[forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2289+sub9[forind0]*1 ;
  VGV->LEVEL[2289+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2292+sub9[forind0]*1 ;
  VGV->LEVEL[2292+sub9[forind0]*1] = 1.000000/VGV->LEVEL[2231+sub9[forind0]
*1]*VGV->LEVEL[2368+sub9[forind0]*1] ;
}
/* Tx exit in remission Rx OUD no H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2295+sub9[forind0]*1 ;
  VGV->LEVEL[2295+sub9[forind0]*1] = VGV->LEVEL[22+sub9[forind0]*1
]*VGV->LEVEL[2289+sub9[forind0]*1] ;
}
/* Tx exit in remission Rx OUD with H */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2298+sub9[forind0]*1 ;
  VGV->LEVEL[2298+sub9[forind0]*1] = VGV->LEVEL[28+sub9[forind0]*1
]*VGV->LEVEL[2292+sub9[forind0]*1] ;
}
/* Tx exit in remission total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2301+sub9[forind0]*1 ;
  VGV->LEVEL[2301+sub9[forind0]*1] = VGV->LEVEL[2283+sub9[forind0]
*1]+VGV->LEVEL[2295+sub9[forind0]*1]+VGV->LEVEL[2298+sub9[forind0]
*1] ;
}
/* Tx exit with UD total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2325+sub9[forind0]*1 ;
  VGV->LEVEL[2325+sub9[forind0]*1] = VGV->LEVEL[2307+sub9[forind0]
*1]+VGV->LEVEL[2319+sub9[forind0]*1]+VGV->LEVEL[2322+sub9[forind0]
*1] ;
}
/* Tx exit total */
for(forind0=0;forind0<3;forind0++)
 {
  VGV->lastpos = 2304+sub9[forind0]*1 ;
  VGV->LEVEL[2304+sub9[forind0]*1] = VGV->LEVEL[2301+sub9[forind0]
*1]+VGV->LEVEL[2325+sub9[forind0]*1]+VGV->LEVEL[593+sub9[forind0]*1
]+VGV->LEVEL[688+sub9[forind0]*1] ;
}
} /* comp_aux */
int execute_curloop() {return(0);}
static void vec_arglist_init()
{
ST_INDEX stlist[7] = {16348,16348,2026,2092,11134,2026,2092};
add_vecarg_info(stlist,7);
}
void VEFCC comp_rate(void)
{
mdl_func0();
}

void VEFCC comp_delay(void)
{
mdl_func1();
}

void VEFCC init_time(void)
{
mdl_func2();
}

void VEFCC init_tstep(void)
{
mdl_func3();
}

void VEFCC comp_init(void)
{
mdl_func4();
mdl_func5();
mdl_func6();
}

void VEFCC comp_reinit(void)
{
mdl_func7();
}

void VEFCC comp_tstep(void)
{
mdl_func8();
}

void VEFCC comp_aux(void)
{
mdl_func9();
mdl_func10();
mdl_func11();
mdl_func12();
mdl_func13();
}

