SPECIAL>NOINTERACTION
SPECIAL>LOADMODEL|SOURCE_FENT_COVID_with manual increase in bup receipt.mdl
SIMULATE>payoff|OIC0203.vpd
SIMULATE>sensitivity|
SIMULATE>optparm|OIC220127_f.voc
SIMULATE>savelist|
SIMULATE>senssavelist|OIC_sens.lst
SIMULATE>DATA|"inputtimeseries.vdf,validationtimeseries.vdf,monthlytimeseries.vdf,yearsubs.vdf"
SIMULATE>READCIN|CalWts220120.cin
SIMULATE>ADDCIN|ProjEndVals.cin
SIMULATE>ADDCIN|Data2019.cin
SIMULATE>ADDCIN|X8_test_Data2019.out

SIMULATE>RUNNAME|covid_main_full
SIMULATE>REPORT|1
MENU>RUN_OPTIMIZE|o
MENU>VDF2TAB|!|!||
SPECIAL>CLEARRUNS
MENU>EXIT
