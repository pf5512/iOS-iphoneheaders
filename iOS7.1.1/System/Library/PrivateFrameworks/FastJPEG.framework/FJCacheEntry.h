/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FastJPEG.framework/FastJPEG
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FastJPEG/FastJPEG-Structs.h>
@interface FJCacheEntry : NSObject {

	id _object;
	lruEntry* _entry;

}
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(lruEntry*)lruListEntry;
@end
