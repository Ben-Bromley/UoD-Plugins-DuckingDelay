// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace) 
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_2A4EB9C353883A92827B6DA174A87936
#define AU_COCOA_VIEW_NAME AUCocoaView_2A4EB9C353883A92827B6DA174A87936

// --- BUNDLE IDs (MacOS Only) 
const char* kAAXBundleID = "developer.aax.duckingdelay.bundleID";
const char* kAUBundleID = "developer.au.duckingdelay.bundleID";
const char* kVST3BundleID = "developer.vst3.duckingdelay.bundleID";

// --- Plugin Names 
const char* kPluginName = "Ducking Delay";
const char* kShortPluginName = "Ducking Delay";
const char* kAUBundleName = "DuckingDelay_AU";
const char* kAAXBundleName = "DuckingDelay_AAX";
const char* kVSTBundleName = "DuckingDelay_VST";

// --- bundle name helper 
inline static const char* getPluginDescBundleName() 
{ 
#ifdef AUPLUGIN 
	return kAUBundleName; 
#endif 

#ifdef AAXPLUGIN 
	return kAAXBundleName; 
#endif 

#ifdef VSTPLUGIN 
	return kVSTBundleName; 
#endif 

	// --- should never get here 
	return kPluginName; 
} 

// --- Plugin Type 
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID 
const char* kVSTFUID = "{2a4eb9c3-5388-3a92-827b-6da174a87936}";

// --- 4-char codes 
const int32_t kFourCharCode = 'DKDY';
const int32_t kAAXProductID = 'DKDY';
const int32_t kManufacturerID = 'BBPG';

// --- Vendor information 
const char* kVendorName = "BB Plugins";
const char* kVendorURL = "www.benbromley.co.uk";
const char* kVendorEmail = "plugins@benbromley.co.uk";

// --- Plugin Options 
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif
