#include "__cf_MPM_v2.h"
#ifndef RTW_HEADER_MPM_v2_cap_host_h_
#define RTW_HEADER_MPM_v2_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } MPM_v2_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void MPM_v2_host_InitializeDataMapInfo ( MPM_v2_host_DataMapInfo_T * dataMap
, const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
