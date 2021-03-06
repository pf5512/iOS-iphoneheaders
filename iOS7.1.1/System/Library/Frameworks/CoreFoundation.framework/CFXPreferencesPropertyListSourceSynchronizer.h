/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFXPreferencesPropertyListSource;

@interface CFXPreferencesPropertyListSourceSynchronizer : NSObject {

	unsigned short _mode;
	unsigned _owner;
	CFXPreferencesPropertyListSource* _source;
	CFDictionaryRef _dict;
	CFArrayRef _dirtyKeys;
	CFDictionaryRef _pendingMutations;
	CFURLRef _url;
	long long _formatToWrite;
	CFXPreferencesStatInfo _statInfo;
	unsigned _group;
	long long _generationCount;

}
-(id)initWithPropertyListSource:(id)arg1 forLockedSynchronize:(bool)arg2 ;
-(unsigned char)_backingPlistChangedSinceLastSync;
-(void*)createPlistFromDisk;
-(unsigned char)writePlistToDisk;
-(unsigned char)synchronizeAlreadyFlocked;
-(void)dealloc;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronize;
-(void)finalize;
@end

