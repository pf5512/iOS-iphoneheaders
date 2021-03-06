/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@class NSDictionary;

@interface OTALog : NSObject {

	_sFILE* _stream;
	NSDictionary* metaData;
	NSDictionary* _metaData;

}

@property (readonly) _sFILE* stream;                       //@synthesize stream=_stream - In the implementation block
@property (readonly) NSDictionary * metaData;              //@synthesize metaData=_metaData - In the implementation block
+(BOOL)usesMetaData:(int)arg1 ;
-(BOOL)isFile:(id)arg1 validForSubmission:(int)arg2 ;
-(BOOL)isFile:(id)arg1 reasonableSize:(long long)arg2 forRouting:(int)arg3 andType:(int)arg4 ;
-(id)initWithPath:(id)arg1 forRouting:(int)arg2 ;
-(void)dealloc;
-(_sFILE*)stream;
-(NSDictionary *)metaData;
@end

