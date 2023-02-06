/*(Mon Jan 16 11:22:34 2023) From SOURCE_FENT_COVID_with manual increase in b - C equations for the model */

#include "simext_parallel.c"

typedef struct tag_workspace {COMPREAL temp0 ; COMPREAL temp1 ; COMPREAL temp2 ; 
COMPREAL temp3 ; COMPREAL temp4 ; COMPREAL temp5 ; COMPREAL temp6 ; 
COMPREAL temp7 ; COMPREAL temp8 ; COMPREAL temp9 ; COMPREAL temp10 ; 
COMPREAL temp11 ; COMPREAL temp12 ; COMPREAL temp13 ; COMPREAL temp14 ; 
COMPREAL temp15 ; COMPREAL temp16 ; COMPREAL temp17 ; COMPREAL temp18 ; 
COMPREAL temp19 ; COMPREAL temp20 ; COMPREAL temp21 ; COMPREAL temp22 ; 
COMPREAL temp23 ; COMPREAL temp24 ; COMPREAL temp25 ; COMPREAL temp26 ; 
COMPREAL temp27 ; COMPREAL temp28 ; COMPREAL temp29 ; COMPREAL temp30 ; 
COMPREAL temp31 ; COMPREAL temp32 ; COMPREAL temp33 ; COMPREAL temp34 ; 
COMPREAL temp35 ; COMPREAL temp36 ; COMPREAL temp37 ; COMPREAL temp38 ; 
COMPREAL temp39 ; COMPREAL temp40 ; COMPREAL temp41 ; COMPREAL temp42 ; 
COMPREAL temp43 ; COMPREAL temp44 ; COMPREAL temp45 ; COMPREAL temp46 ; 
COMPREAL temp47 ; COMPREAL temp48 ; COMPREAL temp49 ; COMPREAL temp50 ; 
COMPREAL temp51 ; COMPREAL temp52 ; COMPREAL temp53 ; COMPREAL temp54 ; 
COMPREAL temp55 ; COMPREAL temp56 ; COMPREAL temp57 ; COMPREAL temp58 ; 
COMPREAL temp59 ; COMPREAL temp60 ; COMPREAL temp61 ; COMPREAL temp62 ; 
COMPREAL temp63 ; COMPREAL temp64 ; COMPREAL temp65 ; COMPREAL temp66 ; 
COMPREAL temp67 ; COMPREAL temp68 ; COMPREAL temp69 ; COMPREAL temp70 ; 
COMPREAL temp71 ; COMPREAL temp72 ; COMPREAL temp73 ; COMPREAL temp74 ; 
COMPREAL temp75 ; COMPREAL temp76 ; COMPREAL temp77 ; COMPREAL temp78 ; 
COMPREAL temp79 ; COMPREAL temp80 ; COMPREAL temp81 ; COMPREAL temp82 ; 
COMPREAL temp83 ; COMPREAL temp84 ; COMPREAL temp85 ; COMPREAL temp86 ; 
COMPREAL temp87 ; COMPREAL temp88 ; COMPREAL temp89 ; COMPREAL temp90 ; 
COMPREAL temp91 ; COMPREAL temp92 ; COMPREAL temp93 ; COMPREAL temp94 ; 
COMPREAL temp95 ; COMPREAL temp96 ; COMPREAL temp97 ; COMPREAL temp98 ; 
COMPREAL temp99 ; COMPREAL temp100 ; COMPREAL temp101 ; COMPREAL temp102 ; 
COMPREAL temp103 ; COMPREAL temp104 ; COMPREAL temp105 ; COMPREAL temp106 ; 
COMPREAL temp107 ; COMPREAL temp108 ; COMPREAL temp109 ; COMPREAL temp110 ; 
COMPREAL temp111 ; COMPREAL temp112 ; COMPREAL temp113 ; COMPREAL temp114 ; 
COMPREAL temp115 ; COMPREAL temp116 ; COMPREAL temp117 ; COMPREAL temp118 ; 
COMPREAL temp119 ; COMPREAL temp120 ; COMPREAL temp121 ; COMPREAL temp122 ; 
COMPREAL temp123 ; COMPREAL temp124 ; COMPREAL temp125 ; COMPREAL temp126 ; 
COMPREAL temp127 ; COMPREAL temp128 ; COMPREAL temp129 ; COMPREAL temp130 ; 
COMPREAL temp131 ; 
int sumind0 ; int forind0 ; 
int sumind1 ; int forind1 ; 

int sumind2 ; int forind2 ; 
int sumind3 ; int forind3 ; 
int sumind4 ; 
int forind4 ; 
int sumind5 ; int forind5 ; 
int sumind6 ; int forind6 ; 

int sumind7 ; int forind7 ; 
int simultid ; 
} WORKSPACE;
#define wrk ((WORKSPACE*)(VGV->workspace))
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
int VEFCC set_gv(GLOB_VARS *VGV)
{ if(!VGV || VGV->vgv_magic_end != &VGV->vgv_magic_end - &VGV->vgv_magic_start ) return 0 ;
VGV->workspace = '\0';
return 1; }
#ifndef LINKEXTERN
#endif
unsigned char *mdl_desc()
{
return("(Mon Jan 16 11:22:34 2023) From SOURCE_FENT_COVID_with manual increase in b") ;
}

/* compute the model rates */
void mdl_func0(GLOB_VARS *VGV)
{double temp[10];
VGV->RATE[0] = 1.0 ;/* this is time */
/* #Perceived risk heroin use current>SMOOTHI# */
 {
  setpos( 1 );
  VGV->RATE[1] = (VGV->LEVEL[746]-VGV->LEVEL[1])/(IF_THEN_ELSE(VGV->LEVEL[745
]<VGV->LEVEL[746],VGV->LEVEL[749],VGV->LEVEL[744])) ;
} /* #Perceived risk heroin use current>SMOOTHI# */

/* #Perceived risk Rx use current>SMOOTHI# */
 {
  setpos( 2 );
  VGV->RATE[2] = (VGV->LEVEL[751]-VGV->LEVEL[2])/(IF_THEN_ELSE(VGV->LEVEL[750
]<VGV->LEVEL[751],VGV->LEVEL[749],VGV->LEVEL[744])) ;
} /* #Perceived risk Rx use current>SMOOTHI# */

/* #Tx intake capacity>DELAY1>LV1# */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 3+sub9[wrk->forind0]*1 );
  VGV->RATE[3+sub9[wrk->forind0]*1] = VGV->LEVEL[2304+sub9[wrk->forind0]
*1]-VGV->LEVEL[35+sub9[wrk->forind0]*1] ;
} /* #Tx intake capacity>DELAY1>LV1# */

/* Cumulative nonfatal overdoses */
 {
  setpos( 7 );
  VGV->RATE[7] = VGV->LEVEL[2182] ;
} /* Cumulative nonfatal overdoses */

/* Cumulative Nx utilization deaths averted */
 {
  setpos( 8 );
  VGV->RATE[8] = VGV->LEVEL[658]+VGV->LEVEL[659] ;
} /* Cumulative Nx utilization deaths averted */

/* Cumulative overdose deaths */
 {
  setpos( 9 );
  VGV->RATE[9] = VGV->LEVEL[2186] ;
} /* Cumulative overdose deaths */

/* Cumulative overdose deaths synth excess */
 {
  setpos( 10 );
  VGV->RATE[10] = VGV->LEVEL[2200] ;
} /* Cumulative overdose deaths synth excess */

/* Cumulative UD person years */
 {
  setpos( 11 );
  VGV->RATE[11] = VGV->LEVEL[2222] ;
} /* Cumulative UD person years */

/* HUD by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 12+sub9[wrk->forind0]*1 );
  VGV->RATE[12+sub9[wrk->forind0]*1] = VGV->LEVEL[2262+sub9[wrk->forind0]
*1]-VGV->LEVEL[2283+sub9[wrk->forind0]*1]-VGV->LEVEL[2307+sub9[wrk->forind0]
*1]-VGV->LEVEL[588+sub9[wrk->forind0]*1]-VGV->LEVEL[685+sub9[wrk->forind0]
*1] ;
} /* HUD by MOUD */

/* HUD in remission */
 {
  setpos( 15 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2283+sub9[wrk->sumind0]*1] ;
  VGV->RATE[15] = wrk->temp0-VGV->LEVEL[591]-VGV->LEVEL[950]+VGV->LEVEL[967
]-VGV->LEVEL[2086] ;
} /* HUD in remission */

/* HUD in stable remission */
 {
  setpos( 16 );
  VGV->RATE[16] = VGV->LEVEL[2086]-VGV->LEVEL[592] ;
} /* HUD in stable remission */

/* HUD no MOUD */
 {
  setpos( 17 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2307+sub9[wrk->sumind0]*1]-VGV->LEVEL[2262
+sub9[wrk->sumind0]*1] ;
  VGV->RATE[17] = VGV->LEVEL[322]+VGV->LEVEL[329]-VGV->LEVEL[967]-
VGV->LEVEL[587]-VGV->LEVEL[684]+VGV->LEVEL[950]+wrk->temp0 ;
} /* HUD no MOUD */

/* Nondisordered heroin use */
 {
  setpos( 18 );
  VGV->RATE[18] = VGV->LEVEL[473]+VGV->LEVEL[478]-VGV->LEVEL[322]-
VGV->LEVEL[565]-VGV->LEVEL[567]-VGV->LEVEL[597]-VGV->LEVEL[692] ;
} /* Nondisordered heroin use */

/* Projected cumulative overdose deaths */
 {
  setpos( 19 );
  VGV->RATE[19] = VGV->LEVEL[843] ;
} /* Projected cumulative overdose deaths */

/* Projected cumulative UD person years */
 {
  setpos( 20 );
  VGV->RATE[20] = VGV->LEVEL[844] ;
} /* Projected cumulative UD person years */

/* Rx misuse no PY heroin */
 {
  setpos( 21 );
  VGV->RATE[21] = VGV->LEVEL[484]+VGV->LEVEL[488]-VGV->LEVEL[330]-
VGV->LEVEL[478]-VGV->LEVEL[568]+VGV->LEVEL[565]-VGV->LEVEL[596]-VGV->LEVEL[707
] ;
} /* Rx misuse no PY heroin */

/* Rx OUD no heroin by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 22+sub9[wrk->forind0]*1 );
  VGV->RATE[22+sub9[wrk->forind0]*1] = VGV->LEVEL[2274+sub9[wrk->forind0]
*1]-VGV->LEVEL[2295+sub9[wrk->forind0]*1]-VGV->LEVEL[2319+sub9[wrk->forind0]
*1]-VGV->LEVEL[608+sub9[wrk->forind0]*1]-VGV->LEVEL[709+sub9[wrk->forind0]
*1] ;
} /* Rx OUD no heroin by MOUD */

/* Rx OUD no heroin in remission */
 {
  setpos( 25 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2295+sub9[wrk->sumind0]*1] ;
  VGV->RATE[25] = wrk->temp0-VGV->LEVEL[606]-VGV->LEVEL[952]+VGV->LEVEL[968
]-VGV->LEVEL[2087] ;
} /* Rx OUD no heroin in remission */

/* Rx OUD no heroin in stable remission */
 {
  setpos( 26 );
  VGV->RATE[26] = VGV->LEVEL[2087]-VGV->LEVEL[607] ;
} /* Rx OUD no heroin in stable remission */

/* Rx OUD no PY heroin no MOUD */
 {
  setpos( 27 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2319+sub9[wrk->sumind0]*1]-VGV->LEVEL[2274
+sub9[wrk->sumind0]*1] ;
  VGV->RATE[27] = VGV->LEVEL[330]+VGV->LEVEL[566]-VGV->LEVEL[481]-
VGV->LEVEL[968]-VGV->LEVEL[605]-VGV->LEVEL[708]+VGV->LEVEL[952]+wrk->temp0
 ;
} /* Rx OUD no PY heroin no MOUD */

/* Rx OUD with heroin by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 28+sub9[wrk->forind0]*1 );
  VGV->RATE[28+sub9[wrk->forind0]*1] = VGV->LEVEL[2277+sub9[wrk->forind0]
*1]-VGV->LEVEL[2298+sub9[wrk->forind0]*1]-VGV->LEVEL[2322+sub9[wrk->forind0]
*1]-VGV->LEVEL[614+sub9[wrk->forind0]*1]-VGV->LEVEL[713+sub9[wrk->forind0]
*1] ;
} /* Rx OUD with heroin by MOUD */

/* Rx OUD with heroin in remission */
 {
  setpos( 31 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2298+sub9[wrk->sumind0]*1] ;
  VGV->RATE[31] = wrk->temp0-VGV->LEVEL[612]-VGV->LEVEL[954]+VGV->LEVEL[969
]-VGV->LEVEL[2088] ;
} /* Rx OUD with heroin in remission */

/* Rx OUD with heroin in stable remission */
 {
  setpos( 32 );
  VGV->RATE[32] = VGV->LEVEL[2088]-VGV->LEVEL[613] ;
} /* Rx OUD with heroin in stable remission */

/* Rx OUD with PY heroin no MOUD */
 {
  setpos( 33 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2322+sub9[wrk->sumind0]*1]-VGV->LEVEL[2277
+sub9[wrk->sumind0]*1] ;
  VGV->RATE[33] = VGV->LEVEL[481]-VGV->LEVEL[329]-VGV->LEVEL[566]-
VGV->LEVEL[969]-VGV->LEVEL[611]-VGV->LEVEL[712]+VGV->LEVEL[954]+wrk->temp0
 ;
} /* Rx OUD with PY heroin no MOUD */

/* Rx street supply disruption */
 {
  setpos( 34 );
  VGV->RATE[34] = VGV->LEVEL[1985]-VGV->LEVEL[1984] ;
} /* Rx street supply disruption */

} /* comp_rate */

/* compute the delays */
void mdl_func1(GLOB_VARS *VGV)
{double temp[10];
/* Bup effective capacity rampup fraction */
 {
  setpos( 6 );
  VGV->RATE[6] = DELAY_N_a(0,STEP(1.000000,VGV->LEVEL[210]),VGV->LEVEL[205
]) ;
} /* Bup effective capacity rampup fraction */

} /* comp_delay */

/* initialize time */
void mdl_func2(GLOB_VARS *VGV)
{ double temp[10];
 if (!VGV->workspace) VGV->workspace = (*VGV->alloc_simmem)(0,0,sizeof(WORKSPACE)); 
 vec_arglist_init(VGV);
VGV->LEVEL[0] = VGV->LEVEL[469] ;
} /* init_time */

/* initialize time step */
void mdl_func3(GLOB_VARS *VGV)
{double temp[10];
/* a constant no need to do anything */
} /* init_tstep */

