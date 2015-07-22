/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {

	NSCharacterSet* _original;
	NSCharacterSet* _invertedSet;
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)bitmapRepresentation;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_expandInverted;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isEmpty;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)invertedSet;
@end
