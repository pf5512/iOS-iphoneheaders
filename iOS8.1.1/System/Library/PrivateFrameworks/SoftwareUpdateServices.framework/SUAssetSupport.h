/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SUAssetSupport : NSObject
+(id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1 ;
+(id)tryCreateDocumentationFromDocumentationAsset:(id)arg1 ;
+(void)_cleanupAllAssetsOfType:(id)arg1 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExists;
+(id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id*)arg3 ;
+(id)defaultAssetDownloadOptionsWithPriority:(int)arg1 ;
+(id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 ;
+(void)cleanupAllSoftwareUpdateAssets;
+(void)cleanupAllSoftwareUpdateAndRelatedAssets;
+(void)purgeMSUUpdate:(/*^block*/id)arg1 ;
+(id)assetDownloadOptionsForDocumentation;
+(id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(BOOL)arg4 ;
@end

