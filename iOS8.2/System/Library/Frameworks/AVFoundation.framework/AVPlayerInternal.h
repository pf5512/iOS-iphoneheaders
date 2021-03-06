/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakKeyValueObserverProxy, AVPixelBufferAttributeMediator, NSObject, AVPlayerItem, AVPropertyStorage, NSMutableDictionary, NSArray, NSMutableSet, NSHashTable, NSString, NSError, NSDictionary, AVAudioSessionMediaPlayerOnly;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakKeyValueObserverProxy* KVOProxy;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVPlayerItem* currentItem;
	OpaqueFigPlayerRef figPlayer;
	OpaqueCMClockRef figMasterClock;
	AVPropertyStorage* propertyStorage;
	NSMutableDictionary* pendingFigPlayerProperties;
	NSArray* expectedAssetTypes;
	AVPlayerItem* lastItem;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	NSMutableSet* items;
	NSObject*<OS_dispatch_queue> layersQ;
	CFDictionaryRef videoLayers;
	NSMutableSet* subtitleLayers;
	NSMutableSet* closedCaptionLayers;
	CGSize cachedDisplaySize;
	NSHashTable* avPlayerLayers;
	NSString* externalPlaybackVideoGravity;
	int status;
	NSError* error;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSArray* displaysUsedForPlayback;
	char needsToCreateFigPlayer;
	char logPerformanceData;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	OpaqueCMTimebaseRef proxyTimebase;
	char reevaluateBackgroundPlayback;
	char hostApplicationInForeground;
	char hadAssociatedOnscreenPlayerLayerWhenSuspended;
	char iapdExtendedModeIsActive;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	NSDictionary* vibrationPattern;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	char autoSwitchStreamVariants;
	char preparesItemsForPlaybackAsynchronously;
	char allowsOutOfBandTextTrackRendering;

}
@end

