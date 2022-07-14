// AEGP Read Data from AE
AEGP_LayerH layerH;
ERR(suites.LayerSuite5()->AEGP_GetActiveLayer(&layerH));

A_Time inTime;
A_Time duration;

ERR(suites.LayerSuite8()->AEGP_GetLayerInPoint(layerH, AEGP_LTimeMode_LayerTime, &inTime));

ERR(suites.LayerSuite8()->AEGP_GetLayerInPoint(layerH, AEGP_LTimeMode_LayerTime, &duration));

AEGP_StreamRefH positionStream;
AEGP_StreamRefH scaleStream;

AEGP_StreamValue2 positionValue;
AEGP_StreamValue2 scaleValue;

ERR(suites.StreamSuite5()->AEGP_GetNewLayerStream(S_my_id, layerH, AEGP_LayerStream_POSITION, &positionStream));

ERR(suites.StreamSuite5()->AEGP_GetNewLayerStream(S_my_id, layerH, AEGP_LayerStream_SCALE, &scaleStream));

ERR(suites.StreamSuite5()->AEGP_GetNewStreamValue(S_my_id, positionStream, AEGP_LTimeMode_LayerTime, &inTime, FALSE, &positionValue));

ERR(suites.StreamSuite5()->AEGP_GetNewStreamValue(S_my_id, scaleStream, AEGP_LTimeMode_LayerTime, &inTime, FALSE, &scaleValue));