/* State variable initial value computation*/
void mdl_func4(GLOB_VARS *VGV)
{double temp[10];
/* Time */
 {
  setpos( 0 );
  VGV->LEVEL[0] = VGV->LEVEL[469] ;
}
/* NSDUH misuse redefinition effect */
 {
  setpos( 644 );
  VGV->LEVEL[644] = 1.000000-RAMP(VGV->LEVEL[645]/(1.000000+VGV->LEVEL[645
])/VGV->LEVEL[683],VGV->LEVEL[646],(VGV->LEVEL[646]+VGV->LEVEL[683
])) ;
}
/* Rx misuse no PY heroin NSDUH redef corrected */
 {
  setpos( 1960 );
  VGV->LEVEL[1960] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[644
]*VGV->LEVEL[1959],NA) ;
}
/* Tx average duration */
 {
  setpos( 2226+0*1 );
  VGV->LEVEL[2226+0*1] = VGV->LEVEL[2229] ;
}
 {
  setpos( 2226+1*1 );
  VGV->LEVEL[2226+1*1] = VGV->LEVEL[2230] ;
}
 {
  setpos( 2226+2*1 );
  VGV->LEVEL[2226+2*1] = VGV->LEVEL[2234] ;
}
/* Tx average duration net */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2231+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2231+sub9[wrk->forind0]*1] = VGV->LEVEL[2226+sub9[wrk->forind0]
*1]*(1.000000+RAMP(VGV->LEVEL[793]/VGV->LEVEL[801],VGV->LEVEL[768]
,VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Tx success fraction */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2368+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2368+sub9[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[2231
+sub9[wrk->forind0]*1]<=VGV->LEVEL[2371],ZIDZ(0,POWER(VGV->LEVEL[2372
],2.000000),1.000000+POWER(VGV->LEVEL[2372],2.000000))*EXP((VGV->LEVEL[2373
]/VGV->LEVEL[2372])*(VGV->LEVEL[2231+sub9[wrk->forind0]*1]-VGV->LEVEL[2371
])),1.000000-ZIDZ(0,1.000000,1.000000+POWER(VGV->LEVEL[2372],2.000000
))*EXP((-VGV->LEVEL[2373])*VGV->LEVEL[2372]*(VGV->LEVEL[2231+sub9[wrk->forind0]
*1]-VGV->LEVEL[2371])))*VGV->LEVEL[2374] ;
}
/* Remission fraction in Tx MMT */
 {
  setpos( 960 );
  VGV->LEVEL[960] = VGV->LEVEL[2368+1*1] ;
}
/* Initial stock base values */
 {
  setpos( 429+0*1 );
  VGV->LEVEL[429+0*1] = VGV->LEVEL[1960] ;
}
 {
  setpos( 429+1*1 );
  VGV->LEVEL[429+1*1] = VGV->LEVEL[570] ;
}
 {
  setpos( 429+3*1 );
  VGV->LEVEL[429+3*1] = VGV->LEVEL[2337]*(1.000000-VGV->LEVEL[409]
-VGV->LEVEL[410]) ;
}
 {
  setpos( 429+5*1 );
  VGV->LEVEL[429+5*1] = VGV->LEVEL[1975] ;
}
 {
  setpos( 429+6*1 );
  VGV->LEVEL[429+6*1] = VGV->LEVEL[413]*(1.000000-VGV->LEVEL[399])
*(1.000000-VGV->LEVEL[960]) ;
}
 {
  setpos( 429+9*1 );
  VGV->LEVEL[429+9*1] = VGV->LEVEL[2337]*VGV->LEVEL[410] ;
}
 {
  setpos( 429+11*1 );
  VGV->LEVEL[429+11*1] = VGV->LEVEL[1977] ;
}
 {
  setpos( 429+12*1 );
  VGV->LEVEL[429+12*1] = VGV->LEVEL[413]*VGV->LEVEL[399]*(1.000000
-VGV->LEVEL[960]) ;
}
 {
  setpos( 429+15*1 );
  VGV->LEVEL[429+15*1] = VGV->LEVEL[2337]*VGV->LEVEL[409] ;
}
 {
  setpos( 429+17*1 );
  VGV->LEVEL[429+17*1] = VGV->LEVEL[386] ;
}
 {
  setpos( 429+18*1 );
  VGV->LEVEL[429+18*1] = VGV->LEVEL[405]*(1.000000-VGV->LEVEL[960]
) ;
}
 {
  setpos( 429+7*1 );
  VGV->LEVEL[429+7*1] = VGV->LEVEL[414]*(1.000000-VGV->LEVEL[399])
 ;
}
 {
  setpos( 429+13*1 );
  VGV->LEVEL[429+13*1] = VGV->LEVEL[414]*VGV->LEVEL[399] ;
}
 {
  setpos( 429+19*1 );
  VGV->LEVEL[429+19*1] = VGV->LEVEL[407] ;
}
/* Initial NDHU */
 {
  setpos( 411 );
  VGV->LEVEL[411] = VGV->LEVEL[429+1*1]*VGV->LEVEL[449+1*1] ;
}
/* Nondisordered heroin use */
 {
  setpos( 18 );
  VGV->LEVEL[18] = VGV->LEVEL[411] ;
}
/* Overdose rate base NDHU */
 {
  setpos( 717 );
  VGV->LEVEL[717] = VGV->LEVEL[716]*VGV->LEVEL[720] ;
}
/* Projection last data time */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 900+sub6[wrk->forind0]*1 );
  VGV->LEVEL[900+sub6[wrk->forind0]*1] = GET_DATA_LAST_TIME(vecarg_assign(0,&(
VGV->LEVEL[889+sub6[wrk->forind0]*1]))) ;
}
/* Projection start time */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 933+sub6[wrk->forind0]*1 );
  VGV->LEVEL[933+sub6[wrk->forind0]*1] = MIN(VGV->LEVEL[900+sub6[wrk->forind0]
*1],VGV->LEVEL[547+sub6[wrk->forind0]*1]) ;
}
/* Projection last data value */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 911+sub6[wrk->forind0]*1 );
  VGV->LEVEL[911+sub6[wrk->forind0]*1] = GET_DATA_AT_TIME(vecarg_assign(1,&(
VGV->LEVEL[889+sub6[wrk->forind0]*1])),VGV->LEVEL[933+sub6[wrk->forind0]
*1]) ;
}
/* Projection curve end value */
 {
  setpos( 867+0*1 );
  VGV->LEVEL[867+0*1] = VGV->LEVEL[882] ;
}
 {
  setpos( 867+2*1 );
  VGV->LEVEL[867+2*1] = VGV->LEVEL[883] ;
}
 {
  setpos( 867+9*1 );
  VGV->LEVEL[867+9*1] = VGV->LEVEL[879] ;
}
 {
  setpos( 867+3*1 );
  VGV->LEVEL[867+3*1] = VGV->LEVEL[880] ;
}
 {
  setpos( 867+4*1 );
  VGV->LEVEL[867+4*1] = VGV->LEVEL[884] ;
}
 {
  setpos( 867+5*1 );
  VGV->LEVEL[867+5*1] = VGV->LEVEL[888] ;
}
 {
  setpos( 867+6*1 );
  VGV->LEVEL[867+6*1] = VGV->LEVEL[886] ;
}
 {
  setpos( 867+1*1 );
  VGV->LEVEL[867+1*1] = VGV->LEVEL[885] ;
}
 {
  setpos( 867+10*1 );
  VGV->LEVEL[867+10*1] = VGV->LEVEL[878] ;
}
 {
  setpos( 867+7*1 );
  VGV->LEVEL[867+7*1] = VGV->LEVEL[887] ;
}
 {
  setpos( 867+8*1 );
  VGV->LEVEL[867+8*1] = VGV->LEVEL[881] ;
}
/* Projection curve end time */
 {
  setpos( 845+0*1 );
  VGV->LEVEL[845+0*1] = VGV->LEVEL[860] ;
}
 {
  setpos( 845+2*1 );
  VGV->LEVEL[845+2*1] = VGV->LEVEL[861] ;
}
 {
  setpos( 845+9*1 );
  VGV->LEVEL[845+9*1] = VGV->LEVEL[857] ;
}
 {
  setpos( 845+3*1 );
  VGV->LEVEL[845+3*1] = VGV->LEVEL[858] ;
}
 {
  setpos( 845+4*1 );
  VGV->LEVEL[845+4*1] = VGV->LEVEL[862] ;
}
 {
  setpos( 845+5*1 );
  VGV->LEVEL[845+5*1] = VGV->LEVEL[866] ;
}
 {
  setpos( 845+6*1 );
  VGV->LEVEL[845+6*1] = VGV->LEVEL[864] ;
}
 {
  setpos( 845+1*1 );
  VGV->LEVEL[845+1*1] = VGV->LEVEL[863] ;
}
 {
  setpos( 845+10*1 );
  VGV->LEVEL[845+10*1] = VGV->LEVEL[856] ;
}
 {
  setpos( 845+7*1 );
  VGV->LEVEL[845+7*1] = VGV->LEVEL[865] ;
}
 {
  setpos( 845+8*1 );
  VGV->LEVEL[845+8*1] = VGV->LEVEL[859] ;
}
/* Logistic growth curve */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 534+sub6[wrk->forind0]*1 );
  VGV->LEVEL[534+sub6[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[867
+sub6[wrk->forind0]*1]>VGV->LEVEL[911+sub6[wrk->forind0]*1],MIN(VGV->LEVEL[867
+sub6[wrk->forind0]*1],((VGV->LEVEL[867+sub6[wrk->forind0]*1]-VGV->LEVEL[911
+sub6[wrk->forind0]*1])/0.500000)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845
+sub6[wrk->forind0]*1]-VGV->LEVEL[933+sub6[wrk->forind0]*1]))*(VGV->LEVEL[0
]-VGV->LEVEL[933+sub6[wrk->forind0]*1])))+(VGV->LEVEL[867+sub6[wrk->forind0]
*1]-(VGV->LEVEL[867+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]
*1])/0.500000)),MAX(VGV->LEVEL[867+sub6[wrk->forind0]*1],((VGV->LEVEL[867
+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]*1])/0.500000
)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845+sub6[wrk->forind0]*1]
-VGV->LEVEL[933+sub6[wrk->forind0]*1]))*(VGV->LEVEL[0]-VGV->LEVEL[933
+sub6[wrk->forind0]*1])))+(VGV->LEVEL[867+sub6[wrk->forind0]*1]-(VGV->LEVEL[867
+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]*1])/0.500000
))) ;
}
/* Projection output data */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 922+sub6[wrk->forind0]*1 );
  VGV->LEVEL[922+sub6[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0
]<=VGV->LEVEL[933+sub6[wrk->forind0]*1],VGV->LEVEL[889+sub6[wrk->forind0]
*1],VGV->LEVEL[2117+sub6[wrk->forind0]*1]*VGV->LEVEL[911+sub6[wrk->forind0]
*1]+(1.000000-VGV->LEVEL[2117+sub6[wrk->forind0]*1])*VGV->LEVEL[534
+sub6[wrk->forind0]*1]) ;
}
/* Fentanyl penetration curve */
 {
  setpos( 353 );
  VGV->LEVEL[353] = VGV->LEVEL[922+0*1]*(1.000000-VGV->LEVEL[2130]
) ;
}
/* Fentanyl effect on OD rate H max net */
 {
  setpos( 350 );
  VGV->LEVEL[350] = ((1.000000-VGV->LEVEL[2128])*VGV->LEVEL[349]+VGV->LEVEL[2128
]*VGV->LEVEL[351])*(1.000000+RAMP(VGV->LEVEL[774]/VGV->LEVEL[801],
VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Overdose rate net NDHU */
 {
  setpos( 722 );
  VGV->LEVEL[722] = VGV->LEVEL[717]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Base survival probability H OD */
 {
  setpos( 58 );
  VGV->LEVEL[58] = VGV->LEVEL[59]*VGV->LEVEL[61] ;
}
/* Base survival probability fentanyl OD */
 {
  setpos( 57 );
  VGV->LEVEL[57] = VGV->LEVEL[58]*VGV->LEVEL[348] ;
}
/* Base survival probability net H OD */
 {
  setpos( 60 );
  VGV->LEVEL[60] = MAX(0,VGV->LEVEL[58]+(VGV->LEVEL[57]-VGV->LEVEL[58
])*VGV->LEVEL[353]) ;
}
/* Probability OD witnessed net */
 {
  setpos( 840 );
  VGV->LEVEL[840] = VGV->LEVEL[839]+RAMP(IF_THEN_ELSE(VGV->LEVEL[786
]>=0,VGV->LEVEL[786]*(1.000000-VGV->LEVEL[839]),VGV->LEVEL[786]*VGV->LEVEL[839
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Nx kit distribution efficiency net */
 {
  setpos( 648 );
  VGV->LEVEL[648] = VGV->LEVEL[647]*(1.000000+RAMP(VGV->LEVEL[782]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Nx kits distributed net */
 {
  setpos( 653 );
  VGV->LEVEL[653] = VGV->LEVEL[922+1*1]*(1.000000+RAMP(VGV->LEVEL[783
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Nx kits distributed H user */
 {
  setpos( 651 );
  VGV->LEVEL[651] = VGV->LEVEL[653]*VGV->LEVEL[359] ;
}
/* Nx kits per 100k population H user */
 {
  setpos( 655 );
  VGV->LEVEL[655] = VGV->LEVEL[651]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander heroin */
 {
  setpos( 834 );
  VGV->LEVEL[834] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[655
]) ;
}
/* Probability of calling emergency services net */
 {
  setpos( 842 );
  VGV->LEVEL[842] = VGV->LEVEL[841]+RAMP(IF_THEN_ELSE(VGV->LEVEL[787
]>=0,VGV->LEVEL[787]*(1.000000-VGV->LEVEL[841]),VGV->LEVEL[787]*VGV->LEVEL[841
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Probability OD death not averted heroin user */
 {
  setpos( 837 );
  VGV->LEVEL[837] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[834
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate NDHU */
 {
  setpos( 700 );
  VGV->LEVEL[700] = VGV->LEVEL[722]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death NDHU */
 {
  setpos( 692 );
  VGV->LEVEL[692] = VGV->LEVEL[18]*VGV->LEVEL[700] ;
}
/* Initial HUD total */
 {
  setpos( 408 );
  VGV->LEVEL[408] = VGV->LEVEL[429+17*1]*VGV->LEVEL[449+17*1] ;
}
/* Remission fraction in Tx Bup */
 {
  setpos( 959 );
  VGV->LEVEL[959] = VGV->LEVEL[2368+0*1] ;
}
/* Remission fraction in Tx Viv */
 {
  setpos( 961 );
  VGV->LEVEL[961] = VGV->LEVEL[2368+2*1] ;
}
/* Remission fraction in Tx */
 {
  setpos( 956+0*1 );
  VGV->LEVEL[956+0*1] = VGV->LEVEL[959] ;
}
 {
  setpos( 956+1*1 );
  VGV->LEVEL[956+1*1] = VGV->LEVEL[960] ;
}
}
void mdl_func5(GLOB_VARS *VGV) ;
void mdl_func5(GLOB_VARS *VGV){double temp[10];
 {
  setpos( 956+2*1 );
  VGV->LEVEL[956+2*1] = VGV->LEVEL[961] ;
}
/* Initial HUD in MOUD Tx */
 {
  setpos( 401+0*1 );
  VGV->LEVEL[401+0*1] = VGV->LEVEL[429+14*1]*VGV->LEVEL[449+14*1] ;
}
 {
  setpos( 401+1*1 );
  VGV->LEVEL[401+1*1] = VGV->LEVEL[429+15*1]*VGV->LEVEL[449+15*1] ;
}
 {
  setpos( 401+2*1 );
  VGV->LEVEL[401+2*1] = VGV->LEVEL[429+16*1]*VGV->LEVEL[449+16*1] ;
}
/* Initial HUD */
 {
  setpos( 400 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[401+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[400] = VGV->LEVEL[408]-wrk->temp0 ;
}
/* HUD no MOUD */
 {
  setpos( 17 );
  VGV->LEVEL[17] = VGV->LEVEL[400] ;
}
/* Overdose rate net HUD */
 {
  setpos( 721 );
  VGV->LEVEL[721] = VGV->LEVEL[716]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Overdose death rate HUD */
 {
  setpos( 698 );
  VGV->LEVEL[698] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death HUD */
 {
  setpos( 684 );
  VGV->LEVEL[684] = VGV->LEVEL[17]*VGV->LEVEL[698] ;
}
/* HUD by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 12+sub9[wrk->forind0]*1 );
  VGV->LEVEL[12+sub9[wrk->forind0]*1] = VGV->LEVEL[401+sub9[wrk->forind0]
*1] ;
}
/* OD death rate HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 671+sub9[wrk->forind0]*1 );
  VGV->LEVEL[671+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[698]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 685+sub9[wrk->forind0]*1 );
  VGV->LEVEL[685+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[671+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths HUD */
 {
  setpos( 2193 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[685+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2193] = VGV->LEVEL[684]+wrk->temp0 ;
}
/* Total overdose deaths heroin */
 {
  setpos( 2191 );
  VGV->LEVEL[2191] = VGV->LEVEL[692]+VGV->LEVEL[2193] ;
}
/* Nonfatal OD ratio HUD */
 {
  setpos( 574 );
  VGV->LEVEL[574] = VGV->LEVEL[721]/VGV->LEVEL[698]-1.000000 ;
}
/* Nonfatal ODs HUD */
 {
  setpos( 582 );
  VGV->LEVEL[582] = VGV->LEVEL[2193]*VGV->LEVEL[574] ;
}
/* Nonfatal OD ratio NDHU */
 {
  setpos( 575 );
  VGV->LEVEL[575] = VGV->LEVEL[722]/VGV->LEVEL[700]-1.000000 ;
}
/* Nonfatal ODs NDHU */
 {
  setpos( 583 );
  VGV->LEVEL[583] = VGV->LEVEL[692]*VGV->LEVEL[575] ;
}
/* Total nonfatal overdoses heroin */
 {
  setpos( 2183 );
  VGV->LEVEL[2183] = VGV->LEVEL[582]+VGV->LEVEL[583] ;
}
/* Perceived risk heroin use indicated */
 {
  setpos( 746 );
  VGV->LEVEL[746] = VGV->LEVEL[2191]+VGV->LEVEL[2183]*VGV->LEVEL[762
] ;
}
/* Perceived risk heroin use reference */
 {
  setpos( 747 );
  VGV->LEVEL[747] = VGV->LEVEL[746] ;
}
/* #Perceived risk heroin use current>SMOOTHI# */
 {
  setpos( 1 );
  VGV->LEVEL[1] = VGV->LEVEL[747] ;
}
/* Patients receiving opioid prescription annual */
 {
  setpos( 729 );
  VGV->LEVEL[729] = VGV->LEVEL[922+6*1]*(1.000000+RAMP(VGV->LEVEL[784
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average days per prescription */
 {
  setpos( 46 );
  VGV->LEVEL[46] = VGV->LEVEL[922+8*1]*(1.000000+RAMP(VGV->LEVEL[773
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Prescriptions per person */
 {
  setpos( 803 );
  VGV->LEVEL[803] = VGV->LEVEL[922+7*1]*(1.000000+RAMP(VGV->LEVEL[785
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average duration of medical opioid use */
 {
  setpos( 50 );
  VGV->LEVEL[50] = VGV->LEVEL[46]*VGV->LEVEL[803]*VGV->LEVEL[682] ;
}
/* Patients with current month opioid Rx */
 {
  setpos( 733 );
  VGV->LEVEL[733] = VGV->LEVEL[729]*VGV->LEVEL[50] ;
}
/* Overdose death MU */
 {
  setpos( 691 );
  VGV->LEVEL[691] = VGV->LEVEL[733]*VGV->LEVEL[695] ;
}
/* Initial Rx misuse no H */
 {
  setpos( 412 );
  VGV->LEVEL[412] = VGV->LEVEL[429+0*1]*VGV->LEVEL[449+0*1] ;
}
/* Rx misuse no PY heroin */
 {
  setpos( 21 );
  VGV->LEVEL[21] = VGV->LEVEL[412] ;
}
/* Nx kits distributed Rx user */
 {
  setpos( 654 );
  VGV->LEVEL[654] = VGV->LEVEL[653]*(1.000000-VGV->LEVEL[359]) ;
}
/* Nx kits per 100k population Rx user */
 {
  setpos( 656 );
  VGV->LEVEL[656] = VGV->LEVEL[654]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander Rx */
 {
  setpos( 836 );
  VGV->LEVEL[836] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[656
]) ;
}
/* Probability OD death not averted Rx user */
 {
  setpos( 838 );
  VGV->LEVEL[838] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[836
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate Rx misuse */
 {
  setpos( 701 );
  VGV->LEVEL[701] = VGV->LEVEL[718]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death Rx misuse */
 {
  setpos( 707 );
  VGV->LEVEL[707] = VGV->LEVEL[21]*VGV->LEVEL[701] ;
}
/* Initial Rx OUD no H total */
 {
  setpos( 421 );
  VGV->LEVEL[421] = VGV->LEVEL[429+5*1]*VGV->LEVEL[449+5*1] ;
}
/* Initial Rx OUD no H in Tx */
 {
  setpos( 418+0*1 );
  VGV->LEVEL[418+0*1] = VGV->LEVEL[429+2*1]*VGV->LEVEL[449+2*1] ;
}
 {
  setpos( 418+1*1 );
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  setpos( 418+2*1 );
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* Initial Rx OUD no H */
 {
  setpos( 415 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[418+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[415] = VGV->LEVEL[421]-wrk->temp0 ;
}
/* Rx OUD no PY heroin no MOUD */
 {
  setpos( 27 );
  VGV->LEVEL[27] = VGV->LEVEL[415] ;
}
/* Overdose death rate base Rx OUD */
 {
  setpos( 697 );
  VGV->LEVEL[697] = VGV->LEVEL[719]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death rate synth baseline */
 {
  setpos( 704 );
  VGV->LEVEL[704] = VGV->LEVEL[723]*(1.000000-VGV->LEVEL[57])*VGV->LEVEL[838
] ;
}
/* Overdose death rate Rx OUD no H */
 {
  setpos( 702 );
  VGV->LEVEL[702] = VGV->LEVEL[697]+VGV->LEVEL[704] ;
}
/* Overdose death Rx OUD no H */
 {
  setpos( 708 );
  VGV->LEVEL[708] = VGV->LEVEL[27]*VGV->LEVEL[702] ;
}
/* Rx OUD no heroin by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 22+sub9[wrk->forind0]*1 );
  VGV->LEVEL[22+sub9[wrk->forind0]*1] = VGV->LEVEL[418+sub9[wrk->forind0]
*1] ;
}
/* OD death rate Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 674+sub9[wrk->forind0]*1 );
  VGV->LEVEL[674+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[702]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 709+sub9[wrk->forind0]*1 );
  VGV->LEVEL[709+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[674+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths Rx OUD no H */
 {
  setpos( 2196 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[709+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2196] = VGV->LEVEL[708]+wrk->temp0 ;
}
/* Initial Rx OUD with H total */
 {
  setpos( 428 );
  VGV->LEVEL[428] = VGV->LEVEL[429+11*1]*VGV->LEVEL[449+11*1] ;
}
/* Initial Rx OUD with H in Tx */
 {
  setpos( 425+0*1 );
  VGV->LEVEL[425+0*1] = VGV->LEVEL[429+8*1]*VGV->LEVEL[449+8*1] ;
}
 {
  setpos( 425+1*1 );
  VGV->LEVEL[425+1*1] = VGV->LEVEL[429+9*1]*VGV->LEVEL[449+9*1] ;
}
 {
  setpos( 425+2*1 );
  VGV->LEVEL[425+2*1] = VGV->LEVEL[429+10*1]*VGV->LEVEL[449+10*1] ;
}
/* Initial Rx OUD with H */
 {
  setpos( 422 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[425+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[422] = VGV->LEVEL[428]-wrk->temp0 ;
}
/* Rx OUD with PY heroin no MOUD */
 {
  setpos( 33 );
  VGV->LEVEL[33] = VGV->LEVEL[422] ;
}
/* Overdose death rate Rx OUD with H */
 {
  setpos( 703 );
  VGV->LEVEL[703] = VGV->LEVEL[697] ;
}
/* Overdose death Rx OUD with H */
 {
  setpos( 712 );
  VGV->LEVEL[712] = VGV->LEVEL[33]*VGV->LEVEL[703] ;
}
/* Rx OUD with heroin by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 28+sub9[wrk->forind0]*1 );
  VGV->LEVEL[28+sub9[wrk->forind0]*1] = VGV->LEVEL[425+sub9[wrk->forind0]
*1] ;
}
/* OD death rate Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 677+sub9[wrk->forind0]*1 );
  VGV->LEVEL[677+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[703]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 713+sub9[wrk->forind0]*1 );
  VGV->LEVEL[713+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[677+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths Rx OUD with H */
 {
  setpos( 2197 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[713+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2197] = VGV->LEVEL[712]+wrk->temp0 ;
}
/* Total overdose deaths Rx */
 {
  setpos( 2195 );
  VGV->LEVEL[2195] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]+VGV->LEVEL[2197] ;
}
/* Overdose rate total Rx OUD no H */
 {
  setpos( 724 );
  VGV->LEVEL[724] = VGV->LEVEL[719]+VGV->LEVEL[723] ;
}
/* Nonfatal OD ratio Rx OUD no H */
 {
  setpos( 578 );
  VGV->LEVEL[578] = VGV->LEVEL[724]/VGV->LEVEL[702]-1.000000 ;
}
/* Nonfatal ODs Rx OUD no H */
 {
  setpos( 585 );
  VGV->LEVEL[585] = VGV->LEVEL[2196]*VGV->LEVEL[578] ;
}
/* Nonfatal OD ratio Rx misuse */
 {
  setpos( 577 );
  VGV->LEVEL[577] = VGV->LEVEL[718]/VGV->LEVEL[701]-1.000000 ;
}
/* Nonfatal ODs Rx misuse */
 {
  setpos( 584 );
  VGV->LEVEL[584] = VGV->LEVEL[707]*VGV->LEVEL[577] ;
}
/* Nonfatal OD ratio Rx OUD with H */
 {
  setpos( 579 );
  VGV->LEVEL[579] = VGV->LEVEL[719]/VGV->LEVEL[703]-1.000000 ;
}
/* Nonfatal ODs Rx OUD with H */
 {
  setpos( 586 );
  VGV->LEVEL[586] = VGV->LEVEL[2197]*VGV->LEVEL[579] ;
}
/* Total nonfatal overdoses Rx */
 {
  setpos( 2184 );
  VGV->LEVEL[2184] = VGV->LEVEL[585]+VGV->LEVEL[584]+VGV->LEVEL[586
] ;
}
/* Perceived risk Rx use indicated */
 {
  setpos( 751 );
  VGV->LEVEL[751] = VGV->LEVEL[2195]+VGV->LEVEL[762]*VGV->LEVEL[2184
] ;
}
/* Perceived risk Rx use reference */
 {
  setpos( 752 );
  VGV->LEVEL[752] = VGV->LEVEL[751] ;
}
/* #Perceived risk Rx use current>SMOOTHI# */
 {
  setpos( 2 );
  VGV->LEVEL[2] = VGV->LEVEL[752] ;
}
/* Tx exit in remission rate HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2286+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2286+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2283+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2283+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[2286+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2289+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2289+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2295+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2295+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[2289+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2292+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2292+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2298+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2298+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[2292+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2301+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2301+sub9[wrk->forind0]*1] = VGV->LEVEL[2283+sub9[wrk->forind0]
*1]+VGV->LEVEL[2295+sub9[wrk->forind0]*1]+VGV->LEVEL[2298+sub9[wrk->forind0]
*1] ;
}
/* Tx exit with UD rate HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2310+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2310+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2307+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2307+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[2310+sub9[wrk->forind0]*1] ;
}
/* Tx exit with UD rate Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2313+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2313+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2319+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2319+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[2313+sub9[wrk->forind0]*1] ;
}
/* Tx exit with UD rate Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2316+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2316+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2322+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2322+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[2316+sub9[wrk->forind0]*1] ;
}
/* Tx exit with UD total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2325+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2325+sub9[wrk->forind0]*1] = VGV->LEVEL[2307+sub9[wrk->forind0]
*1]+VGV->LEVEL[2319+sub9[wrk->forind0]*1]+VGV->LEVEL[2322+sub9[wrk->forind0]
*1] ;
}
/* NonOD death rate HUD or OUD in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 599+sub9[wrk->forind0]*1 );
  VGV->LEVEL[599+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[598]*VGV->LEVEL[334+sub9[wrk->forind0]*1]+VGV->LEVEL[956
+sub9[wrk->forind0]*1]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 588+sub9[wrk->forind0]*1 );
  VGV->LEVEL[588+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 608+sub9[wrk->forind0]*1 );
  VGV->LEVEL[608+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 614+sub9[wrk->forind0]*1 );
  VGV->LEVEL[614+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death in Tx total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 593+sub9[wrk->forind0]*1 );
  VGV->LEVEL[593+sub9[wrk->forind0]*1] = VGV->LEVEL[588+sub9[wrk->forind0]
*1]+VGV->LEVEL[608+sub9[wrk->forind0]*1]+VGV->LEVEL[614+sub9[wrk->forind0]
*1] ;
}
/* Overdose death in Tx total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 688+sub9[wrk->forind0]*1 );
  VGV->LEVEL[688+sub9[wrk->forind0]*1] = VGV->LEVEL[685+sub9[wrk->forind0]
*1]+VGV->LEVEL[709+sub9[wrk->forind0]*1]+VGV->LEVEL[713+sub9[wrk->forind0]
*1] ;
}
/* Tx exit total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2304+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2304+sub9[wrk->forind0]*1] = VGV->LEVEL[2301+sub9[wrk->forind0]
*1]+VGV->LEVEL[2325+sub9[wrk->forind0]*1]+VGV->LEVEL[593+sub9[wrk->forind0]
*1]+VGV->LEVEL[688+sub9[wrk->forind0]*1] ;
}
/* Tx intake delay net */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2332+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2332+sub9[wrk->forind0]*1] = VGV->LEVEL[2331]*(1.000000
+RAMP(VGV->LEVEL[794+sub9[wrk->forind0]*1]/VGV->LEVEL[801],VGV->LEVEL[768
],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* #Tx intake capacity>DELAY1>LV1# */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 3+sub9[wrk->forind0]*1 );
  VGV->LEVEL[3+sub9[wrk->forind0]*1] = VGV->LEVEL[2304+sub9[wrk->forind0]
*1]*VGV->LEVEL[2332+sub9[wrk->forind0]*1] ;
}
/* Average days per prescription reference */
 {
  setpos( 48 );
  VGV->LEVEL[48] = VGV->LEVEL[46] ;
}
/* Average MME per day */
 {
  setpos( 52 );
  VGV->LEVEL[52] = VGV->LEVEL[922+9*1]*(1.000000+RAMP(VGV->LEVEL[770
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average MME per day reference */
 {
  setpos( 54 );
  VGV->LEVEL[54] = VGV->LEVEL[52] ;
}
/* Bup effective capacity rampup fraction */
 {
  setpos( 6 );
  VGV->LEVEL[6] = DELAY_N_i(135,6,0,0,VGV->LEVEL[204]) ;
}
}
void mdl_func6(GLOB_VARS *VGV) ;
void mdl_func6(GLOB_VARS *VGV){double temp[10];
/* Cumulative nonfatal overdoses */
 {
  setpos( 7 );
  VGV->LEVEL[7] = 0 ;
}
/* Cumulative Nx utilization deaths averted */
 {
  setpos( 8 );
  VGV->LEVEL[8] = 0 ;
}
/* Cumulative overdose deaths */
 {
  setpos( 9 );
  VGV->LEVEL[9] = 0 ;
}
/* Cumulative overdose deaths synth excess */
 {
  setpos( 10 );
  VGV->LEVEL[10] = 0 ;
}
/* Cumulative UD person years */
 {
  setpos( 11 );
  VGV->LEVEL[11] = 0 ;
}
/* Initial HUD in remission */
 {
  setpos( 404 );
  VGV->LEVEL[404] = VGV->LEVEL[429+18*1]*VGV->LEVEL[449+18*1] ;
}
/* HUD in remission */
 {
  setpos( 15 );
  VGV->LEVEL[15] = VGV->LEVEL[404] ;
}
/* Initial HUD in stable remission */
 {
  setpos( 406 );
  VGV->LEVEL[406] = VGV->LEVEL[429+19*1]*VGV->LEVEL[449+19*1] ;
}
/* HUD in stable remission */
 {
  setpos( 16 );
  VGV->LEVEL[16] = VGV->LEVEL[406] ;
}
/* Initial Rx OUD no H in remission */
 {
  setpos( 416 );
  VGV->LEVEL[416] = VGV->LEVEL[429+6*1]*VGV->LEVEL[449+6*1] ;
}
/* Initial Rx OUD no H in stable remission */
 {
  setpos( 417 );
  VGV->LEVEL[417] = VGV->LEVEL[429+7*1]*VGV->LEVEL[449+7*1] ;
}
/* Initial Rx OUD with H in remission */
 {
  setpos( 423 );
  VGV->LEVEL[423] = VGV->LEVEL[429+12*1]*VGV->LEVEL[449+12*1] ;
}
/* Initial Rx OUD with H in stable remission */
 {
  setpos( 424 );
  VGV->LEVEL[424] = VGV->LEVEL[429+13*1]*VGV->LEVEL[449+13*1] ;
}
/* Initial total in Tx by type */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 470+sub9[wrk->forind0]*1 );
  VGV->LEVEL[470+sub9[wrk->forind0]*1] = VGV->LEVEL[401+sub9[wrk->forind0]
*1]+VGV->LEVEL[418+sub9[wrk->forind0]*1]+VGV->LEVEL[425+sub9[wrk->forind0]
*1] ;
}
/* Initiation rate heroin with Rx OUD */
 {
  setpos( 494 );
  VGV->LEVEL[494] = VGV->LEVEL[491]*VGV->LEVEL[496] ;
}
/* Patients receiving opioid prescription annual reference */
 {
  setpos( 731 );
  VGV->LEVEL[731] = VGV->LEVEL[729] ;
}
/* Prescriptions per person reference */
 {
  setpos( 805 );
  VGV->LEVEL[805] = VGV->LEVEL[803] ;
}
/* Projected cumulative overdose deaths */
 {
  setpos( 19 );
  VGV->LEVEL[19] = 0 ;
}
/* Projected cumulative UD person years */
 {
  setpos( 20 );
  VGV->LEVEL[20] = 0 ;
}
/* Remission rate Rx OUD no H no MOUD Tx */
 {
  setpos( 963 );
  VGV->LEVEL[963] = VGV->LEVEL[962]*VGV->LEVEL[964] ;
}
/* Remission rate Rx OUD with H no MOUD Tx */
 {
  setpos( 965 );
  VGV->LEVEL[965] = VGV->LEVEL[962]*VGV->LEVEL[964] ;
}
/* Fraction of NDHU with Rx avg */
 {
  setpos( 373 );
  VGV->LEVEL[373] = GET_DATA_ATTRIBUTE(165,vecarg_assign(2,&(VGV->LEVEL[372
])),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Fraction of HUD with Rx OUD or misuse avg */
 {
  setpos( 371 );
  VGV->LEVEL[371] = GET_DATA_ATTRIBUTE(165,vecarg_assign(3,&(VGV->LEVEL[370
])),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Rx demand for misuse */
 {
  setpos( 1951 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (VGV->LEVEL[22+sub9[wrk->sumind0]*1]*VGV->LEVEL[1957
]*VGV->LEVEL[340+sub9[wrk->sumind0]*1])+(VGV->LEVEL[28+sub9[wrk->sumind0]
*1]*VGV->LEVEL[1958]*VGV->LEVEL[340+sub9[wrk->sumind0]*1])+(VGV->LEVEL[12
+sub9[wrk->sumind0]*1]*VGV->LEVEL[371]*VGV->LEVEL[1954]*VGV->LEVEL[340
+sub9[wrk->sumind0]*1]) ;
  VGV->LEVEL[1951] = (VGV->LEVEL[21]*VGV->LEVEL[1956])+(VGV->LEVEL[18
]*VGV->LEVEL[373]*VGV->LEVEL[1955])+(VGV->LEVEL[27]*VGV->LEVEL[1957
])+(VGV->LEVEL[33]*VGV->LEVEL[1958])+(VGV->LEVEL[17]*VGV->LEVEL[371
]*VGV->LEVEL[1954])+wrk->temp0 ;
}
/* Rx demand for misuse reference */
 {
  setpos( 1952 );
  VGV->LEVEL[1952] = VGV->LEVEL[1951] ;
}
/* Rx OUD no heroin in remission */
 {
  setpos( 25 );
  VGV->LEVEL[25] = VGV->LEVEL[416] ;
}
/* Rx OUD no heroin in stable remission */
 {
  setpos( 26 );
  VGV->LEVEL[26] = VGV->LEVEL[417] ;
}
/* Rx OUD with heroin in remission */
 {
  setpos( 31 );
  VGV->LEVEL[31] = VGV->LEVEL[423] ;
}
/* Rx OUD with heroin in stable remission */
 {
  setpos( 32 );
  VGV->LEVEL[32] = VGV->LEVEL[424] ;
}
/* Rx street supply disruption */
 {
  setpos( 34 );
  VGV->LEVEL[34] = 0 ;
}
/* HUD total */
 {
  setpos( 397 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[12+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[397] = VGV->LEVEL[17]+wrk->temp0 ;
}
/* Effective SI users HUD development */
 {
  setpos( 344 );
  VGV->LEVEL[344] = VGV->LEVEL[397] ;
}
/* SI on developing HUD current */
 {
  setpos( 2000 );
  VGV->LEVEL[2000] = VGV->LEVEL[344]/VGV->LEVEL[802] ;
}
/* SI on developing HUD reference */
 {
  setpos( 2001 );
  VGV->LEVEL[2001] = VGV->LEVEL[2000] ;
}
/* Rx OUD no PY heroin total */
 {
  setpos( 1976 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[22+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[1976] = VGV->LEVEL[27]+wrk->temp0 ;
}
/* Rx OUD with PY heroin total */
 {
  setpos( 1982 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[28+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[1982] = VGV->LEVEL[33]+wrk->temp0 ;
}
/* Effective SI users Rx OUD development */
 {
  setpos( 346 );
  VGV->LEVEL[346] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* SI on developing Rx OUD current */
 {
  setpos( 2003 );
  VGV->LEVEL[2003] = VGV->LEVEL[346]/VGV->LEVEL[802] ;
}
/* SI on developing Rx OUD reference */
 {
  setpos( 2004 );
  VGV->LEVEL[2004] = VGV->LEVEL[2003] ;
}
/* Effective SI users heroin initiation */
 {
  setpos( 343 );
  VGV->LEVEL[343] = VGV->LEVEL[397]+VGV->LEVEL[18]+VGV->LEVEL[1982
] ;
}
/* SI on initiating heroin current */
 {
  setpos( 2006 );
  VGV->LEVEL[2006] = VGV->LEVEL[343]/VGV->LEVEL[802] ;
}
/* SI on initiating heroin reference */
 {
  setpos( 2007 );
  VGV->LEVEL[2007] = VGV->LEVEL[2006] ;
}
/* Effective SI users Rx misuse initiation */
 {
  setpos( 345 );
  VGV->LEVEL[345] = VGV->LEVEL[21]+VGV->LEVEL[1976]+VGV->LEVEL[1982
]+VGV->LEVEL[18]*VGV->LEVEL[373] ;
}
/* SI on initiating Rx misuse current */
 {
  setpos( 2009 );
  VGV->LEVEL[2009] = VGV->LEVEL[345]/VGV->LEVEL[802] ;
}
/* SI on initiating Rx misuse reference */
 {
  setpos( 2010 );
  VGV->LEVEL[2010] = VGV->LEVEL[2009] ;
}
/* Total HUD in remission not in Tx */
 {
  setpos( 2173 );
  VGV->LEVEL[2173] = VGV->LEVEL[15]+VGV->LEVEL[16] ;
}
/* HUD in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 388+sub9[wrk->forind0]*1 );
  VGV->LEVEL[388+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[956+sub9[wrk->forind0]*1] ;
}
/* Total HUD in remission */
 {
  setpos( 2172 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[388+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2172] = VGV->LEVEL[2173]+wrk->temp0 ;
}
/* Rx OUD no PY heroin in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 1972+sub9[wrk->forind0]*1 );
  VGV->LEVEL[1972+sub9[wrk->forind0]*1] = VGV->LEVEL[956+sub9[wrk->forind0]
*1]*VGV->LEVEL[22+sub9[wrk->forind0]*1] ;
}
/* Rx OUD with PY heroin in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 1978+sub9[wrk->forind0]*1 );
  VGV->LEVEL[1978+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[956+sub9[wrk->forind0]*1] ;
}
/* Total Rx OUD in Remission not in Tx */
 {
  setpos( 2214 );
  VGV->LEVEL[2214] = VGV->LEVEL[25]+VGV->LEVEL[31]+VGV->LEVEL[26]+
VGV->LEVEL[32] ;
}
/* Total in Rx OUD Remission */
 {
  setpos( 2179 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[1972+sub9[wrk->sumind0]*1] ;
    wrk->temp1 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp1 += VGV->LEVEL[1978+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2179] = wrk->temp0+wrk->temp1+VGV->LEVEL[2214] ;
}
/* Total in Remission */
 {
  setpos( 2174 );
  VGV->LEVEL[2174] = VGV->LEVEL[2172]+VGV->LEVEL[2179] ;
}
/* SI on remission current */
 {
  setpos( 2012 );
  VGV->LEVEL[2012] = VGV->LEVEL[2174]/VGV->LEVEL[802] ;
}
/* SI on remission reference */
 {
  setpos( 2013 );
  VGV->LEVEL[2013] = VGV->LEVEL[2012] ;
}
/* Total overdose data last time */
 {
  setpos( 2185 );
  VGV->LEVEL[2185] = GET_DATA_LAST_TIME(vecarg_assign(4,&(VGV->LEVEL[2202
]))) ;
}
/* Tx seeking fraction MMT HUD */
 {
  setpos( 2350 );
  VGV->LEVEL[2350] = (1.000000-VGV->LEVEL[2342])*VGV->LEVEL[2351] ;
}
/* Tx seeking fraction by med HUD */
 {
  setpos( 2344+0*1 );
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
 {
  setpos( 2344+1*1 );
  VGV->LEVEL[2344+1*1] = VGV->LEVEL[2350] ;
}
 {
  setpos( 2344+2*1 );
  VGV->LEVEL[2344+2*1] = 1.000000-VGV->LEVEL[2342]-VGV->LEVEL[2350
] ;
}
/* Tx seeking fraction MMT Rx OUD */
 {
  setpos( 2352 );
  VGV->LEVEL[2352] = (1.000000-VGV->LEVEL[2343])*VGV->LEVEL[2353] ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  setpos( 2347+0*1 );
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
 {
  setpos( 2347+1*1 );
  VGV->LEVEL[2347+1*1] = VGV->LEVEL[2352] ;
}
 {
  setpos( 2347+2*1 );
  VGV->LEVEL[2347+2*1] = (1.000000-VGV->LEVEL[2343]-VGV->LEVEL[2352
]) ;
}
/* Weights */
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 2432+0*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[2432+0*27+sub0[wrk->forind1]*1] = 1.000000/VGV->LEVEL[2089
+sub0[wrk->forind1]*1]*VGV->LEVEL[2405+sub0[wrk->forind1]*1] ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 2432+2*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[2432+2*27+sub0[wrk->forind1]*1] = VGV->LEVEL[2089+sub0[wrk->forind1]
*1]*VGV->LEVEL[2378+sub0[wrk->forind1]*1]/VGV->LEVEL[2405+sub0[wrk->forind1]
*1] ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 2432+1*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[2432+1*27+sub0[wrk->forind1]*1] = 1.000000*VGV->LEVEL[2405
+sub0[wrk->forind1]*1] ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 2432+3*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1] = VGV->LEVEL[2405+sub0[wrk->forind1]
*1]*VGV->LEVEL[2378+sub0[wrk->forind1]*1] ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 2432+4*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[2432+4*27+sub0[wrk->forind1]*1] = VGV->LEVEL[2089+sub0[wrk->forind1]
*1]*VGV->LEVEL[2378+sub0[wrk->forind1]*1]/VGV->LEVEL[2405+sub0[wrk->forind1]
*1] ;
}
} /* comp_init */

/* State variable re-initial value computation*/
void mdl_func7(GLOB_VARS *VGV)
{double temp[10];
/* Initial Rx OUD no H in Tx */
 {
  setpos( 418+1*1 );
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  setpos( 418+2*1 );
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* Tx seeking fraction by med HUD */
 {
  setpos( 2344+0*1 );
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  setpos( 2347+0*1 );
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
} /* comp_reinit */

/*  Active Time Step Equation */
void mdl_func8(GLOB_VARS *VGV)
{double temp[10];
} /* comp_tstep */
/*  Auxiliary variable equations*/
void mdl_func9(GLOB_VARS *VGV)
{double temp[10];
/* Tx intake delay net */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2332+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2332+sub9[wrk->forind0]*1] = VGV->LEVEL[2331]*(1.000000
+RAMP(VGV->LEVEL[794+sub9[wrk->forind0]*1]/VGV->LEVEL[801],VGV->LEVEL[768
],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* #Tx intake capacity>DELAY1# */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 35+sub9[wrk->forind0]*1 );
  VGV->LEVEL[35+sub9[wrk->forind0]*1] = VGV->LEVEL[3+sub9[wrk->forind0]
*1]/VGV->LEVEL[2332+sub9[wrk->forind0]*1] ;
}
/* Logistic growth curve */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 534+sub6[wrk->forind0]*1 );
  VGV->LEVEL[534+sub6[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[867
+sub6[wrk->forind0]*1]>VGV->LEVEL[911+sub6[wrk->forind0]*1],MIN(VGV->LEVEL[867
+sub6[wrk->forind0]*1],((VGV->LEVEL[867+sub6[wrk->forind0]*1]-VGV->LEVEL[911
+sub6[wrk->forind0]*1])/0.500000)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845
+sub6[wrk->forind0]*1]-VGV->LEVEL[933+sub6[wrk->forind0]*1]))*(VGV->LEVEL[0
]-VGV->LEVEL[933+sub6[wrk->forind0]*1])))+(VGV->LEVEL[867+sub6[wrk->forind0]
*1]-(VGV->LEVEL[867+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]
*1])/0.500000)),MAX(VGV->LEVEL[867+sub6[wrk->forind0]*1],((VGV->LEVEL[867
+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]*1])/0.500000
)/(1.000000+EXP(((-5.000000)/(VGV->LEVEL[845+sub6[wrk->forind0]*1]
-VGV->LEVEL[933+sub6[wrk->forind0]*1]))*(VGV->LEVEL[0]-VGV->LEVEL[933
+sub6[wrk->forind0]*1])))+(VGV->LEVEL[867+sub6[wrk->forind0]*1]-(VGV->LEVEL[867
+sub6[wrk->forind0]*1]-VGV->LEVEL[911+sub6[wrk->forind0]*1])/0.500000
))) ;
}
/* Projection output data */
for(wrk->forind0=0;wrk->forind0<11;wrk->forind0++)
 {
  setpos( 922+sub6[wrk->forind0]*1 );
  VGV->LEVEL[922+sub6[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0
]<=VGV->LEVEL[933+sub6[wrk->forind0]*1],VGV->LEVEL[889+sub6[wrk->forind0]
*1],VGV->LEVEL[2117+sub6[wrk->forind0]*1]*VGV->LEVEL[911+sub6[wrk->forind0]
*1]+(1.000000-VGV->LEVEL[2117+sub6[wrk->forind0]*1])*VGV->LEVEL[534
+sub6[wrk->forind0]*1]) ;
}
/* ADF fraction of prescribed Rx opioids */
 {
  setpos( 40 );
  VGV->LEVEL[40] = VGV->LEVEL[922+10*1]+RAMP(IF_THEN_ELSE(VGV->LEVEL[769
]>=0,VGV->LEVEL[769]*(1.000000-VGV->LEVEL[922+10*1]),VGV->LEVEL[769
]*VGV->LEVEL[922+10*1])/(VGV->LEVEL[801]),VGV->LEVEL[768],VGV->LEVEL[768
]+(VGV->LEVEL[801])) ;
}
/* ADF fraction of Rx street supply base */
 {
  setpos( 42 );
  VGV->LEVEL[42] = POWER(VGV->LEVEL[40],VGV->LEVEL[45]) ;
}
/* ADF fraction of Rx street supply net */
 {
  setpos( 43 );
  VGV->LEVEL[43] = (1.000000-VGV->LEVEL[211])*VGV->LEVEL[42] ;
}
/* ADF effect coeff initiating heroin with Rx OUD */
 {
  setpos( 38 );
  VGV->LEVEL[38] = EXP(VGV->LEVEL[43]*((-VGV->LEVEL[39]))) ;
}
/* Average days per prescription */
 {
  setpos( 46 );
  VGV->LEVEL[46] = VGV->LEVEL[922+8*1]*(1.000000+RAMP(VGV->LEVEL[773
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average days per prescription relative */
 {
  setpos( 49 );
  VGV->LEVEL[49] = ZIDZ(0,VGV->LEVEL[46],VGV->LEVEL[48]) ;
}
/* Prescriptions per person */
 {
  setpos( 803 );
  VGV->LEVEL[803] = VGV->LEVEL[922+7*1]*(1.000000+RAMP(VGV->LEVEL[785
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average duration of medical opioid use */
 {
  setpos( 50 );
  VGV->LEVEL[50] = VGV->LEVEL[46]*VGV->LEVEL[803]*VGV->LEVEL[682] ;
}
/* Average MME per day */
 {
  setpos( 52 );
  VGV->LEVEL[52] = VGV->LEVEL[922+9*1]*(1.000000+RAMP(VGV->LEVEL[770
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Average MME per day relative */
 {
  setpos( 55 );
  VGV->LEVEL[55] = VGV->LEVEL[52]/VGV->LEVEL[54] ;
}
/* Fentanyl penetration curve */
 {
  setpos( 353 );
  VGV->LEVEL[353] = VGV->LEVEL[922+0*1]*(1.000000-VGV->LEVEL[2130]
) ;
}
/* Base survival probability net H OD */
 {
  setpos( 60 );
  VGV->LEVEL[60] = MAX(0,VGV->LEVEL[58]+(VGV->LEVEL[57]-VGV->LEVEL[58
])*VGV->LEVEL[353]) ;
}
/* NSDUH misuse redefinition effect */
 {
  setpos( 644 );
  VGV->LEVEL[644] = 1.000000-RAMP(VGV->LEVEL[645]/(1.000000+VGV->LEVEL[645
])/VGV->LEVEL[683],VGV->LEVEL[646],(VGV->LEVEL[646]+VGV->LEVEL[683
])) ;
}
/* Rx misuse no PY heroin NSDUH redef corrected */
 {
  setpos( 1960 );
  VGV->LEVEL[1960] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[644
]*VGV->LEVEL[1959],NA) ;
}
/* Probability OD witnessed net */
 {
  setpos( 840 );
  VGV->LEVEL[840] = VGV->LEVEL[839]+RAMP(IF_THEN_ELSE(VGV->LEVEL[786
]>=0,VGV->LEVEL[786]*(1.000000-VGV->LEVEL[839]),VGV->LEVEL[786]*VGV->LEVEL[839
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Nx kit distribution efficiency net */
 {
  setpos( 648 );
  VGV->LEVEL[648] = VGV->LEVEL[647]*(1.000000+RAMP(VGV->LEVEL[782]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Nx kits distributed net */
 {
  setpos( 653 );
  VGV->LEVEL[653] = VGV->LEVEL[922+1*1]*(1.000000+RAMP(VGV->LEVEL[783
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Nx kits distributed Rx user */
 {
  setpos( 654 );
  VGV->LEVEL[654] = VGV->LEVEL[653]*(1.000000-VGV->LEVEL[359]) ;
}
/* Nx kits per 100k population Rx user */
 {
  setpos( 656 );
  VGV->LEVEL[656] = VGV->LEVEL[654]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander Rx */
 {
  setpos( 836 );
  VGV->LEVEL[836] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[656
]) ;
}
/* Probability of calling emergency services net */
 {
  setpos( 842 );
  VGV->LEVEL[842] = VGV->LEVEL[841]+RAMP(IF_THEN_ELSE(VGV->LEVEL[787
]>=0,VGV->LEVEL[787]*(1.000000-VGV->LEVEL[841]),VGV->LEVEL[787]*VGV->LEVEL[841
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Probability OD death not averted Rx user */
 {
  setpos( 838 );
  VGV->LEVEL[838] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[836
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate base Rx OUD */
 {
  setpos( 697 );
  VGV->LEVEL[697] = VGV->LEVEL[719]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death rate synth baseline */
 {
  setpos( 704 );
  VGV->LEVEL[704] = VGV->LEVEL[723]*(1.000000-VGV->LEVEL[57])*VGV->LEVEL[838
] ;
}
}
void mdl_func10(GLOB_VARS *VGV) ;
void mdl_func10(GLOB_VARS *VGV){double temp[10];
/* Overdose death rate Rx OUD no H */
 {
  setpos( 702 );
  VGV->LEVEL[702] = VGV->LEVEL[697]+VGV->LEVEL[704] ;
}
/* Overdose death Rx OUD no H */
 {
  setpos( 708 );
  VGV->LEVEL[708] = VGV->LEVEL[27]*VGV->LEVEL[702] ;
}
/* Tx average duration net */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2231+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2231+sub9[wrk->forind0]*1] = VGV->LEVEL[2226+sub9[wrk->forind0]
*1]*(1.000000+RAMP(VGV->LEVEL[793]/VGV->LEVEL[801],VGV->LEVEL[768]
,VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Tx success fraction */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2368+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2368+sub9[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[2231
+sub9[wrk->forind0]*1]<=VGV->LEVEL[2371],ZIDZ(0,POWER(VGV->LEVEL[2372
],2.000000),1.000000+POWER(VGV->LEVEL[2372],2.000000))*EXP((VGV->LEVEL[2373
]/VGV->LEVEL[2372])*(VGV->LEVEL[2231+sub9[wrk->forind0]*1]-VGV->LEVEL[2371
])),1.000000-ZIDZ(0,1.000000,1.000000+POWER(VGV->LEVEL[2372],2.000000
))*EXP((-VGV->LEVEL[2373])*VGV->LEVEL[2372]*(VGV->LEVEL[2231+sub9[wrk->forind0]
*1]-VGV->LEVEL[2371])))*VGV->LEVEL[2374] ;
}
/* Remission fraction in Tx Bup */
 {
  setpos( 959 );
  VGV->LEVEL[959] = VGV->LEVEL[2368+0*1] ;
}
/* Remission fraction in Tx MMT */
 {
  setpos( 960 );
  VGV->LEVEL[960] = VGV->LEVEL[2368+1*1] ;
}
/* Remission fraction in Tx Viv */
 {
  setpos( 961 );
  VGV->LEVEL[961] = VGV->LEVEL[2368+2*1] ;
}
/* Remission fraction in Tx */
 {
  setpos( 956+0*1 );
  VGV->LEVEL[956+0*1] = VGV->LEVEL[959] ;
}
 {
  setpos( 956+1*1 );
  VGV->LEVEL[956+1*1] = VGV->LEVEL[960] ;
}
 {
  setpos( 956+2*1 );
  VGV->LEVEL[956+2*1] = VGV->LEVEL[961] ;
}
/* OD death rate Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 674+sub9[wrk->forind0]*1 );
  VGV->LEVEL[674+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[702]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 709+sub9[wrk->forind0]*1 );
  VGV->LEVEL[709+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[674+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths Rx OUD no H */
 {
  setpos( 2196 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[709+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2196] = VGV->LEVEL[708]+wrk->temp0 ;
}
/* OD death fraction synth baseline Rx OUD no H */
 {
  setpos( 668 );
  VGV->LEVEL[668] = VGV->LEVEL[704]/VGV->LEVEL[702] ;
}
/* Total overdose deaths synth base */
 {
  setpos( 2199 );
  VGV->LEVEL[2199] = VGV->LEVEL[2196]*VGV->LEVEL[668] ;
}
/* OD deaths synth excess estimated */
 {
  setpos( 681 );
  VGV->LEVEL[681] = MAX(0,VGV->LEVEL[2201]+IF_THEN_ELSE(VGV->LEVEL[0
]<VGV->LEVEL[352],NA,IF_THEN_ELSE(VGV->LEVEL[0]>VGV->LEVEL[2185],NA
,VGV->LEVEL[2202]-VGV->LEVEL[2199]))) ;
}
/* Total overdose deaths heroin and excess estimated */
 {
  setpos( 2192 );
  VGV->LEVEL[2192] = IF_THEN_ELSE(VGV->LEVEL[0]>VGV->LEVEL[2185],NA
,VGV->LEVEL[2188]+VGV->LEVEL[681]) ;
}
/* OD deaths synth baseline estimated */
 {
  setpos( 680 );
  VGV->LEVEL[680] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[352],VGV->LEVEL[2202
],NA) ;
}
/* Total Rx misuse initiation SAMHSA redef corrected */
 {
  setpos( 2211 );
  VGV->LEVEL[2211] = IF_THEN_ELSE(VGV->LEVEL[0]<=VGV->LEVEL[546],VGV->LEVEL[2210
]*VGV->LEVEL[644],NA) ;
}
/* Initiating Rx misuse own Rx RDAS SAMHSA redef correction */
 {
  setpos( 490 );
  VGV->LEVEL[490] = IF_THEN_ELSE(VGV->LEVEL[487]==NA,NA,VGV->LEVEL[2211
]-VGV->LEVEL[487]) ;
}
/* DataVarBase */
 {
  setpos( 295+0*1 );
  VGV->LEVEL[295+0*1] = VGV->LEVEL[1960] ;
}
 {
  setpos( 295+15*1 );
  VGV->LEVEL[295+15*1] = VGV->LEVEL[2192] ;
}
 {
  setpos( 295+16*1 );
  VGV->LEVEL[295+16*1] = VGV->LEVEL[680] ;
}
 {
  setpos( 295+8*1 );
  VGV->LEVEL[295+8*1] = VGV->LEVEL[490] ;
}
/* DataVar */
for(wrk->forind0=0;wrk->forind0<27;wrk->forind0++)
 {
  setpos( 268+sub0[wrk->forind0]*1 );
  VGV->LEVEL[268+sub0[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0
]<=VGV->LEVEL[546],VGV->LEVEL[295+sub0[wrk->forind0]*1],NA) ;
}
/* Rx OUD no PY heroin total */
 {
  setpos( 1976 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[22+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[1976] = VGV->LEVEL[27]+wrk->temp0 ;
}
/* Rx OUD with PY heroin total */
 {
  setpos( 1982 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[28+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[1982] = VGV->LEVEL[33]+wrk->temp0 ;
}
/* HUD total */
 {
  setpos( 397 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (1.000000-VGV->LEVEL[956+sub9[wrk->sumind0]*1])*
VGV->LEVEL[12+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[397] = VGV->LEVEL[17]+wrk->temp0 ;
}
/* HUD in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 388+sub9[wrk->forind0]*1 );
  VGV->LEVEL[388+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[956+sub9[wrk->forind0]*1] ;
}
/* Rx OUD no PY heroin in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 1972+sub9[wrk->forind0]*1 );
  VGV->LEVEL[1972+sub9[wrk->forind0]*1] = VGV->LEVEL[956+sub9[wrk->forind0]
*1]*VGV->LEVEL[22+sub9[wrk->forind0]*1] ;
}
/* Rx OUD with PY heroin in remission in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 1978+sub9[wrk->forind0]*1 );
  VGV->LEVEL[1978+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[956+sub9[wrk->forind0]*1] ;
}
/* Total by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2164+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2164+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]+VGV->LEVEL[22+sub9[wrk->forind0]*1]+VGV->LEVEL[28+sub9[wrk->forind0]
*1]+VGV->LEVEL[388+sub9[wrk->forind0]*1]+VGV->LEVEL[1972+sub9[wrk->forind0]
*1]+VGV->LEVEL[1978+sub9[wrk->forind0]*1] ;
}
/* Patients receiving opioid prescription annual */
 {
  setpos( 729 );
  VGV->LEVEL[729] = VGV->LEVEL[922+6*1]*(1.000000+RAMP(VGV->LEVEL[784
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Patients with current month opioid Rx */
 {
  setpos( 733 );
  VGV->LEVEL[733] = VGV->LEVEL[729]*VGV->LEVEL[50] ;
}
/* Overdose death MU */
 {
  setpos( 691 );
  VGV->LEVEL[691] = VGV->LEVEL[733]*VGV->LEVEL[695] ;
}
/* Overdose death rate Rx misuse */
 {
  setpos( 701 );
  VGV->LEVEL[701] = VGV->LEVEL[718]*(1.000000-VGV->LEVEL[61])*VGV->LEVEL[838
] ;
}
/* Overdose death Rx misuse */
 {
  setpos( 707 );
  VGV->LEVEL[707] = VGV->LEVEL[21]*VGV->LEVEL[701] ;
}
/* OD death fraction base Rx OUD no H */
 {
  setpos( 667 );
  VGV->LEVEL[667] = VGV->LEVEL[697]/VGV->LEVEL[702] ;
}
/* Overdose death rate Rx OUD with H */
 {
  setpos( 703 );
  VGV->LEVEL[703] = VGV->LEVEL[697] ;
}
/* Overdose death Rx OUD with H */
 {
  setpos( 712 );
  VGV->LEVEL[712] = VGV->LEVEL[33]*VGV->LEVEL[703] ;
}
/* OD death rate Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 677+sub9[wrk->forind0]*1 );
  VGV->LEVEL[677+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[703]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 713+sub9[wrk->forind0]*1 );
  VGV->LEVEL[713+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[677+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths Rx OUD with H */
 {
  setpos( 2197 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[713+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2197] = VGV->LEVEL[712]+wrk->temp0 ;
}
/* Total overdose deaths base Rx */
 {
  setpos( 2189 );
  VGV->LEVEL[2189] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]*VGV->LEVEL[667]+VGV->LEVEL[2197] ;
}
/* Fentanyl effect on OD rate H max net */
 {
  setpos( 350 );
  VGV->LEVEL[350] = ((1.000000-VGV->LEVEL[2128])*VGV->LEVEL[349]+VGV->LEVEL[2128
]*VGV->LEVEL[351])*(1.000000+RAMP(VGV->LEVEL[774]/VGV->LEVEL[801],
VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])) ;
}
/* Overdose rate net NDHU */
 {
  setpos( 722 );
  VGV->LEVEL[722] = VGV->LEVEL[717]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Nx kits distributed H user */
 {
  setpos( 651 );
  VGV->LEVEL[651] = VGV->LEVEL[653]*VGV->LEVEL[359] ;
}
/* Nx kits per 100k population H user */
 {
  setpos( 655 );
  VGV->LEVEL[655] = VGV->LEVEL[651]/VGV->LEVEL[802]*100000.000000 ;
}
/* Probability Nx bystander heroin */
 {
  setpos( 834 );
  VGV->LEVEL[834] = 1.000000-EXP((-VGV->LEVEL[648])*VGV->LEVEL[655
]) ;
}
/* Probability OD death not averted heroin user */
 {
  setpos( 837 );
  VGV->LEVEL[837] = 1.000000-VGV->LEVEL[840]*(1.000000-(1.000000-VGV->LEVEL[834
])*(1.000000-VGV->LEVEL[842])) ;
}
/* Overdose death rate NDHU */
 {
  setpos( 700 );
  VGV->LEVEL[700] = VGV->LEVEL[722]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death NDHU */
 {
  setpos( 692 );
  VGV->LEVEL[692] = VGV->LEVEL[18]*VGV->LEVEL[700] ;
}
/* Overdose rate net HUD */
 {
  setpos( 721 );
  VGV->LEVEL[721] = VGV->LEVEL[716]*(1.000000+VGV->LEVEL[353]*(VGV->LEVEL[350
]-1.000000)) ;
}
/* Overdose death rate HUD */
 {
  setpos( 698 );
  VGV->LEVEL[698] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*VGV->LEVEL[837
] ;
}
/* Overdose death HUD */
 {
  setpos( 684 );
  VGV->LEVEL[684] = VGV->LEVEL[17]*VGV->LEVEL[698] ;
}
/* OD death rate HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 671+sub9[wrk->forind0]*1 );
  VGV->LEVEL[671+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[698]*VGV->LEVEL[337+sub9[wrk->forind0]*1] ;
}
/* Overdose death HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 685+sub9[wrk->forind0]*1 );
  VGV->LEVEL[685+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[671+sub9[wrk->forind0]*1] ;
}
/* Total overdose deaths HUD */
 {
  setpos( 2193 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[685+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2193] = VGV->LEVEL[684]+wrk->temp0 ;
}
/* Total overdose deaths heroin */
 {
  setpos( 2191 );
  VGV->LEVEL[2191] = VGV->LEVEL[692]+VGV->LEVEL[2193] ;
}
/* Initiation rate Rx misuse own Rx net */
 {
  setpos( 499 );
  VGV->LEVEL[499] = VGV->LEVEL[497]*(1.000000+RAMP(VGV->LEVEL[780]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Perceived risk Rx use current */
 {
  setpos( 750 );
  VGV->LEVEL[750] = VGV->LEVEL[2] ;
}
/* Perceived risk Rx use relative */
 {
  setpos( 753 );
  VGV->LEVEL[753] = XIDZ(0,VGV->LEVEL[750],VGV->LEVEL[752],1.000000
) ;
}
/* Perceived risk coeff initiating Rx misuse own Rx */
 {
  setpos( 739 );
  VGV->LEVEL[739] = POWER(VGV->LEVEL[753],(-VGV->LEVEL[757])) ;
}
/* Initiation rate Rx misuse own Rx effective */
 {
  setpos( 498 );
  VGV->LEVEL[498] = VGV->LEVEL[499]*VGV->LEVEL[739] ;
}
/* Initiating Rx misuse own Rx */
 {
  setpos( 488 );
  VGV->LEVEL[488] = VGV->LEVEL[733]*VGV->LEVEL[498] ;
}
/* Initiating Rx misuse diverted net */
 {
  setpos( 486 );
  VGV->LEVEL[486] = VGV->LEVEL[485]*(1.000000+RAMP(VGV->LEVEL[778]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Perceived risk coeff initiating Rx misuse diverted */
 {
  setpos( 738 );
  VGV->LEVEL[738] = POWER(VGV->LEVEL[753],(-VGV->LEVEL[756])) ;
}
/* Patients receiving opioid prescription annual relative */
 {
  setpos( 732 );
  VGV->LEVEL[732] = VGV->LEVEL[729]/VGV->LEVEL[731] ;
}
/* Prescriptions per person relative */
 {
  setpos( 806 );
  VGV->LEVEL[806] = VGV->LEVEL[803]/VGV->LEVEL[805] ;
}
/* Rx supply relative */
 {
  setpos( 1986 );
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
  setpos( 1987 );
  VGV->LEVEL[1987] = VGV->LEVEL[1986]*(1.000000+RAMP(VGV->LEVEL[791
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Counterfeit supply relative */
 {
  setpos( 212 );
  VGV->LEVEL[212] = VGV->LEVEL[211]/(1.000000-VGV->LEVEL[211])*VGV->LEVEL[1987
] ;
}
/* Fraction of NDHU with Rx avg */
 {
  setpos( 373 );
  VGV->LEVEL[373] = GET_DATA_ATTRIBUTE(165,vecarg_assign(5,&(VGV->LEVEL[372
])),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Fraction of HUD with Rx OUD or misuse avg */
 {
  setpos( 371 );
  VGV->LEVEL[371] = GET_DATA_ATTRIBUTE(165,vecarg_assign(6,&(VGV->LEVEL[370
])),VGV->LEVEL[469],VGV->LEVEL[546]) ;
}
/* Rx demand for misuse */
 {
  setpos( 1951 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += (VGV->LEVEL[22+sub9[wrk->sumind0]*1]*VGV->LEVEL[1957
]*VGV->LEVEL[340+sub9[wrk->sumind0]*1])+(VGV->LEVEL[28+sub9[wrk->sumind0]
*1]*VGV->LEVEL[1958]*VGV->LEVEL[340+sub9[wrk->sumind0]*1])+(VGV->LEVEL[12
+sub9[wrk->sumind0]*1]*VGV->LEVEL[371]*VGV->LEVEL[1954]*VGV->LEVEL[340
+sub9[wrk->sumind0]*1]) ;
  VGV->LEVEL[1951] = (VGV->LEVEL[21]*VGV->LEVEL[1956])+(VGV->LEVEL[18
]*VGV->LEVEL[373]*VGV->LEVEL[1955])+(VGV->LEVEL[27]*VGV->LEVEL[1957
])+(VGV->LEVEL[33]*VGV->LEVEL[1958])+(VGV->LEVEL[17]*VGV->LEVEL[371
]*VGV->LEVEL[1954])+wrk->temp0 ;
}
/* Rx demand for misuse relative */
 {
  setpos( 1953 );
  VGV->LEVEL[1953] = VGV->LEVEL[1951]/VGV->LEVEL[1952] ;
}
/* Rx availability for misuse relative */
 {
  setpos( 1945 );
  VGV->LEVEL[1945] = (VGV->LEVEL[1987]+VGV->LEVEL[212]*VGV->LEVEL[213
])/VGV->LEVEL[1953] ;
}
/* Rx availability coeff initiating Rx misuse */
 {
  setpos( 1943 );
  VGV->LEVEL[1943] = POWER(VGV->LEVEL[1945],VGV->LEVEL[1949]) ;
}
/* Effective SI users Rx misuse initiation */
 {
  setpos( 345 );
  VGV->LEVEL[345] = VGV->LEVEL[21]+VGV->LEVEL[1976]+VGV->LEVEL[1982
]+VGV->LEVEL[18]*VGV->LEVEL[373] ;
}
/* SI on initiating Rx misuse current */
 {
  setpos( 2009 );
  VGV->LEVEL[2009] = VGV->LEVEL[345]/VGV->LEVEL[802] ;
}
/* SI on initiating Rx misuse relative */
 {
  setpos( 2011 );
  VGV->LEVEL[2011] = VGV->LEVEL[2009]/VGV->LEVEL[2010] ;
}
/* Social influence coeff initiating Rx misuse */
 {
  setpos( 2074 );
  VGV->LEVEL[2074] = POWER(VGV->LEVEL[2011],VGV->LEVEL[2082]) ;
}
/* Initiating Rx misuse diverted */
 {
  setpos( 484 );
  VGV->LEVEL[484] = VGV->LEVEL[486]*VGV->LEVEL[738]*VGV->LEVEL[1943
]*VGV->LEVEL[2074] ;
}
/* Initiating heroin no Rx net */
 {
  setpos( 476 );
  VGV->LEVEL[476] = VGV->LEVEL[474]*(1.000000+RAMP(VGV->LEVEL[777]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Heroin price index */
 {
  setpos( 384 );
  VGV->LEVEL[384] = VGV->LEVEL[922+2*1] ;
}
/* Heroin availability index */
 {
  setpos( 380 );
  VGV->LEVEL[380] = 1.000000/VGV->LEVEL[384] ;
}
/* Heroin availability coeff initiating NDHU no Rx */
 {
  setpos( 378 );
  VGV->LEVEL[378] = POWER(VGV->LEVEL[380],VGV->LEVEL[382]) ;
}
/* Perceived risk heroin use current */
 {
  setpos( 745 );
  VGV->LEVEL[745] = VGV->LEVEL[1] ;
}
/* Perceived risk heroin use relative */
 {
  setpos( 748 );
  VGV->LEVEL[748] = VGV->LEVEL[745]/VGV->LEVEL[747] ;
}
/* Perceived risk coeff initiating NDHU no Rx */
 {
  setpos( 736 );
  VGV->LEVEL[736] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[755])) ;
}
/* Effective SI users heroin initiation */
 {
  setpos( 343 );
  VGV->LEVEL[343] = VGV->LEVEL[397]+VGV->LEVEL[18]+VGV->LEVEL[1982
] ;
}
/* SI on initiating heroin current */
 {
  setpos( 2006 );
  VGV->LEVEL[2006] = VGV->LEVEL[343]/VGV->LEVEL[802] ;
}
/* SI on initiating heroin relative */
 {
  setpos( 2008 );
  VGV->LEVEL[2008] = VGV->LEVEL[2006]/VGV->LEVEL[2007] ;
}
/* Social influence coeff initiating NDHU no Rx */
 {
  setpos( 2072 );
  VGV->LEVEL[2072] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2080]) ;
}
/* Initiating heroin no Rx */
 {
  setpos( 473 );
  VGV->LEVEL[473] = VGV->LEVEL[476]*VGV->LEVEL[378]*VGV->LEVEL[736
]*VGV->LEVEL[2072] ;
}
/* Initiation rate heroin with Rx misuse net */
 {
  setpos( 493 );
  VGV->LEVEL[493] = VGV->LEVEL[491]*(1.000000+RAMP(VGV->LEVEL[779]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx availability for UD relative */
 {
  setpos( 1947 );
  VGV->LEVEL[1947] = VGV->LEVEL[1945]*MAX((1.000000-VGV->LEVEL[34]
),0.010000) ;
}
/* Rx availability for UD endogenous */
 {
  setpos( 1946 );
  VGV->LEVEL[1946] = VGV->LEVEL[1947]*((1.000000-VGV->LEVEL[43])+VGV->LEVEL[43
]*VGV->LEVEL[44]) ;
}
/* Rx vs heroin availability index */
 {
  setpos( 1994 );
  VGV->LEVEL[1994] = XIDZ(0,VGV->LEVEL[1946],VGV->LEVEL[380],1.000000
) ;
}
/* Rx vs H availability coeff initiating NDHU with Rx */
 {
  setpos( 1990 );
  VGV->LEVEL[1990] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1993])))
 ;
}
/* Perceived risk coeff initiating NDHU with Rx */
 {
  setpos( 737 );
  VGV->LEVEL[737] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[754])) ;
}
}
void mdl_func11(GLOB_VARS *VGV) ;
void mdl_func11(GLOB_VARS *VGV){double temp[10];
/* Social influence coeff initiating NDHU with Rx */
 {
  setpos( 2073 );
  VGV->LEVEL[2073] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2081]) ;
}
/* Initiation rate heroin with Rx misuse effective */
 {
  setpos( 492 );
  VGV->LEVEL[492] = VGV->LEVEL[493]*VGV->LEVEL[1990]*VGV->LEVEL[737
]*VGV->LEVEL[2073] ;
}
/* Initiating heroin with Rx misuse */
 {
  setpos( 478 );
  VGV->LEVEL[478] = VGV->LEVEL[21]*VGV->LEVEL[492] ;
}
/* Rx vs H availability coeff initiating heroin with Rx OUD */
 {
  setpos( 1989 );
  VGV->LEVEL[1989] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1992])))
 ;
}
/* Perceived risk coeff initiating heroin with Rx OUD */
 {
  setpos( 735 );
  VGV->LEVEL[735] = POWER(VGV->LEVEL[748],(-VGV->LEVEL[754])) ;
}
/* Social influence coeff initiating heroin with Rx OUD */
 {
  setpos( 2071 );
  VGV->LEVEL[2071] = POWER(VGV->LEVEL[2008],VGV->LEVEL[2079]) ;
}
/* Initiation rate heroin with Rx OUD effective */
 {
  setpos( 495 );
  VGV->LEVEL[495] = VGV->LEVEL[494]*VGV->LEVEL[1989]*VGV->LEVEL[735
]*VGV->LEVEL[2071]*VGV->LEVEL[38] ;
}
/* Initiating heroin with Rx OUD */
 {
  setpos( 481 );
  VGV->LEVEL[481] = VGV->LEVEL[27]*VGV->LEVEL[495] ;
}
/* Total heroin initiation */
 {
  setpos( 2167 );
  VGV->LEVEL[2167] = VGV->LEVEL[473]+VGV->LEVEL[478]+VGV->LEVEL[481
] ;
}
/* Total overdose deaths */
 {
  setpos( 2186 );
  VGV->LEVEL[2186] = VGV->LEVEL[707]+VGV->LEVEL[692]+VGV->LEVEL[691
]+VGV->LEVEL[2196]+VGV->LEVEL[2197]+VGV->LEVEL[2193] ;
}
/* SimVar */
 {
  setpos( 2042+0*1 );
  VGV->LEVEL[2042+0*1] = VGV->LEVEL[21] ;
}
 {
  setpos( 2042+1*1 );
  VGV->LEVEL[2042+1*1] = VGV->LEVEL[1976] ;
}
 {
  setpos( 2042+2*1 );
  VGV->LEVEL[2042+2*1] = VGV->LEVEL[1982] ;
}
 {
  setpos( 2042+3*1 );
  VGV->LEVEL[2042+3*1] = VGV->LEVEL[18] ;
}
 {
  setpos( 2042+4*1 );
  VGV->LEVEL[2042+4*1] = VGV->LEVEL[397] ;
}
 {
  setpos( 2042+5*1 );
  VGV->LEVEL[2042+5*1] = VGV->LEVEL[2164+0*1] ;
}
 {
  setpos( 2042+6*1 );
  VGV->LEVEL[2042+6*1] = VGV->LEVEL[2164+1*1] ;
}
 {
  setpos( 2042+7*1 );
  VGV->LEVEL[2042+7*1] = VGV->LEVEL[2164+2*1] ;
}
 {
  setpos( 2042+14*1 );
  VGV->LEVEL[2042+14*1] = VGV->LEVEL[2189] ;
}
 {
  setpos( 2042+15*1 );
  VGV->LEVEL[2042+15*1] = VGV->LEVEL[2191] ;
}
 {
  setpos( 2042+16*1 );
  VGV->LEVEL[2042+16*1] = VGV->LEVEL[2199] ;
}
 {
  setpos( 2042+8*1 );
  VGV->LEVEL[2042+8*1] = VGV->LEVEL[488] ;
}
 {
  setpos( 2042+9*1 );
  VGV->LEVEL[2042+9*1] = VGV->LEVEL[484] ;
}
 {
  setpos( 2042+10*1 );
  VGV->LEVEL[2042+10*1] = VGV->LEVEL[2167] ;
}
 {
  setpos( 2042+11*1 );
  VGV->LEVEL[2042+11*1] = VGV->LEVEL[473] ;
}
 {
  setpos( 2042+12*1 );
  VGV->LEVEL[2042+12*1] = VGV->LEVEL[478] ;
}
 {
  setpos( 2042+13*1 );
  VGV->LEVEL[2042+13*1] = VGV->LEVEL[481] ;
}
 {
  setpos( 2042+17*1 );
  VGV->LEVEL[2042+17*1] = VGV->LEVEL[2186] ;
}
/* BaseErr */
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 62+0*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[62+0*27+sub0[wrk->forind1]*1] = VGV->LEVEL[763+0*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[wrk->forind1]*1]==NA,0,(-POWER(((VGV->LEVEL[2042
+sub0[wrk->forind1]*1]-VGV->LEVEL[268+sub0[wrk->forind1]*1])*VGV->LEVEL[2432
+0*27+sub0[wrk->forind1]*1]),2.000000))) ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 62+1*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[62+1*27+sub0[wrk->forind1]*1] = VGV->LEVEL[763+1*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[wrk->forind1]*1]==NA,0,(-ABS(ZIDZ(0,(VGV->LEVEL[2042
+sub0[wrk->forind1]*1]-VGV->LEVEL[268+sub0[wrk->forind1]*1]),VGV->LEVEL[268
+sub0[wrk->forind1]*1])))*100.000000) ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 62+2*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[62+2*27+sub0[wrk->forind1]*1] = VGV->LEVEL[763+2*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[wrk->forind1]*1]==NA,0,(-POWER((VGV->LEVEL[2042
+sub0[wrk->forind1]*1]-VGV->LEVEL[268+sub0[wrk->forind1]*1]),2.000000
))/POWER(VGV->LEVEL[2432+2*27+sub0[wrk->forind1]*1],2.000000)/2.000000
-LN(VGV->LEVEL[2432+2*27+sub0[wrk->forind1]*1])) ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 62+3*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[62+3*27+sub0[wrk->forind1]*1] = VGV->LEVEL[763+3*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[wrk->forind1]*1]==NA,0,IF_THEN_ELSE(VGV->LEVEL[268
+sub0[wrk->forind1]*1]==0,(-LN(1.000000+VGV->LEVEL[2432+3*27+sub0[wrk->forind1]
*1]*MAX(VGV->LEVEL[347],VGV->LEVEL[2042+sub0[wrk->forind1]*1])))/VGV->LEVEL[2432
+3*27+sub0[wrk->forind1]*1],GAMMA_LN(VGV->LEVEL[268+sub0[wrk->forind1]
*1]+1.000000/VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1])-GAMMA_LN(
1.000000/VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1])-GAMMA_LN(VGV->LEVEL[268
+sub0[wrk->forind1]*1]+1.000000)-(VGV->LEVEL[268+sub0[wrk->forind1]
*1]+1.000000/VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1])*LN(1.000000
+VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1]*MAX(VGV->LEVEL[347],VGV->LEVEL[2042
+sub0[wrk->forind1]*1]))+VGV->LEVEL[268+sub0[wrk->forind1]*1]*(LN(
VGV->LEVEL[2432+3*27+sub0[wrk->forind1]*1])+LN(MAX(VGV->LEVEL[347]
,VGV->LEVEL[2042+sub0[wrk->forind1]*1]))))) ;
}
for(wrk->forind1=0;wrk->forind1<27;wrk->forind1++)
 {
  setpos( 62+4*27+sub0[wrk->forind1]*1 );
  VGV->LEVEL[62+4*27+sub0[wrk->forind1]*1] = VGV->LEVEL[763+4*1]*IF_THEN_ELSE(
VGV->LEVEL[268+sub0[wrk->forind1]*1]==NA,0,(-POWER((LN(VGV->LEVEL[2042
+sub0[wrk->forind1]*1]+VGV->LEVEL[347])-LN(VGV->LEVEL[268+sub0[wrk->forind1]
*1]+VGV->LEVEL[347])),2.000000))/POWER(VGV->LEVEL[2432+2*27+sub0[wrk->forind1]
*1],2.000000)/2.000000-LN(VGV->LEVEL[2432+2*27+sub0[wrk->forind1]*1
])) ;
}
/* Bup providers */
 {
  setpos( 208 );
  VGV->LEVEL[208] = VGV->LEVEL[922+3*1]*(1.000000+RAMP(VGV->LEVEL[772
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Bup effective capacity decay constant net */
 {
  setpos( 200 );
  VGV->LEVEL[200] = VGV->LEVEL[199]*(1.000000+RAMP(VGV->LEVEL[771]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Bup effective capacity per provider indicated */
 {
  setpos( 202 );
  VGV->LEVEL[202] = ZIDZ(0,(ZIDZ(1,VGV->LEVEL[201]*EXP((-VGV->LEVEL[200
])*VGV->LEVEL[208]),(-VGV->LEVEL[200]))+ZIDZ(1,VGV->LEVEL[201],VGV->LEVEL[200
])),VGV->LEVEL[208]) ;
}
/* Bup effective capacity per provider net */
 {
  setpos( 203 );
  VGV->LEVEL[203] = VGV->LEVEL[202]*VGV->LEVEL[6] ;
}
/* Bup capacity effective */
 {
  setpos( 197 );
  VGV->LEVEL[197] = VGV->LEVEL[208]*VGV->LEVEL[203] ;
}
/* Bup demand fulfilment ratio prior */
 {
  setpos( 198 );
  VGV->LEVEL[198] = IF_THEN_ELSE(VGV->LEVEL[0]==2018.000000,0.587000
,NA) ;
}
/* Bup patients per provider */
 {
  setpos( 206 );
  VGV->LEVEL[206] = ZIDZ(0,VGV->LEVEL[2164+0*1],VGV->LEVEL[208]) ;
}
/* Bup patients per provider DATA */
 {
  setpos( 207 );
  VGV->LEVEL[207] = ZIDZ(0,VGV->LEVEL[2336],VGV->LEVEL[208]) ;
}
/* Nonfatal OD ratio Rx prior */
 {
  setpos( 580 );
  VGV->LEVEL[580] = IF_THEN_ELSE((VGV->LEVEL[0]<VGV->LEVEL[352]&&MODULO(
VGV->LEVEL[0],1.000000)==0),35.000000,NA) ;
}
/* Nonfatal OD ratio heroin prior */
 {
  setpos( 573 );
  VGV->LEVEL[573] = IF_THEN_ELSE((VGV->LEVEL[0]<VGV->LEVEL[352]&&MODULO(
VGV->LEVEL[0],1.000000)==0),30.000000,NA) ;
}
/* Nx utilization events H user fraction prior */
 {
  setpos( 662 );
  VGV->LEVEL[662] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,0.860000
,NA) ;
}
/* Rx OUD in remission total prior */
 {
  setpos( 1967 );
  VGV->LEVEL[1967] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[1968
],NA) ;
}
/* HUD in remission total prior */
 {
  setpos( 391 );
  VGV->LEVEL[391] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[392
],NA) ;
}
/* Probability Nx bystander heroin prior */
 {
  setpos( 835 );
  VGV->LEVEL[835] = IF_THEN_ELSE(VGV->LEVEL[0]==2019.000000,0.200000
,NA) ;
}
/* Rx OUD in stable remission total prior */
 {
  setpos( 1970 );
  VGV->LEVEL[1970] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[1971
],NA) ;
}
/* HUD in stable remission total prior */
 {
  setpos( 393 );
  VGV->LEVEL[393] = IF_THEN_ELSE(VGV->LEVEL[0]==2013.000000,VGV->LEVEL[394
],NA) ;
}
/* DataPriorBase */
 {
  setpos( 241+18*1 );
  VGV->LEVEL[241+18*1] = VGV->LEVEL[580] ;
}
 {
  setpos( 241+19*1 );
  VGV->LEVEL[241+19*1] = VGV->LEVEL[573] ;
}
 {
  setpos( 241+20*1 );
  VGV->LEVEL[241+20*1] = VGV->LEVEL[198] ;
}
 {
  setpos( 241+22*1 );
  VGV->LEVEL[241+22*1] = VGV->LEVEL[662] ;
}
 {
  setpos( 241+23*1 );
  VGV->LEVEL[241+23*1] = VGV->LEVEL[1967] ;
}
 {
  setpos( 241+24*1 );
  VGV->LEVEL[241+24*1] = VGV->LEVEL[391] ;
}
 {
  setpos( 241+21*1 );
  VGV->LEVEL[241+21*1] = VGV->LEVEL[835] ;
}
 {
  setpos( 241+25*1 );
  VGV->LEVEL[241+25*1] = VGV->LEVEL[1970] ;
}
 {
  setpos( 241+26*1 );
  VGV->LEVEL[241+26*1] = VGV->LEVEL[393] ;
}
/* DataPrior */
for(wrk->forind0=0;wrk->forind0<27;wrk->forind0++)
 {
  setpos( 214+sub0[wrk->forind0]*1 );
  VGV->LEVEL[214+sub0[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[0
]<=VGV->LEVEL[546],VGV->LEVEL[241+sub0[wrk->forind0]*1],NA) ;
}
/* Developing HUD rate no Rx OUD net */
 {
  setpos( 325 );
  VGV->LEVEL[325] = VGV->LEVEL[323]*(1.000000+RAMP(VGV->LEVEL[775]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Heroin availability coeff developing HUD */
 {
  setpos( 377 );
  VGV->LEVEL[377] = POWER(VGV->LEVEL[380],VGV->LEVEL[381]) ;
}
/* Effective SI users HUD development */
 {
  setpos( 344 );
  VGV->LEVEL[344] = VGV->LEVEL[397] ;
}
/* SI on developing HUD current */
 {
  setpos( 2000 );
  VGV->LEVEL[2000] = VGV->LEVEL[344]/VGV->LEVEL[802] ;
}
/* SI on developing HUD relative */
 {
  setpos( 2002 );
  VGV->LEVEL[2002] = VGV->LEVEL[2000]/VGV->LEVEL[2001] ;
}
/* Social influence coeff developing HUD */
 {
  setpos( 2069 );
  VGV->LEVEL[2069] = POWER(VGV->LEVEL[2002],VGV->LEVEL[2077]) ;
}
/* Developing HUD rate no Rx OUD effective */
 {
  setpos( 324 );
  VGV->LEVEL[324] = VGV->LEVEL[325]*VGV->LEVEL[377]*VGV->LEVEL[2069
] ;
}
/* Developing HUD no Rx OUD */
 {
  setpos( 322 );
  VGV->LEVEL[322] = VGV->LEVEL[18]*VGV->LEVEL[324] ;
}
/* Developing HUD rate with Rx OUD net */
 {
  setpos( 328 );
  VGV->LEVEL[328] = VGV->LEVEL[326]*(1.000000+RAMP(VGV->LEVEL[776]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx vs H availability coeff developing HUD with Rx OUD */
 {
  setpos( 1988 );
  VGV->LEVEL[1988] = POWER(VGV->LEVEL[1994],((-VGV->LEVEL[1991])))
 ;
}
/* Developing HUD rate with Rx OUD effective */
 {
  setpos( 327 );
  VGV->LEVEL[327] = VGV->LEVEL[328]*VGV->LEVEL[2069]*VGV->LEVEL[1988
] ;
}
/* Developing HUD with Rx OUD */
 {
  setpos( 329 );
  VGV->LEVEL[329] = VGV->LEVEL[33]*VGV->LEVEL[327] ;
}
/* Developing Rx OUD rate net */
 {
  setpos( 333 );
  VGV->LEVEL[333] = VGV->LEVEL[331]*(1.000000+RAMP(VGV->LEVEL[789]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Rx availability coeff developing Rx OUD */
 {
  setpos( 1942 );
  VGV->LEVEL[1942] = POWER(VGV->LEVEL[1945],VGV->LEVEL[1948]) ;
}
/* Effective SI users Rx OUD development */
 {
  setpos( 346 );
  VGV->LEVEL[346] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* SI on developing Rx OUD current */
 {
  setpos( 2003 );
  VGV->LEVEL[2003] = VGV->LEVEL[346]/VGV->LEVEL[802] ;
}
/* SI on developing Rx OUD relative */
 {
  setpos( 2005 );
  VGV->LEVEL[2005] = XIDZ(0,VGV->LEVEL[2003],VGV->LEVEL[2004],1.000000
) ;
}
/* Social influence coeff developing Rx OUD */
 {
  setpos( 2070 );
  VGV->LEVEL[2070] = POWER(VGV->LEVEL[2005],VGV->LEVEL[2078]) ;
}
/* Developing Rx OUD rate effective */
 {
  setpos( 332 );
  VGV->LEVEL[332] = VGV->LEVEL[333]*VGV->LEVEL[1942]*VGV->LEVEL[2070
] ;
}
/* Developing Rx OUD */
 {
  setpos( 330 );
  VGV->LEVEL[330] = VGV->LEVEL[21]*VGV->LEVEL[332] ;
}
/* Fraction HUD by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 356+sub9[wrk->forind0]*1 );
  VGV->LEVEL[356+sub9[wrk->forind0]*1] = ZIDZ(0,(VGV->LEVEL[12+sub9[wrk->forind0]
*1]+VGV->LEVEL[388+sub9[wrk->forind0]*1]),VGV->LEVEL[2164+sub9[wrk->forind0]
*1]) ;
}
/* Total heroin users */
 {
  setpos( 2170 );
  VGV->LEVEL[2170] = VGV->LEVEL[18]+VGV->LEVEL[1982]+VGV->LEVEL[397
] ;
}
/* Fraction of all heroin users with HUD */
 {
  setpos( 360 );
  VGV->LEVEL[360] = VGV->LEVEL[397]/VGV->LEVEL[2170] ;
}
/* Total Rx use excl heroin */
 {
  setpos( 2215 );
  VGV->LEVEL[2215] = VGV->LEVEL[21]+VGV->LEVEL[1976] ;
}
/* Fraction of all Rx users excl heroin with OUD */
 {
  setpos( 362 );
  VGV->LEVEL[362] = VGV->LEVEL[1976]/VGV->LEVEL[2215] ;
}
/* Total Rx users excl heroin DATA */
 {
  setpos( 2218 );
  VGV->LEVEL[2218] = VGV->LEVEL[1960]+VGV->LEVEL[1975] ;
}
/* Fraction of all Rx users excl heroin with OUD DATA */
 {
  setpos( 363 );
  VGV->LEVEL[363] = IF_THEN_ELSE(VGV->LEVEL[0]<2019.000000,VGV->LEVEL[1975
]/VGV->LEVEL[2218],NA) ;
}
/* Fraction of heroin initiation no Rx */
 {
  setpos( 364 );
  VGV->LEVEL[364] = VGV->LEVEL[473]/VGV->LEVEL[2167] ;
}
/* Fraction of heroin initiation with Rx misuse */
 {
  setpos( 366 );
  VGV->LEVEL[366] = VGV->LEVEL[478]/VGV->LEVEL[2167] ;
}
/* Fraction of heroin initiation with Rx OUD */
 {
  setpos( 368 );
  VGV->LEVEL[368] = VGV->LEVEL[481]/VGV->LEVEL[2167] ;
}
/* Rx OUD by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 1963+sub9[wrk->forind0]*1 );
  VGV->LEVEL[1963+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]+VGV->LEVEL[28+sub9[wrk->forind0]*1] ;
}
/* Fraction Rx OUD by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 374+sub9[wrk->forind0]*1 );
  VGV->LEVEL[374+sub9[wrk->forind0]*1] = ZIDZ(0,(VGV->LEVEL[1963+sub9[wrk->forind0]
*1]+VGV->LEVEL[1972+sub9[wrk->forind0]*1]+VGV->LEVEL[1978+sub9[wrk->forind0]
*1]),VGV->LEVEL[2164+sub9[wrk->forind0]*1]) ;
}
/* Heroin availability coeff net quit NDHU */
 {
  setpos( 379 );
  VGV->LEVEL[379] = POWER(VGV->LEVEL[380],(-VGV->LEVEL[383])) ;
}
/* HUD in early or Tx remission */
 {
  setpos( 387 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[388+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[387] = VGV->LEVEL[15]+wrk->temp0 ;
}
/* Initial Rx OUD no H in Tx */
 {
  setpos( 418+1*1 );
  VGV->LEVEL[418+1*1] = VGV->LEVEL[429+3*1]*VGV->LEVEL[449+3*1] ;
}
 {
  setpos( 418+2*1 );
  VGV->LEVEL[418+2*1] = VGV->LEVEL[429+4*1]*VGV->LEVEL[449+4*1] ;
}
/* MMT capacity estimated */
 {
  setpos( 558 );
  VGV->LEVEL[558] = VGV->LEVEL[922+4*1]*(1.000000+RAMP(VGV->LEVEL[781
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Perceived risk coeff net quit NDHU with Rx */
 {
  setpos( 742 );
  VGV->LEVEL[742] = POWER(VGV->LEVEL[748],VGV->LEVEL[760]) ;
}
/* Net quitting heroin with Rx misuse */
 {
  setpos( 565 );
  VGV->LEVEL[565] = VGV->LEVEL[18]*VGV->LEVEL[561]*VGV->LEVEL[742]
 ;
}
/* Perceived risk coeff net quit heroin with Rx OUD */
 {
  setpos( 740 );
  VGV->LEVEL[740] = POWER(VGV->LEVEL[748],VGV->LEVEL[758]) ;
}
/* Net quitting heroin with Rx OUD */
 {
  setpos( 566 );
  VGV->LEVEL[566] = VGV->LEVEL[33]*VGV->LEVEL[562]*VGV->LEVEL[740]
 ;
}
/* Perceived risk coeff net quit NDHU */
 {
  setpos( 741 );
  VGV->LEVEL[741] = POWER(VGV->LEVEL[748],VGV->LEVEL[759]) ;
}
}
void mdl_func12(GLOB_VARS *VGV) ;
void mdl_func12(GLOB_VARS *VGV){double temp[10];
/* Net quitting NDHU */
 {
  setpos( 567 );
  VGV->LEVEL[567] = VGV->LEVEL[18]*VGV->LEVEL[563]*VGV->LEVEL[741]
*VGV->LEVEL[379] ;
}
/* Perceived risk coeff net quit Rx misuse */
 {
  setpos( 743 );
  VGV->LEVEL[743] = POWER(VGV->LEVEL[753],VGV->LEVEL[761]) ;
}
/* Rx availability coeff net quit Rx misuse */
 {
  setpos( 1944 );
  VGV->LEVEL[1944] = POWER(VGV->LEVEL[1945],(-VGV->LEVEL[1950])) ;
}
/* Net quitting Rx misuse */
 {
  setpos( 568 );
  VGV->LEVEL[568] = VGV->LEVEL[21]*VGV->LEVEL[564]*VGV->LEVEL[743]
*VGV->LEVEL[1944] ;
}
/* Nonfatal OD ratio HUD */
 {
  setpos( 574 );
  VGV->LEVEL[574] = VGV->LEVEL[721]/VGV->LEVEL[698]-1.000000 ;
}
/* Nonfatal ODs HUD */
 {
  setpos( 582 );
  VGV->LEVEL[582] = VGV->LEVEL[2193]*VGV->LEVEL[574] ;
}
/* Nonfatal OD ratio NDHU */
 {
  setpos( 575 );
  VGV->LEVEL[575] = VGV->LEVEL[722]/VGV->LEVEL[700]-1.000000 ;
}
/* Nonfatal ODs NDHU */
 {
  setpos( 583 );
  VGV->LEVEL[583] = VGV->LEVEL[692]*VGV->LEVEL[575] ;
}
/* Total nonfatal overdoses heroin */
 {
  setpos( 2183 );
  VGV->LEVEL[2183] = VGV->LEVEL[582]+VGV->LEVEL[583] ;
}
/* Nonfatal OD ratio heroin */
 {
  setpos( 572 );
  VGV->LEVEL[572] = VGV->LEVEL[2183]/VGV->LEVEL[2191] ;
}
/* Overdose rate total Rx OUD no H */
 {
  setpos( 724 );
  VGV->LEVEL[724] = VGV->LEVEL[719]+VGV->LEVEL[723] ;
}
/* Nonfatal OD ratio Rx OUD no H */
 {
  setpos( 578 );
  VGV->LEVEL[578] = VGV->LEVEL[724]/VGV->LEVEL[702]-1.000000 ;
}
/* Nonfatal ODs Rx OUD no H */
 {
  setpos( 585 );
  VGV->LEVEL[585] = VGV->LEVEL[2196]*VGV->LEVEL[578] ;
}
/* Nonfatal OD ratio Rx misuse */
 {
  setpos( 577 );
  VGV->LEVEL[577] = VGV->LEVEL[718]/VGV->LEVEL[701]-1.000000 ;
}
/* Nonfatal ODs Rx misuse */
 {
  setpos( 584 );
  VGV->LEVEL[584] = VGV->LEVEL[707]*VGV->LEVEL[577] ;
}
/* Nonfatal OD ratio Rx OUD with H */
 {
  setpos( 579 );
  VGV->LEVEL[579] = VGV->LEVEL[719]/VGV->LEVEL[703]-1.000000 ;
}
/* Nonfatal ODs Rx OUD with H */
 {
  setpos( 586 );
  VGV->LEVEL[586] = VGV->LEVEL[2197]*VGV->LEVEL[579] ;
}
/* Total nonfatal overdoses Rx */
 {
  setpos( 2184 );
  VGV->LEVEL[2184] = VGV->LEVEL[585]+VGV->LEVEL[584]+VGV->LEVEL[586
] ;
}
/* Total overdose deaths Rx */
 {
  setpos( 2195 );
  VGV->LEVEL[2195] = VGV->LEVEL[691]+VGV->LEVEL[707]+VGV->LEVEL[2196
]+VGV->LEVEL[2197] ;
}
/* Nonfatal OD ratio Rx */
 {
  setpos( 576 );
  VGV->LEVEL[576] = VGV->LEVEL[2184]/VGV->LEVEL[2195] ;
}
/* Total nonfatal overdoses */
 {
  setpos( 2182 );
  VGV->LEVEL[2182] = VGV->LEVEL[585]+VGV->LEVEL[582]+VGV->LEVEL[583
]+VGV->LEVEL[586]+VGV->LEVEL[584] ;
}
/* Nonfatal OD ratio total */
 {
  setpos( 581 );
  VGV->LEVEL[581] = XIDZ(0,VGV->LEVEL[2182],VGV->LEVEL[2186],1.000000
) ;
}
/* NonOD death HUD */
 {
  setpos( 587 );
  VGV->LEVEL[587] = VGV->LEVEL[17]*VGV->LEVEL[598] ;
}
/* NonOD death rate HUD or OUD in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 599+sub9[wrk->forind0]*1 );
  VGV->LEVEL[599+sub9[wrk->forind0]*1] = (1.000000-VGV->LEVEL[956+sub9[wrk->forind0]
*1])*VGV->LEVEL[598]*VGV->LEVEL[334+sub9[wrk->forind0]*1]+VGV->LEVEL[956
+sub9[wrk->forind0]*1]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in MOUD Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 588+sub9[wrk->forind0]*1 );
  VGV->LEVEL[588+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death HUD in remission */
 {
  setpos( 591 );
  VGV->LEVEL[591] = VGV->LEVEL[15]*VGV->LEVEL[604] ;
}
/* NonOD death HUD in stable remission */
 {
  setpos( 592 );
  VGV->LEVEL[592] = VGV->LEVEL[16]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD no H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 608+sub9[wrk->forind0]*1 );
  VGV->LEVEL[608+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death Rx OUD with H in Tx */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 614+sub9[wrk->forind0]*1 );
  VGV->LEVEL[614+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[599+sub9[wrk->forind0]*1] ;
}
/* NonOD death in Tx total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 593+sub9[wrk->forind0]*1 );
  VGV->LEVEL[593+sub9[wrk->forind0]*1] = VGV->LEVEL[588+sub9[wrk->forind0]
*1]+VGV->LEVEL[608+sub9[wrk->forind0]*1]+VGV->LEVEL[614+sub9[wrk->forind0]
*1] ;
}
/* NonOD death rate misuse */
 {
  setpos( 602 );
  VGV->LEVEL[602] = (VGV->LEVEL[604]+(VGV->LEVEL[398]*VGV->LEVEL[604
]))/2.000000 ;
}
/* NonOD death misuse */
 {
  setpos( 596 );
  VGV->LEVEL[596] = VGV->LEVEL[21]*VGV->LEVEL[602] ;
}
/* NonOD death rate NDHU */
 {
  setpos( 603 );
  VGV->LEVEL[603] = (VGV->LEVEL[598]+VGV->LEVEL[602])/2.000000 ;
}
/* NonOD death NDHU */
 {
  setpos( 597 );
  VGV->LEVEL[597] = VGV->LEVEL[18]*VGV->LEVEL[603] ;
}
/* NonOD death Rx OUD no H */
 {
  setpos( 605 );
  VGV->LEVEL[605] = VGV->LEVEL[27]*VGV->LEVEL[598] ;
}
/* NonOD death Rx OUD no H in remission */
 {
  setpos( 606 );
  VGV->LEVEL[606] = VGV->LEVEL[25]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD no H in stable remission */
 {
  setpos( 607 );
  VGV->LEVEL[607] = VGV->LEVEL[26]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD with H */
 {
  setpos( 611 );
  VGV->LEVEL[611] = VGV->LEVEL[33]*VGV->LEVEL[598] ;
}
/* NonOD death Rx OUD with H in remission */
 {
  setpos( 612 );
  VGV->LEVEL[612] = VGV->LEVEL[31]*VGV->LEVEL[604] ;
}
/* NonOD death Rx OUD with H in stable remission */
 {
  setpos( 613 );
  VGV->LEVEL[613] = VGV->LEVEL[32]*VGV->LEVEL[604] ;
}
/* NormErr */
for(wrk->forind0=0;wrk->forind0<18;wrk->forind0++)
 {
  setpos( 617+sub8[wrk->forind0]*1 );
  VGV->LEVEL[617+sub8[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[268
+sub8[wrk->forind0]*1]==NA,NA,ZIDZ(0,(VGV->LEVEL[268+sub8[wrk->forind0]
*1]-VGV->LEVEL[2042+sub8[wrk->forind0]*1]),VGV->LEVEL[2042+sub8[wrk->forind0]
*1])) ;
}
/* Total overdoses heroin */
 {
  setpos( 2203 );
  VGV->LEVEL[2203] = VGV->LEVEL[2183]+VGV->LEVEL[2191] ;
}
/* Nx utilization events H user */
 {
  setpos( 660 );
  VGV->LEVEL[660] = VGV->LEVEL[2203]*VGV->LEVEL[840]*VGV->LEVEL[834
] ;
}
/* Nx kit utilization fraction H user */
 {
  setpos( 649 );
  VGV->LEVEL[649] = VGV->LEVEL[660]*VGV->LEVEL[657]/VGV->LEVEL[651
] ;
}
/* Total overdoses Rx */
 {
  setpos( 2204 );
  VGV->LEVEL[2204] = VGV->LEVEL[2184]+VGV->LEVEL[2195] ;
}
/* Nx utilization events Rx user */
 {
  setpos( 663 );
  VGV->LEVEL[663] = VGV->LEVEL[2204]*VGV->LEVEL[840]*VGV->LEVEL[836
] ;
}
/* Nx kit utilization fraction Rx user */
 {
  setpos( 650 );
  VGV->LEVEL[650] = VGV->LEVEL[663]*VGV->LEVEL[657]/VGV->LEVEL[654
] ;
}
/* Nx utilization deaths averted H user */
 {
  setpos( 658 );
  VGV->LEVEL[658] = VGV->LEVEL[660]*(1.000000-VGV->LEVEL[60])*(1.000000
-VGV->LEVEL[842]) ;
}
/* Total overdoses synth baseline */
 {
  setpos( 2206 );
  VGV->LEVEL[2206] = VGV->LEVEL[723]*VGV->LEVEL[27] ;
}
/* Total overdoses Rx synth baseline fraction */
 {
  setpos( 2205 );
  VGV->LEVEL[2205] = VGV->LEVEL[2206]/VGV->LEVEL[2204] ;
}
/* Nx utilization deaths averted Rx user */
 {
  setpos( 659 );
  VGV->LEVEL[659] = VGV->LEVEL[663]*(VGV->LEVEL[2205]*(1.000000-VGV->LEVEL[57
])+(1.000000-VGV->LEVEL[2205])*(1.000000-VGV->LEVEL[61]))*(1.000000
-VGV->LEVEL[842]) ;
}
/* Nx utilization events total */
 {
  setpos( 664 );
  VGV->LEVEL[664] = VGV->LEVEL[660]+VGV->LEVEL[663] ;
}
/* Nx utilization events H user fraction */
 {
  setpos( 661 );
  VGV->LEVEL[661] = ZIDZ(0,VGV->LEVEL[660],VGV->LEVEL[664]) ;
}
/* Overdose death rate base HUD */
 {
  setpos( 693 );
  VGV->LEVEL[693] = VGV->LEVEL[716]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
]*(1.000000-VGV->LEVEL[353]) ;
}
/* OD death fraction base HUD */
 {
  setpos( 665 );
  VGV->LEVEL[665] = VGV->LEVEL[693]/VGV->LEVEL[698] ;
}
/* Overdose death rate base NDHU */
 {
  setpos( 696 );
  VGV->LEVEL[696] = VGV->LEVEL[717]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
]*(1.000000-VGV->LEVEL[353]) ;
}
/* OD death fraction base NDHU */
 {
  setpos( 666 );
  VGV->LEVEL[666] = VGV->LEVEL[696]/VGV->LEVEL[700] ;
}
/* Overdose death rate synth HUD */
 {
  setpos( 705 );
  VGV->LEVEL[705] = MAX(0,VGV->LEVEL[698]-VGV->LEVEL[693]) ;
}
/* OD death fraction synth HUD */
 {
  setpos( 669 );
  VGV->LEVEL[669] = VGV->LEVEL[705]/VGV->LEVEL[698] ;
}
/* Overdose death rate synth NDHU */
 {
  setpos( 706 );
  VGV->LEVEL[706] = MAX(0,VGV->LEVEL[700]-VGV->LEVEL[696]) ;
}
/* OD death fraction synth NDHU */
 {
  setpos( 670 );
  VGV->LEVEL[670] = VGV->LEVEL[706]/VGV->LEVEL[700] ;
}
/* Overdose death in Tx total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 688+sub9[wrk->forind0]*1 );
  VGV->LEVEL[688+sub9[wrk->forind0]*1] = VGV->LEVEL[685+sub9[wrk->forind0]
*1]+VGV->LEVEL[709+sub9[wrk->forind0]*1]+VGV->LEVEL[713+sub9[wrk->forind0]
*1] ;
}
/* Overdose death rate base HUD no synth counterfactual */
 {
  setpos( 694 );
  VGV->LEVEL[694] = VGV->LEVEL[716]*(1.000000-VGV->LEVEL[58])*VGV->LEVEL[837
] ;
}
/* Overdose death rate HUD no Nx counterfactual */
 {
  setpos( 699 );
  VGV->LEVEL[699] = VGV->LEVEL[721]*(1.000000-VGV->LEVEL[60])*(1.000000
-VGV->LEVEL[840]*VGV->LEVEL[842]) ;
}
/* OxyContin withdrawal supply impact */
 {
  setpos( 727 );
  VGV->LEVEL[727] = PULSE(VGV->LEVEL[728],VGV->LEVEL[725])*VGV->LEVEL[726
]/VGV->LEVEL[725] ;
}
/* Perceived risk heroin use indicated */
 {
  setpos( 746 );
  VGV->LEVEL[746] = VGV->LEVEL[2191]+VGV->LEVEL[2183]*VGV->LEVEL[762
] ;
}
/* Perceived risk Rx use indicated */
 {
  setpos( 751 );
  VGV->LEVEL[751] = VGV->LEVEL[2195]+VGV->LEVEL[762]*VGV->LEVEL[2184
] ;
}
/* Tx effective capacity fraction */
 {
  setpos( 2259+1*1 );
  VGV->LEVEL[2259+1*1] = VGV->LEVEL[560] ;
}
 {
  setpos( 2259+2*1 );
  VGV->LEVEL[2259+2*1] = VGV->LEVEL[2377] ;
}
/* Viv capacity estimated */
 {
  setpos( 2375 );
  VGV->LEVEL[2375] = VGV->LEVEL[922+5*1]*(1.000000+RAMP(VGV->LEVEL[800
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Tx capacity effective */
 {
  setpos( 2235+0*1 );
  VGV->LEVEL[2235+0*1] = VGV->LEVEL[197]*VGV->LEVEL[2259+0*1] ;
}
 {
  setpos( 2235+1*1 );
  VGV->LEVEL[2235+1*1] = VGV->LEVEL[558]*VGV->LEVEL[2259+1*1] ;
}
 {
  setpos( 2235+2*1 );
  VGV->LEVEL[2235+2*1] = VGV->LEVEL[2375]*VGV->LEVEL[2259+2*1] ;
}
/* Tx intake capacity */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2328+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2328+sub9[wrk->forind0]*1] = MAX(0,VGV->LEVEL[35+sub9[wrk->forind0]
*1]+(VGV->LEVEL[2235+sub9[wrk->forind0]*1]-VGV->LEVEL[2164+sub9[wrk->forind0]
*1])/VGV->LEVEL[2332+sub9[wrk->forind0]*1]) ;
}
/* Tx seeking rate Rx OUD no H total net */
 {
  setpos( 2364 );
  VGV->LEVEL[2364] = VGV->LEVEL[2363]*(1.000000+RAMP(VGV->LEVEL[799
]/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801])
) ;
}
/* Tx seeking fraction by med Rx OUD */
 {
  setpos( 2347+0*1 );
  VGV->LEVEL[2347+0*1] = VGV->LEVEL[2343] ;
}
/* Tx seeking rate Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2360+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2360+sub9[wrk->forind0]*1] = VGV->LEVEL[2364]*VGV->LEVEL[2347
+sub9[wrk->forind0]*1] ;
}
/* Tx seeking affordability loss fraction net */
 {
  setpos( 2340 );
  VGV->LEVEL[2340] = VGV->LEVEL[2339]+RAMP(IF_THEN_ELSE(VGV->LEVEL[797
]>=0,VGV->LEVEL[797]*(1.000000-VGV->LEVEL[2339]),VGV->LEVEL[797]*VGV->LEVEL[2339
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Tx seeking nonaffordability loss fraction net */
 {
  setpos( 2355 );
  VGV->LEVEL[2355] = VGV->LEVEL[2354]+RAMP(IF_THEN_ELSE(VGV->LEVEL[798
]>=0,VGV->LEVEL[798]*(1.000000-VGV->LEVEL[2354]),VGV->LEVEL[798]*VGV->LEVEL[2354
])/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]
) ;
}
/* Tx seeking barrier loss fraction */
 {
  setpos( 2341 );
  VGV->LEVEL[2341] = MIN(1.000000,VGV->LEVEL[2340]+VGV->LEVEL[2355
]) ;
}
/* Tx demand Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2250+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2250+sub9[wrk->forind0]*1] = VGV->LEVEL[27]*VGV->LEVEL[2360
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx seeking rate Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2365+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2365+sub9[wrk->forind0]*1] = VGV->LEVEL[2360+sub9[wrk->forind0]
*1] ;
}
/* Tx demand Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2253+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2253+sub9[wrk->forind0]*1] = VGV->LEVEL[33]*VGV->LEVEL[2365
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx seeking fraction by med HUD */
 {
  setpos( 2344+0*1 );
  VGV->LEVEL[2344+0*1] = VGV->LEVEL[2342] ;
}
/* Tx seeking rate HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2356+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2356+sub9[wrk->forind0]*1] = VGV->LEVEL[2364]*VGV->LEVEL[2359
]*VGV->LEVEL[2344+sub9[wrk->forind0]*1] ;
}
/* Tx demand HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2247+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2247+sub9[wrk->forind0]*1] = VGV->LEVEL[17]*VGV->LEVEL[2356
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2341]) ;
}
/* Tx capacity relative to demand */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2241+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2241+sub9[wrk->forind0]*1] = ZIDZ(0,VGV->LEVEL[2328+sub9[wrk->forind0]
*1],VGV->LEVEL[2250+sub9[wrk->forind0]*1]+VGV->LEVEL[2253+sub9[wrk->forind0]
*1]+VGV->LEVEL[2247+sub9[wrk->forind0]*1]) ;
}
/* Tx demand fulfilment ratio */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2244+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2244+sub9[wrk->forind0]*1] = MIN(VGV->LEVEL[2241+sub9[wrk->forind0]
*1],1.000000) ;
}
/* Rx OUD in early or Tx remission */
 {
  setpos( 1966 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[1972+sub9[wrk->sumind0]*1]+VGV->LEVEL[1978
+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[1966] = VGV->LEVEL[25]+VGV->LEVEL[31]+wrk->temp0 ;
}
/* Rx OUD in stable remission total */
 {
  setpos( 1969 );
  VGV->LEVEL[1969] = VGV->LEVEL[26]+VGV->LEVEL[32] ;
}
/* SimPrior */
 {
  setpos( 2015+18*1 );
  VGV->LEVEL[2015+18*1] = VGV->LEVEL[576] ;
}
 {
  setpos( 2015+19*1 );
  VGV->LEVEL[2015+19*1] = VGV->LEVEL[572] ;
}
 {
  setpos( 2015+20*1 );
  VGV->LEVEL[2015+20*1] = VGV->LEVEL[2244+0*1] ;
}
 {
  setpos( 2015+22*1 );
  VGV->LEVEL[2015+22*1] = VGV->LEVEL[661] ;
}
 {
  setpos( 2015+23*1 );
  VGV->LEVEL[2015+23*1] = VGV->LEVEL[1966] ;
}
 {
  setpos( 2015+24*1 );
  VGV->LEVEL[2015+24*1] = VGV->LEVEL[387] ;
}
 {
  setpos( 2015+21*1 );
  VGV->LEVEL[2015+21*1] = VGV->LEVEL[834] ;
}
 {
  setpos( 2015+25*1 );
  VGV->LEVEL[2015+25*1] = VGV->LEVEL[1969] ;
}
 {
  setpos( 2015+26*1 );
  VGV->LEVEL[2015+26*1] = VGV->LEVEL[16] ;
}
/* PriorErr */
for(wrk->forind0=0;wrk->forind0<27;wrk->forind0++)
 {
  setpos( 807+sub0[wrk->forind0]*1 );
  VGV->LEVEL[807+sub0[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[214
+sub0[wrk->forind0]*1]==NA||VGV->LEVEL[2015+sub0[wrk->forind0]*1]==
NA,0,(-POWER(((VGV->LEVEL[2015+sub0[wrk->forind0]*1]-VGV->LEVEL[214
+sub0[wrk->forind0]*1])*VGV->LEVEL[2432+0*27+sub0[wrk->forind0]*1]
),2.000000))/2.000000/VGV->LEVEL[2158]) ;
}
/* Projected total overdose deaths */
 {
  setpos( 843 );
  VGV->LEVEL[843] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[546],0,VGV->LEVEL[2186
]) ;
}
}
void mdl_func13(GLOB_VARS *VGV) ;
void mdl_func13(GLOB_VARS *VGV){double temp[10];
/* Rx OUD all total */
 {
  setpos( 1961 );
  VGV->LEVEL[1961] = VGV->LEVEL[1976]+VGV->LEVEL[1982] ;
}
/* Total with UD */
 {
  setpos( 2222 );
  VGV->LEVEL[2222] = VGV->LEVEL[397]+VGV->LEVEL[1961] ;
}
/* Projected total with UD */
 {
  setpos( 844 );
  VGV->LEVEL[844] = IF_THEN_ELSE(VGV->LEVEL[0]<VGV->LEVEL[546],0,VGV->LEVEL[2222
]) ;
}
/* radio hud to rx oud data */
 {
  setpos( 944 );
  VGV->LEVEL[944] = VGV->LEVEL[386]/VGV->LEVEL[1962] ;
}
/* ratio hud to rx oud model */
 {
  setpos( 945 );
  VGV->LEVEL[945] = VGV->LEVEL[397]/VGV->LEVEL[1961] ;
}
/* Relapse rate HUD net */
 {
  setpos( 947 );
  VGV->LEVEL[947] = VGV->LEVEL[946]*(1.000000+RAMP(VGV->LEVEL[788]
/VGV->LEVEL[801],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]))
 ;
}
/* Total HUD in remission not in Tx */
 {
  setpos( 2173 );
  VGV->LEVEL[2173] = VGV->LEVEL[15]+VGV->LEVEL[16] ;
}
/* Total HUD in remission */
 {
  setpos( 2172 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[388+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2172] = VGV->LEVEL[2173]+wrk->temp0 ;
}
/* Total Rx OUD in Remission not in Tx */
 {
  setpos( 2214 );
  VGV->LEVEL[2214] = VGV->LEVEL[25]+VGV->LEVEL[31]+VGV->LEVEL[26]+
VGV->LEVEL[32] ;
}
/* Total in Rx OUD Remission */
 {
  setpos( 2179 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[1972+sub9[wrk->sumind0]*1] ;
    wrk->temp1 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp1 += VGV->LEVEL[1978+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2179] = wrk->temp0+wrk->temp1+VGV->LEVEL[2214] ;
}
/* Total in Remission */
 {
  setpos( 2174 );
  VGV->LEVEL[2174] = VGV->LEVEL[2172]+VGV->LEVEL[2179] ;
}
/* SI on remission current */
 {
  setpos( 2012 );
  VGV->LEVEL[2012] = VGV->LEVEL[2174]/VGV->LEVEL[802] ;
}
/* SI on remission relative */
 {
  setpos( 2014 );
  VGV->LEVEL[2014] = VGV->LEVEL[2012]/VGV->LEVEL[2013] ;
}
/* Social influence strength relapse net */
 {
  setpos( 2084 );
  VGV->LEVEL[2084] = VGV->LEVEL[2083]+RAMP(VGV->LEVEL[792]/VGV->LEVEL[801
],VGV->LEVEL[768],VGV->LEVEL[768]+VGV->LEVEL[801]) ;
}
/* Social influence coefficient relapse */
 {
  setpos( 2075 );
  VGV->LEVEL[2075] = POWER(VGV->LEVEL[2014],(-VGV->LEVEL[2084])) ;
}
/* Relapsing to Rx OUD no H */
 {
  setpos( 952 );
  VGV->LEVEL[952] = VGV->LEVEL[25]*VGV->LEVEL[947]*VGV->LEVEL[948]
*VGV->LEVEL[2075] ;
}
/* Relapsing to Rx OUD with H */
 {
  setpos( 954 );
  VGV->LEVEL[954] = VGV->LEVEL[31]*VGV->LEVEL[947]*VGV->LEVEL[948]
*VGV->LEVEL[2075] ;
}
/* Relapsing to HUD */
 {
  setpos( 950 );
  VGV->LEVEL[950] = VGV->LEVEL[15]*VGV->LEVEL[947]*VGV->LEVEL[2075
] ;
}
/* Relapsing from remission total */
 {
  setpos( 949 );
  VGV->LEVEL[949] = VGV->LEVEL[952]+VGV->LEVEL[954]+VGV->LEVEL[950
] ;
}
/* Tx exit with UD rate HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2310+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2310+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2307+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2307+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[2310+sub9[wrk->forind0]*1] ;
}
/* Relapsing to HUD total */
 {
  setpos( 951 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2307+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[951] = VGV->LEVEL[950]+wrk->temp0 ;
}
/* Tx exit with UD rate Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2313+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2313+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2319+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2319+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[2313+sub9[wrk->forind0]*1] ;
}
/* Relapsing to Rx OUD no H total */
 {
  setpos( 953 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2319+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[953] = VGV->LEVEL[952]+wrk->temp0 ;
}
/* Tx exit with UD rate Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2316+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2316+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*(1.000000-VGV->LEVEL[2368+sub9[wrk->forind0]
*1]) ;
}
/* Tx exit with UD Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2322+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2322+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[2316+sub9[wrk->forind0]*1] ;
}
/* Relapsing to Rx OUD with H total */
 {
  setpos( 955 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2322+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[955] = VGV->LEVEL[954]+wrk->temp0 ;
}
/* Remission relative to disorder */
 {
  setpos( 966 );
  VGV->LEVEL[966] = VGV->LEVEL[2174]/VGV->LEVEL[2222] ;
}
/* Remitting HUD no MOUD Tx */
 {
  setpos( 967 );
  VGV->LEVEL[967] = VGV->LEVEL[17]*VGV->LEVEL[962] ;
}
/* Remitting Rx OUD no H no MOUD Tx */
 {
  setpos( 968 );
  VGV->LEVEL[968] = VGV->LEVEL[27]*VGV->LEVEL[963] ;
}
/* Remitting Rx OUD with H no MOUD Tx */
 {
  setpos( 969 );
  VGV->LEVEL[969] = VGV->LEVEL[33]*VGV->LEVEL[965] ;
}
/* RepErr */
for(wrk->forind0=0;wrk->forind0<18;wrk->forind0++)
 {
  setpos( 970+sub8[wrk->forind0]*1 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<34;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[997+sub8[wrk->forind0]*34+sub10[wrk->sumind0]
*1]*VGV->LEVEL[500+sub10[wrk->sumind0]*1] ;
    wrk->temp1 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<34;wrk->sumind0++)
    wrk->temp1 += VGV->LEVEL[997+sub8[wrk->forind0]*34+sub10[wrk->sumind0]
*1]*VGV->LEVEL[500+sub10[wrk->sumind0]*1] ;
  VGV->LEVEL[970+sub8[wrk->forind0]*1] = MAX((-0.999000),IF_THEN_ELSE(
VGV->LEVEL[2129]==1.000000,wrk->temp0,IF_THEN_ELSE(VGV->LEVEL[617+sub8[wrk->forind0]
*1]==NA,wrk->temp1,VGV->LEVEL[617+sub8[wrk->forind0]*1]))) ;
}
/* RepVar */
for(wrk->forind0=0;wrk->forind0<18;wrk->forind0++)
 {
  setpos( 1915+sub8[wrk->forind0]*1 );
  VGV->LEVEL[1915+sub8[wrk->forind0]*1] = VGV->LEVEL[2042+sub8[wrk->forind0]
*1]*(1.000000+RAMP(1.000000,VGV->LEVEL[569],VGV->LEVEL[569]+1.000000
)*VGV->LEVEL[970+sub8[wrk->forind0]*1]) ;
}
/* Rx street supply impact policy */
 {
  setpos( 1983 );
  VGV->LEVEL[1983] = PULSE(VGV->LEVEL[768],VGV->LEVEL[801])*VGV->LEVEL[790
] ;
}
/* Rx street supply readjustment */
 {
  setpos( 1984 );
  VGV->LEVEL[1984] = VGV->LEVEL[34]/VGV->LEVEL[2159] ;
}
/* Rx street supply shocks */
 {
  setpos( 1985 );
  VGV->LEVEL[1985] = VGV->LEVEL[727]+VGV->LEVEL[1983] ;
}
/* SAVEPER */
 {
  setpos( 1995 );
  VGV->LEVEL[1995] = VGV->LEVEL[2158] ;
}
/* Social influence coefficient remission */
 {
  setpos( 2076 );
  VGV->LEVEL[2076] = POWER(VGV->LEVEL[2014],VGV->LEVEL[2085]) ;
}
/* Stabilizing remission HUD */
 {
  setpos( 2086 );
  VGV->LEVEL[2086] = VGV->LEVEL[15]/VGV->LEVEL[2160] ;
}
/* Stabilizing remission Rx OUD no H */
 {
  setpos( 2087 );
  VGV->LEVEL[2087] = VGV->LEVEL[25]/VGV->LEVEL[2160] ;
}
/* Stabilizing remission Rx OUD with H */
 {
  setpos( 2088 );
  VGV->LEVEL[2088] = VGV->LEVEL[31]/VGV->LEVEL[2160] ;
}
/* SynVar */
for(wrk->forind0=0;wrk->forind0<27;wrk->forind0++)
 {
  setpos( 2131+sub0[wrk->forind0]*1 );
  VGV->LEVEL[2131+sub0[wrk->forind0]*1] = IF_THEN_ELSE(VGV->LEVEL[268
+sub0[wrk->forind0]*1]==NA,NA,VGV->LEVEL[1915+sub0[wrk->forind0]*1
]) ;
}
/* Total annual Tx receipt by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2161+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2161+sub9[wrk->forind0]*1] = VGV->LEVEL[2164+sub9[wrk->forind0]
*1]/VGV->LEVEL[2231+sub9[wrk->forind0]*1] ;
}
/* Total in Remission by MOUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2175+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2175+sub9[wrk->forind0]*1] = VGV->LEVEL[388+sub9[wrk->forind0]
*1]+VGV->LEVEL[1972+sub9[wrk->forind0]*1]+VGV->LEVEL[1978+sub9[wrk->forind0]
*1] ;
}
/* Total in Remission in Treatment */
 {
  setpos( 2178 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2175+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2178] = wrk->temp0 ;
}
/* Total nondisordered heroin users */
 {
  setpos( 2180 );
  VGV->LEVEL[2180] = VGV->LEVEL[18]+VGV->LEVEL[1982] ;
}
/* Total overdose deaths base heroin */
 {
  setpos( 2187 );
  VGV->LEVEL[2187] = VGV->LEVEL[692]*VGV->LEVEL[666]+VGV->LEVEL[2193
]*VGV->LEVEL[665] ;
}
/* Total overdose deaths synth excess */
 {
  setpos( 2200 );
  VGV->LEVEL[2200] = VGV->LEVEL[692]*VGV->LEVEL[670]+VGV->LEVEL[2193
]*VGV->LEVEL[669] ;
}
/* Total overdose deaths synth */
 {
  setpos( 2198 );
  VGV->LEVEL[2198] = VGV->LEVEL[2199]+VGV->LEVEL[2200] ;
}
/* Total prescription opioid Rx */
 {
  setpos( 2207 );
  VGV->LEVEL[2207] = VGV->LEVEL[729]*VGV->LEVEL[803] ;
}
/* Total Rx misuse initiation */
 {
  setpos( 2209 );
  VGV->LEVEL[2209] = VGV->LEVEL[484]+VGV->LEVEL[488] ;
}
/* Total Rx MME prescribed */
 {
  setpos( 2212 );
  VGV->LEVEL[2212] = VGV->LEVEL[729]*VGV->LEVEL[803]*VGV->LEVEL[46
]*VGV->LEVEL[52] ;
}
/* Total Rx users */
 {
  setpos( 2216 );
  VGV->LEVEL[2216] = VGV->LEVEL[21]+VGV->LEVEL[1961]+VGV->LEVEL[397
]*VGV->LEVEL[370]+VGV->LEVEL[372]*VGV->LEVEL[18] ;
}
/* Total Rx Users corrected DATA */
 {
  setpos( 2217 );
  VGV->LEVEL[2217] = IF_THEN_ELSE(VGV->LEVEL[0]<2019.000000,VGV->LEVEL[1960
]+VGV->LEVEL[1962]+(VGV->LEVEL[386]*VGV->LEVEL[370])+(VGV->LEVEL[2181
]*VGV->LEVEL[372]),NA) ;
}
/* Tx engagement HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2262+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2262+sub9[wrk->forind0]*1] = VGV->LEVEL[2247+sub9[wrk->forind0]
*1]*VGV->LEVEL[2244+sub9[wrk->forind0]*1] ;
}
/* Tx engagement rate actual HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2265+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2265+sub9[wrk->forind0]*1] = VGV->LEVEL[2262+sub9[wrk->forind0]
*1]/VGV->LEVEL[397] ;
}
/* Total Tx engagement rate HUD */
 {
  setpos( 2219 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2265+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2219] = wrk->temp0 ;
}
/* Tx engagement Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2274+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2274+sub9[wrk->forind0]*1] = VGV->LEVEL[2250+sub9[wrk->forind0]
*1]*VGV->LEVEL[2244+sub9[wrk->forind0]*1] ;
}
/* Tx engagement rate actual Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2268+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2268+sub9[wrk->forind0]*1] = VGV->LEVEL[2274+sub9[wrk->forind0]
*1]/VGV->LEVEL[1976] ;
}
/* Total Tx engagement rate Rx OUD no H */
 {
  setpos( 2220 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2268+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2220] = wrk->temp0 ;
}
/* Tx engagement Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2277+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2277+sub9[wrk->forind0]*1] = VGV->LEVEL[2253+sub9[wrk->forind0]
*1]*VGV->LEVEL[2244+sub9[wrk->forind0]*1] ;
}
/* Tx engagement rate actual Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2271+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2271+sub9[wrk->forind0]*1] = VGV->LEVEL[2277+sub9[wrk->forind0]
*1]/VGV->LEVEL[1982] ;
}
/* Total Tx engagement rate Rx OUD with H */
 {
  setpos( 2221 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2271+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2221] = wrk->temp0 ;
}
/* Treatment gap HUD */
 {
  setpos( 2224 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2262+sub9[wrk->sumind0]*1] ;
    wrk->temp1 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp1 += VGV->LEVEL[2356+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2224] = (1.000000-ZIDZ(0,wrk->temp0,VGV->LEVEL[17]*wrk->temp1
)) ;
}
/* Treatment gap Rx OUD */
 {
  setpos( 2225 );
    wrk->temp0 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp0 += VGV->LEVEL[2274+sub9[wrk->sumind0]*1]+VGV->LEVEL[2277
+sub9[wrk->sumind0]*1] ;
    wrk->temp1 = 0.0 ;
for(wrk->sumind0=0;wrk->sumind0<3;wrk->sumind0++)
    wrk->temp1 += VGV->LEVEL[27]*VGV->LEVEL[2360+sub9[wrk->sumind0]
*1]+VGV->LEVEL[33]*VGV->LEVEL[2365+sub9[wrk->sumind0]*1] ;
  VGV->LEVEL[2225] = (1.000000-ZIDZ(0,wrk->temp0,wrk->temp1)) ;
}
/* Tx capacity effective utilization */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2238+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2238+sub9[wrk->forind0]*1] = ZIDZ(0,VGV->LEVEL[2164+sub9[wrk->forind0]
*1],VGV->LEVEL[2235+sub9[wrk->forind0]*1]) ;
}
/* Tx demand total by type */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2256+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2256+sub9[wrk->forind0]*1] = VGV->LEVEL[2247+sub9[wrk->forind0]
*1]+VGV->LEVEL[2250+sub9[wrk->forind0]*1]+VGV->LEVEL[2253+sub9[wrk->forind0]
*1] ;
}
/* Tx engagement total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2280+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2280+sub9[wrk->forind0]*1] = VGV->LEVEL[2262+sub9[wrk->forind0]
*1]+VGV->LEVEL[2274+sub9[wrk->forind0]*1]+VGV->LEVEL[2277+sub9[wrk->forind0]
*1] ;
}
/* Tx exit in remission rate HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2286+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2286+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission HUD */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2283+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2283+sub9[wrk->forind0]*1] = VGV->LEVEL[12+sub9[wrk->forind0]
*1]*VGV->LEVEL[2286+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2289+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2289+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission rate Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2292+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2292+sub9[wrk->forind0]*1] = 1.000000/VGV->LEVEL[2231
+sub9[wrk->forind0]*1]*VGV->LEVEL[2368+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission Rx OUD no H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2295+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2295+sub9[wrk->forind0]*1] = VGV->LEVEL[22+sub9[wrk->forind0]
*1]*VGV->LEVEL[2289+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission Rx OUD with H */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2298+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2298+sub9[wrk->forind0]*1] = VGV->LEVEL[28+sub9[wrk->forind0]
*1]*VGV->LEVEL[2292+sub9[wrk->forind0]*1] ;
}
/* Tx exit in remission total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2301+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2301+sub9[wrk->forind0]*1] = VGV->LEVEL[2283+sub9[wrk->forind0]
*1]+VGV->LEVEL[2295+sub9[wrk->forind0]*1]+VGV->LEVEL[2298+sub9[wrk->forind0]
*1] ;
}
/* Tx exit with UD total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2325+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2325+sub9[wrk->forind0]*1] = VGV->LEVEL[2307+sub9[wrk->forind0]
*1]+VGV->LEVEL[2319+sub9[wrk->forind0]*1]+VGV->LEVEL[2322+sub9[wrk->forind0]
*1] ;
}
/* Tx exit total */
for(wrk->forind0=0;wrk->forind0<3;wrk->forind0++)
 {
  setpos( 2304+sub9[wrk->forind0]*1 );
  VGV->LEVEL[2304+sub9[wrk->forind0]*1] = VGV->LEVEL[2301+sub9[wrk->forind0]
*1]+VGV->LEVEL[2325+sub9[wrk->forind0]*1]+VGV->LEVEL[593+sub9[wrk->forind0]
*1]+VGV->LEVEL[688+sub9[wrk->forind0]*1] ;
}
} /* comp_aux */
int execute_curloop(GLOB_VARS *VGV) {return(0);}
static void vec_arglist_init(GLOB_VARS *VGV)
{
ST_INDEX stlist[7] = {11884,11884,1468,1516,8092,1468,1516};
add_vecarg_info(stlist,7);
}
void VEFCC comp_rate(GLOB_VARS *VGV)
{
mdl_func0(VGV);
}

void VEFCC comp_delay(GLOB_VARS *VGV)
{
mdl_func1(VGV);
}

void VEFCC init_time(GLOB_VARS *VGV)
{
mdl_func2(VGV);
}

void VEFCC init_tstep(GLOB_VARS *VGV)
{
mdl_func3(VGV);
}

void VEFCC comp_init(GLOB_VARS *VGV)
{
mdl_func4(VGV);
mdl_func5(VGV);
mdl_func6(VGV);
}

void VEFCC comp_reinit(GLOB_VARS *VGV)
{
mdl_func7(VGV);
}

void VEFCC comp_tstep(GLOB_VARS *VGV)
{
mdl_func8(VGV);
}

void VEFCC comp_aux(GLOB_VARS *VGV)
{
mdl_func9(VGV);
mdl_func10(VGV);
mdl_func11(VGV);
mdl_func12(VGV);
mdl_func13(VGV);
}

